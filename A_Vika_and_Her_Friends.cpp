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
        int n, m, k; cin >> n >> m >> k;
        int x, y; cin >> x >> y;
        bool ans = true;
        while(k--)
        {
            int a, b; cin >> a >> b;
            if((x+y)%2==(a+b)%2)
            {
                ans = false;
            }
        }
        if(ans) yes;
        else no;

    }
}