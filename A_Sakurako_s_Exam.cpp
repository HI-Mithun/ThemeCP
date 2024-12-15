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
        int a, b; cin >> a >> b;
        if(a==0 && b%2==0) yes;
        else if(a%2==0 && a!=0 && b==0) yes;
        else if(a%2==0 && a!=0 && b%2!=0) yes;
        else if(a%2==0 && b%2==0) yes;
        else no;
    }
}