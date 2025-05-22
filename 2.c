/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    int num1=0;
    int smtg=0;

    while(1)
    {
        num1=pow(10,smtg)*l1->val+num1;
        smtg++;

        if (!l1->next)
        {
            break;
        }

        l1=l1->next;
    }

    int num2=0;
    smtg=0;

    while(1)
    {
        num2=num2+pow(10,smtg)*l2->val;
        smtg++;
        

        if (!l2->next)
        {
            break;
        }
        l2=l2->next;
    }

    int sum=num1+num2;

    struct ListNode* Result=(struct ListNode*)malloc(sizeof(struct ListNode));
    Result->val=sum%10;
    sum=(sum-sum%10)/10;
    Result->next=NULL;

    struct ListNode* tail=Result;

    while(1)
    {
        if(sum==0)
    {
        break;
    }
        struct ListNode* temp1=malloc(sizeof(struct ListNode));

    temp1->val=sum%10;
    sum=(sum-sum%10)/10;
    temp1->next=NULL;
    tail->next=temp1;
    tail=tail->next;

    

    }
    return Result;

    

}