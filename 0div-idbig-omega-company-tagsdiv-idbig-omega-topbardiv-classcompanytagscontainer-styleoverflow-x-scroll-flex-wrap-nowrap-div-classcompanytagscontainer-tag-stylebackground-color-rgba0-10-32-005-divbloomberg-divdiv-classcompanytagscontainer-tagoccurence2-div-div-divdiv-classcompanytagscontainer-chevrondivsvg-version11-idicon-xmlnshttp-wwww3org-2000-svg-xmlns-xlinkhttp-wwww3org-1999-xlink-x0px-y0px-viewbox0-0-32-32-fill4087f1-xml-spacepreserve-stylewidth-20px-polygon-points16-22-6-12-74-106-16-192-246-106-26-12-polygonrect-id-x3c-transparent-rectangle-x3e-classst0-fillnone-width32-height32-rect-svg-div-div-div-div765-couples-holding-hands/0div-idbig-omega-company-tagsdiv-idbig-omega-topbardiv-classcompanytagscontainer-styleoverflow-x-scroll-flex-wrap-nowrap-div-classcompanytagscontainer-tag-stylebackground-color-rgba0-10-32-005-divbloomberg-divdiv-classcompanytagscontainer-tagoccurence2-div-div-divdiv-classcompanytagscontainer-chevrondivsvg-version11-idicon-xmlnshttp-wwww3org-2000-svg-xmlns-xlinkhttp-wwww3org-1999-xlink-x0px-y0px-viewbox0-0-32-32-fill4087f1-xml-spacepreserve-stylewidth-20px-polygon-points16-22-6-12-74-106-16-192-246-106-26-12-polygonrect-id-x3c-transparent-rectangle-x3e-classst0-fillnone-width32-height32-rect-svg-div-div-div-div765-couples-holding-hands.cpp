class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        
        
        int n=row.size();       
    for(int i=0;i<n;i++){
        if(row[i]%2!=0) row[i]--;  //decrement(by 1) each odd element present in row
    }
    
    int count=0;
    
    for(int i=0;i<n;i=i+2){
        
        if(row[i]!=row[i+1]){  //if adjacent couples doesn't match, then increment count and initialise j
            count++;
            int j=i+2;
            while(j<n && row[i]!=row[j]) j++; 
            
            swap(row[i+1],row[j]);   //swap row[i+1] with row[j];              
        }
    }
    
    return count;
        
        
        
    }
};