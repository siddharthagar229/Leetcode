
class NestedIterator {
public:	
    vector<int> result;
	
    int i = 0;
	
    void Solve(vector<NestedInteger> nestedList) {
	
        for(auto u : nestedList) {
	
            if(u.isInteger()) {
                result.push_back(u.getInteger());
            }
			
            else {
                Solve(u.getList());
            }
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
	
        Solve(nestedList);
    }
    
    int next() {
	
        return result[i++];
    }
    
    bool hasNext() {
	
        if(i < result.size()) {
            return true;
        }
        return false;
    }
};