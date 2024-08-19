#include<iostream>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int a, b, e;
    a = (k * l) / nl;  
    b = c * d;        
    e = p / np;        
 
   
    int ans = min(a, min(b, e));
 
    
    int f = ans / n;
    
    cout << f << endl;
    return 0;
}