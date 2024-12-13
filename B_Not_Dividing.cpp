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
            if(v[i]==1)
            {
                v[i]++;
            }
        }
        for (int i = 0; i < n-1; i++) {
            while(v[i+1]%v[i]==0)
            {
                v[i+1]++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}