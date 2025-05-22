/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
 {
    int sum=0;
    int carry=0;
    struct ListNode* result=malloc(sizeof(struct ListNode));
    struct ListNode* tail=result;

 while(l1!=NULL||l2!=NULL||carry!=0)
 {
    
    sum=carry;

    if(l1!=NULL)
    {
        sum=l1->val+sum;
        l1=l1->next;
    }
    if(l2!=NULL)
    {
        sum=l2->val+sum;
        l2=l2->next;

    }
    carry=0;

    if(sum/10!=0)
    {
        carry=1;
    }

    struct ListNode* temp=malloc(sizeof(struct ListNode));

    temp->val=sum%10;
    temp->next=NULL;
    tail->next=temp;
    tail=tail->next;

    







 }

 return result->next;
    
}