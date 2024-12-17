class Solution {
public:
    bool isHappy(int n) {
      if(n==1 || n==7) return true;
      else if(n<10) return false;
      int m=0;
      while(n!=0){
        int digit=n%10;
        m+=digit*digit;
        n=n/10;
      }
      return isHappy(m);
    }
};
