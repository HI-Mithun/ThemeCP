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
        cin.ignore();
        string s; cin >> s;
        int l = s.size();
        char up = '0';
        for (int i = 0; i < l; i++) {
            if(s[i]=='?')
            {
                s[i]=up;
            }
            else up = s[i];
        }
        cout << s << endl;
    }
}