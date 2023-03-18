class BrowserHistory {
public:
    int curr=0;
    int max_fwd=0;
    unordered_map<int, string> umap;
    
    BrowserHistory(string homepage) {
        curr=0;
        max_fwd=0;
        umap[curr] = homepage;
    }
    
    void visit(string url) {
        curr++;
        umap[curr]=url; 
        max_fwd=curr;
    }
    
    string back(int steps) {
        int goback = min(curr, steps);
        curr-=goback;
        return umap[curr];
    }
    
    string forward(int steps) {
        curr=min(max_fwd, curr+steps);
        return umap[curr];
    }
};