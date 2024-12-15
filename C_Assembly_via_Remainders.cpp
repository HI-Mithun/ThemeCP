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
        vi v(n);
        for (int i = 0; i < n-1; i++) {
            cin >> v[i];
        }
        int a = n;
        int b = n+1;
        vi ans(n);
        ans.pb(a);
        ans.pb(b);

        
        cout << v[0] << " ";
        for (int i = 1; i <n; i++) {
            
        }
        cout << endl;
    }
    return 0;
}
