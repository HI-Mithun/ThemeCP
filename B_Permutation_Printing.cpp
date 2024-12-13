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
        int x = 1, y = n;
        for (int i = 1; i <= n; i++) {
            if(i&1)
            {
                cout << x << " ";
                x++;
            }
            else
            {
                cout << y << " ";
                y--;
            }
        }
        cout << endl;
    }
}