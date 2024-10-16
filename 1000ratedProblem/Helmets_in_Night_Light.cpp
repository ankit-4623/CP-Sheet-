#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    long long t; 
    cin >> t;
    while (t--) {
        long long n, p; 
        cin >> n >> p;
        vector<long long> capacity(n);  
        for (long long i = 0; i < n; i++) { 
            cin >> capacity[i];
        }
        vector<long long> cost(n);  
        vector<pair<long long, long long>> ans;  
        for (long long i = 0; i < n; i++) {  
            cin >> cost[i];
            ans.push_back({min(p, cost[i]), capacity[i]});
        }
 
        sort(ans.begin(), ans.end());
        long long pe = n-1;  
        long long result = p;  
 
        for (long long i = 0; i < n-1; i++) {  
            result += min(pe, ans[i].second) * ans[i].first;  
            pe -= min(pe, ans[i].second);
        }
 
        cout << result << endl;
    }
    return 0;
}