int lengthOfLongestSubstring(char* s) 
{
    int size=0;
    int temp=strlen(s);
    int start=0;
    for (int i=0;i<=strlen(s);i++)
    {
        
        for(int j=start;j<i;j++)
        {
        if(s[i]==s[j])
        {
            temp=j;
            break;
        }
        }
        if(size<(i-start))
        {
            size=i-start;
            
        }
        if(temp!=strlen(s))
        {
            start=temp+1;
            i=temp;
            temp=strlen(s);
            continue;

        }
    }

    if(size==0&&strlen(s)!=0)
    {
        size=strlen(s);
    }
    
   
    return size;
    
}