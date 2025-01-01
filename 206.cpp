/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* reverseByUsingRecursion(ListNode* prev,ListNode* curr){
    //base case
    if(curr==NULL){
        return prev;
    }
    //1 case hme banane hai
    ListNode* nextNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;
    //baki recursion ka kaam haii
    ListNode* recursionAns=reverseByUsingRecursion(prev,curr);
    return recursionAns;
 }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
       return reverseByUsingRecursion(prev,curr);
        //while(curr!=NULL){
            //ListNode* nextNode=curr->next;
            //curr->next=prev;
            //prev=curr;
            //curr=nextNode;
       // }
        //return prev;
    }
};
