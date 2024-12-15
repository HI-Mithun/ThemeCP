#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v1(n), v2(m), v3(k + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            if (v1[i] <= k) {
                v3[v1[i]] |= 1; 
            }
        }

        for (int i = 0; i < m; i++) {
            cin >> v2[i];
            if (v2[i] <= k) {
                v3[v2[i]] |= 2;
            }
        }

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 1; i <= k; i++) {
            if (v3[i] == 1) cnt1++;       
            else if (v3[i] == 2) cnt2++;  
            else if (v3[i] == 3) cnt3++;
        }
        
        if (cnt1 > k / 2 || cnt2 > k / 2 || cnt1 + cnt2 + cnt3 != k) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
