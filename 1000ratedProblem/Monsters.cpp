#include<iostream>
#include<vector>
#include <queue>
#include<algorithm>
using namespace std;

struct Compare {
    bool operator()(pair<int, int> const& p1, pair<int, int> const& p2) {
        if (p1.first == p2.first) {
            return p1.second > p2.second;  
        }
        return p1.first > p2.first;  
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < a.size(); i++) {
            cin >> a[i];
        }

        
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> ans;
            vector<int> result;
        for (int i = 0; i < a.size(); i++) {
            int remainder = a[i] % k;
            if (remainder == 0) {
                remainder = k;  
            }
            ans.push({remainder, -i});  
        }

        
       while (!ans.empty()) {
            pair<int, int> p = ans.top();
            result.push_back(abs(p.second) + 1); 
            ans.pop();
        }

        reverse(result.begin(), result.end());
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
