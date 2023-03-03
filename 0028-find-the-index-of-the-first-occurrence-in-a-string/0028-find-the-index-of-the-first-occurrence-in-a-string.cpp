class Solution {
public:
    int strStr(string haystack, string needle) {
         if(needle==""||haystack==needle)
           return 0;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                int n=1,f=1;
                while(n<needle.size())
                {
                    if(haystack[i+n]==needle[n])
                          f=1;
                    else
                    {f=0; break;}
                    n++;
                }
             if(f==1)
                 return (i);
            }
        }
       return -1; 
    }
};