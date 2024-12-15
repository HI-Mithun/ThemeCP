#include <bits/stdc++.h>
using namespace std;

bool canReach(int n, int k) {
    if (n < k) return false;
    if (n == k) return true; 
    
    if (n % 3 != 0) return false;

    int a = n / 3; 
    int b = 2 * a; 

    return canReach(a, k) || canReach(b, k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (canReach(n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}
