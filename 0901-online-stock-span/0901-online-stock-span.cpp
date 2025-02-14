class StockSpanner {
public:
    vector<int> arr;


    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 1;
        int idx = arr.size() > 0 ? arr.size() - 1 : -1;
        arr.push_back(price);
        if (idx<0) return 1;
        while (!arr.empty() && idx >= 0 && arr[idx] <= price) {
            ans++;
            idx--;
        }
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */