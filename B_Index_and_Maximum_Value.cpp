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
const int mx = 1e5 + 123;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int k = *max_element(v.begin(), v.end());

        while(m--)
        {
            char c; int l, r; cin >> c >> l >> r;
            if (l <= k && k <= r)
            {
                if (c == '+')
                {
                    k = k + 1;
                }
                else
                {
                    k = k - 1;
                }
            }
            cout << k << " ";
        }
        cout << endl;
    }
}