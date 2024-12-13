#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

vector<pi> Move(int x, int y, int a, int b) {
    set<pi> movesSet = {
        {x + a, y + b}, {x + a, y - b}, {x - a, y + b}, {x - a, y - b},
        {x + b, y + a}, {x + b, y - a}, {x - b, y + a}, {x - b, y - a}
    };
    return vector<pi>(movesSet.begin(), movesSet.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        vector<pi> KingMoves = Move(xK, yK, a, b);
        vector<pi> QueenMoves = Move(xQ, yQ, a, b);

        set<pi> KingSet(KingMoves.begin(), KingMoves.end());
        int ans = 0;
        for (pi move : QueenMoves) {
            if (KingSet.count(move)) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
