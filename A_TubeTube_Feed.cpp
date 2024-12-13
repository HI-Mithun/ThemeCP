#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vi v1(n), v2(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }
        
        int maxInterest = -1;
        int chosenIndex = -1;
        
        for (int i = 0; i < n; i++) {
            if (v1[i] <= k) {
                if (v2[i] > maxInterest) { 
                    maxInterest = v2[i];
                    chosenIndex = i + 1;
                }
            }
            k--;
            if (k < 0) break;
        }
        
        if (chosenIndex == -1) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            cout << chosenIndex << endl;
        }
    }
    
}
