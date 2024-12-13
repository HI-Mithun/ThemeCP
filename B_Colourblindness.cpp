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
        string s1, s2; cin >> s1 >> s2;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (s1[i] == 'R' || s2[i] == 'R') {
                if (s1[i] != s2[i]) {
                    valid = false;
                    break;
                }
            }
        }

        if (valid) yes;
        else no;
    }
}
