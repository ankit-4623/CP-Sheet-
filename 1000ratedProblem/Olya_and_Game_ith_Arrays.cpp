#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long int t;  
    cin >> t;
    while (t--) {
        long long int n, m; 
        cin >> n;
        vector<long long int> one_small;
        vector<long long int> after_small_sec_small; 
        
        for (long long int i = 0; i < n; i++) { 
            cin >> m;
            vector<long long int> fin(m); 
            
            for (long long int i = 0; i < fin.size(); i++) {  
                cin >> fin[i];
            }
            
            sort(fin.begin(), fin.end());
            one_small.push_back(fin[0]);
            after_small_sec_small.push_back(fin[1]);
        }

        sort(one_small.begin(), one_small.end());
        sort(after_small_sec_small.begin(), after_small_sec_small.end());
        
        long long int ans = one_small[0];  
        
        for (long long int i = 1; i < after_small_sec_small.size(); i++) {  
            ans += after_small_sec_small[i];
        }

        cout << ans << endl;
    }

    return 0;
}
