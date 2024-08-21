#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x, y;
    cin >> n >> x >> y;

     vector<int> rain(n);
    for (int i = 0; i < n; ++i) {
      cin >> rain[i];
    }

  
    for (int d = 0; d < n; d++) {
        bool isNotSoRainy = true;

        
        for (int j = max(0, d - x); j < d; ++j) {
            if (rain[d] >= rain[j]) {
                isNotSoRainy = false;
                break;
            }
        }

     
        if (isNotSoRainy) {
            for (int j = d + 1; j <= min(n - 1, d + y); ++j) {
                if (rain[d] >= rain[j]) {
                    isNotSoRainy = false;
                    break;
                }
            }
        }

        if (isNotSoRainy) {
            cout << d + 1 << endl;  
            break;
        }
    }

    return 0;
}
