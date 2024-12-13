#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define endl "\n"

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        n = n-2;
        int x, y;
        if(n%2==0)
        {
            x = n/2, y = n/2;
        }
        else
        {
            x=n/2, y=n/2+1;
        }
        while (__gcd(x, y) != 1) {
            --x;
            ++y;
        }

        cout << x << " " << y << " " << 1 << " " << 1 << endl;
    }
    return 0;
}
