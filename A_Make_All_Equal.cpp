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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        unordered_map<int, int> mp;
        for(auto c:v)
        {
            mp[c]++;
        }
        vi v1;
        for(auto k: mp)
        {
           v1.pb(k.second);
        }
        int mx = *max_element(v1.begin(), v1.end());
        cout <<n-mx<< endl;
    }
}