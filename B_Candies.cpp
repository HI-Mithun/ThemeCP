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
        int ans = 1;
        int spell = 40;
        vi v;
        if(n%2==0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            bool ans = false;
            while(spell--)
            {
            int temp = floor(double(n)/2);

            if(temp%2==0)
            {
                v.pb(1);
                n = ceil(double(n)/2);
            }
            else
            {
                v.pb(2);
                n = floor(double(n)/2);
            }
            if(n==1)
            {   
                ans = true;
                break;
            }
            }
            if(ans)
            {
                // sort(v.rbegin(), v.rend());
                cout << v.size() << endl;

                for (int i = v.size()-1; i >= 0; i--) {
                    cout << v[i] << " ";
                }
            }
            cout << endl;
        }

    }
}