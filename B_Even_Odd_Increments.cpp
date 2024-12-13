#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vi v(n);
        int evencnt = 0, oddcnt = 0;
        unsigned long long int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) {
                evencnt++;
            } else {
                oddcnt++;
            }
            sum += v[i];
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if (x == 0) {

                sum += (ll)y * evencnt;
                if (y % 2 != 0) { 
                    oddcnt += evencnt;
                    evencnt = 0;
                }
            }
            else {
                sum += (ll)y * oddcnt;
                if (y % 2 != 0) { 
                    evencnt += oddcnt;
                    oddcnt = 0;
                }
            }
            cout << sum << endl;
        }
    }
}
