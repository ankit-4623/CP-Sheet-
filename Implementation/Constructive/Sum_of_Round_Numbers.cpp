#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        int temp = n;  
        int count = 0;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit > 0) {
                int p = digit;
                for (int j = 0; j < count; j++)
                {
                    p *= 10;
                }
                a.push_back(p);
            }
            temp /= 10;
            count++;
        }
         cout << a.size() << endl;
        for (int j = 0; j < a.size(); j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
