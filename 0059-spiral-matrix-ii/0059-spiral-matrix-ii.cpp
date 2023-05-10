class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int >(n,0));
        
        int T,B,L,R,dir;
    T=0;
    B=v.size()-1;
    L=0;
    R=v[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
        int x=1;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++){
                v[T][i]=x;
                x++;
            }
            T++;
            // x++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++){
                v[i][R]=x;
                x++;
                
            }
            R--;
            // x++;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--){
                v[B][i]=x;
                x++;
            }
            B--;
            // x++;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--){
                v[i][L]=x;
                x++;
            }
            L++;
            // x++;
        }
        dir=(dir+1)%4;
    }
    return v;
        
    }
};