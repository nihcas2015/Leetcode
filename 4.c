double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int low1,low2;
    int high1=nums1[nums1Size-1];
    int high2=nums2[nums2Size-1];
    int temp1=0,temp2=0,temp3=0;
    double result[nums1Size+nums2Size];

    for (int i=0;i<(nums1Size+nums2Size);i++)
    {
        if ((nums1Size)<=temp1)
        {
            result[temp3++]=nums2[temp2++];
            continue;
        }
        else if ((nums2Size)<=temp2)
        {
            result[temp3++]=nums1[temp1++];
            continue;

        }
        if(nums1[temp1]>nums2[temp2])
        {
            result[temp3++]=nums2[temp2++];
        }
        else if(nums1[temp1]==nums2[temp2])
        {
                        result[temp3++]=nums2[temp2++];
        }
        else
        {
            result[temp3++]=nums1[temp1++];
        }

    }

    if((nums1Size+nums2Size)%2==0)
    {
        return ((result[(nums1Size+nums2Size)/2]+result[((nums1Size+nums2Size)/2)-1])/2);
    }
    else
    {
        return result[(nums1Size+nums2Size)/2];
    }
}