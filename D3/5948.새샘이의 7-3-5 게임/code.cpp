#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        vector<int> arr(7);
        for (int& x : arr) cin >> x;
        vector<int> sel(7, 0);
        fill(sel.end()-3, sel.end(), 1);
        set<int> s;
        do {
            int sum = 0;
            for (int i = 0; i < 7; i++)
                if (sel[i] == 1)
                    sum += arr[i];
            s.insert(sum);
        } while (next_permutation(sel.begin(), sel.end()));
        cout << '#' << t << ' ' << *next(s.end(), -5) << '\n';
    }
    return 0;
}
