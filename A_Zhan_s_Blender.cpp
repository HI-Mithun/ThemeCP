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
        int x, y; cin >> x >> y;
        int blend = min(x, y);
        if(n%blend==0)
        {
            cout << n/blend << endl;
        }
        else
        {
            cout << n/blend+1 << endl;
        }
    }
}