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
        unsigned long long int a, b, c; cin >> a >> b >> c;
        unsigned long long int ans = c / a + c / b + 2;
        cout << ans << endl;
    }
}