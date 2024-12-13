#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define pb push_back
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vi v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        vi v1;
        for (int i = 1; i <=n; i++) {
            if(i%2!=0)
            {
                v1.pb(v[i]);
            }
        }
        int mx = *max_element(v1.begin(), v1.end());

        cout << mx << endl;
    }
}