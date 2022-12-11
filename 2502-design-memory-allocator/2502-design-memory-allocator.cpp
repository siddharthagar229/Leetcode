class Allocator {
public:
    vector<unsigned int> mem;
    set<int> st;
    Allocator(int n) : mem(n) {
    }
    
    int allocate(int size, int mID) {
        int i = 0;
        int mem_size = mem.size();
        while (i < mem_size) {
            if (mem[i] == 0) {
                auto it = st.upper_bound(i);
                int next = (it == st.end()) ? mem_size : *it;
                if (next - i >= size) {
                    mem[i] = (mID << 16) | size;
                    st.insert(i);
                    return i;
                } else {
                    i = next;
                }
            } else {
                i += (mem[i] & 0xffff);
            }
        }
        return -1;
    }
    
    int free(int mID) {
        int i = 0;
        int res = 0;

        auto it = st.begin();
        while (it != st.end()) {
            int i = *it;
            int id = (mem[i] >> 16);
            int size = mem[i] & 0xffff;

            if (id != mID) {
                ++it;
            } else {
                mem[i] = 0;
                res += size;
                it = st.erase(it);
            }
        }
        return res;
    }
};
/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */