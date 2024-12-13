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
        int n, k; cin >> n >> k;
        int l = 0, r = INT_MAX;
        while(n--)
        {
            int x, y; cin >> x >> y;
            if(x<=k && y>=k)
            {
                l = max(l, x);
                r = min(r, y);
            }
        }
        if(l==r && l==k) yes;
        else no;
    }
}