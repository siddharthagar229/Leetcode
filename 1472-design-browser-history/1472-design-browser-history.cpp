class BrowserHistory {
public:
    vector<string> v;
    int i=0;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        i=v.size()-1;
    }
    
    void visit(string url) {
        v.erase(v.begin()+i+1,v.end());
        v.push_back(url);
        i=v.size()-1;
    }
    
    string back(int steps) {
        if(steps>i){
            i=0;
            return v[i];
        } 
        i = i - steps;
        return v[i];
    }
    
    string forward(int steps) {
        if(steps>((v.size()-1)-i)){
            i=v.size()-1;
            return v[i];
        } 
        i = i + steps;
        return v[i];
    }
};