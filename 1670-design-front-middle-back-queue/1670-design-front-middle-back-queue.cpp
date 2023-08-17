class FrontMiddleBackQueue {
public:

vector<int>v;
    FrontMiddleBackQueue() { }
    void pushFront(int val) {
        
        v.insert(v.begin(),val);
    }
    
    void pushMiddle(int val) {
        
        int n = v.size();
        v.insert(v.begin()+n/2,val);
    }
    
    void pushBack(int val) {

       v.push_back(val);   
    }
    
    int popFront() {
        
        if(v.size()==0) return -1;
        int n = v.size();
        int temp = *v.begin();
        v.erase(v.begin());

        return temp;
    }
    
    int popMiddle() {

        if(v.size()==0) return -1;
        int n = v.size();
        int temp = v[(n-1)/2];
        v.erase(v.begin()+((n-1)/2));

        return temp;

    }
    
    int popBack() {

        if(v.size()==0) return -1;
        int n = v.size();
        int temp = *v.rbegin();
        v.pop_back();

        return temp;
    }
};
