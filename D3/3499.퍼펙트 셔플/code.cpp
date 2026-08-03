#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        vector<string> deck(n);
        for(auto& card : deck) cin >> card;
        int p1 = 0, p2 = n%2==0 ? n/2 : n/2+1;
        cout << '#' << t << ' ';
        while(p2 < n) cout << deck[p1++] << ' ' << deck[p2++] << ' ';
        if(n%2 != 0) cout << deck[p1];
        cout << '\n';
    }
    return 0;
}
