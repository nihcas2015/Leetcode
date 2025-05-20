/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    struct hash
    {
        int index;
        int value;
        struct UT_hash_handle hh;

    };

    struct hash *table=NULL,*node;

    for (int i=0;i<numsSize;i++)
    {
    
        int value=target-nums[i];
        HASH_FIND_INT(table,&value,node);
        if (node)
        {
           int* result = (int*)malloc(2 * sizeof(int));
            result[0] = node->index;
            result[1] = i;
            *returnSize=2;


            return result;

        }
        struct hash *temp=malloc(sizeof(struct hash));
        temp->index=i;
        temp->value=nums[i];

        HASH_ADD_INT(table,value,temp);
        
    } 
*returnSize = 0;
    return NULL;}