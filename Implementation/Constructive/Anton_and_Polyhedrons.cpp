#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t, sum = 0;
    cin >> t;
    while (t--) {
        char s[1001]; 
        cin >> s;
        if (s[0] == 'T') {
            sum += 4;
        } else if (s[0] == 'C') {
            sum += 6;
        } else if (s[0] == 'O') {
            sum += 8;
        } else if (s[0] == 'D') {
            sum += 12;
        } else if (s[0] == 'I') {
            sum += 20;
        }
    }
    cout << sum << endl;

    return 0;
}
