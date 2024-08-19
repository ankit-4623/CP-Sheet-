#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    int max_height = heights[0], min_height = heights[0];
    int max_index = 0, min_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_index = i;
        }
    }
    
    int total_swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        total_swaps -= 1;
    }
    
    cout << total_swaps << endl;
    
    return 0;
}
