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
        if(n==1 || n==3)
        {
            cout << -1 << endl;
            continue;
        }
        if(n==2)
        {
            cout << 66 << endl;
            continue;;
        }
        if(n%2==0)
        {
            for (int i = 0; i < n-2; i++) {
                cout << 3;
            }
            cout << 66 << endl;
        }
        else
        {
            for (int i = 0; i < n-5; i++) {
                cout << 3;
            }
            cout << 36366 << endl;
        }


    }
}