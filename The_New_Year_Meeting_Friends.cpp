#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    

    sort(a.begin(), a.end(), greater<int>());
    
    int ans = (a[0] - a[1]) + (a[1] - a[2]);
    cout << ans << endl;

    return 0;
}
