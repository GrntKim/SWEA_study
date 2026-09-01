#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    cin.ignore();
    for (int t = 1; t <= T; t++) {
        vector<string> v(5);
        size_t max_l = 0;
        for (int i = 0; i < 5; i++) {
            getline(cin, v[i]);
            max_l = max(max_l, v[i].size());
        }

        cout << '#' << t << ' ';
        for (size_t i = 0; i < max_l; i++)
            for (int j = 0; j < 5; j++)
                if (i < v[j].size()) cout << v[j][i];
        cout << '\n';
    }
    return 0;
}
