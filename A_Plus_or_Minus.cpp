#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define pb push_back
#define endl "\n"

int main()
{
    int t; cin >>t;
    while(t--)
    {
    int a, b, c; cin >> a >> b >> c;
    if((a+b)==c)
    {
        cout << '+' << endl;
    }
    else
    {
        cout << '-' << endl;
    }
    }
}