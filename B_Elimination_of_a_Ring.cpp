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
        set<int> s;
        // vi v(n);
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            s.insert(a);
        }
        if(s.size()==2)
        {
            cout << n/2+1 << endl;
        }
        else
        {
            cout << n << endl;
        }

    }
}