class MyHashSet {
public:
    int arr[1000001] = {0};
    MyHashSet() {
        
    }
    
    void add(int key) {
        arr[key]++;
    }
    
    void remove(int key) {
        if(arr[key]!=0)
       arr[key] = 0;
    }
    
    bool contains(int key) {
        if(arr[key]==0)
            return false;
        else
            return true;
    }
};
