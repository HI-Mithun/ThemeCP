#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(b==1)
        {
            yes;
            for (int i = 1; i <= a; i++) {
                cout << i << endl;
            }
            continue;
        }
        if(a%2==1)
        { 
            no;
            continue;
        }

        yes;
        for (int i = 1; i <= a; i++) {
            for (int j = i; j <= a*b; j+=a) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}