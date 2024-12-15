#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        s += s;
        int distance = 0;
        int last_g = -1;
        vector<int> dist(s.size(), INT_MAX);

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                last_g = i;
            }
            if (last_g != -1) {
                dist[i] = last_g - i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                distance = max(distance, dist[i]);
            }
        }

        cout << distance << endl;
    }

    
}
