class Solution {
public:
    string intToRoman(int num) {
        string s[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
int arr[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
string ans="";
        
        
        int n= *(&arr + 1) - arr;
        for(int i=n-1;i>=0;i--){
            while(num>=arr[i]){
                ans+=s[i];
                num-=arr[i];
                
            }
            
        }
        
        return ans;
        
        
        
        
    }
};