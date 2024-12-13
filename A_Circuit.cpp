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
        vi v(2*n);
        int cnt0=0, cnt1=0;
        for (int i = 0; i < 2*n; i++) {
            cin >> v[i];
            if(v[i]==0)
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if(cnt1==n)
        {
            if(n%2==0)
            {
                cout << 0 << " " << n << endl;
            }
            else
            {
                cout << 1 << " " << n << endl;
            }
        }
        else
        {
            int mx = min(cnt0, cnt1);
            int mn = 0;
            if(cnt1%2==0 && cnt0%2==0)
            {
                mn=0;
            }
            else
            {
                mn = 1;
            }
            cout << mn << " " << mx << endl;
        }

    }
}