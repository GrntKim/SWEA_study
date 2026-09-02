#include <iostream>
#include <algorithm>

using namespace std;

string table[] = {"red", "orange", "yellow", "green", "blue", "purple"};

int idx(const string& s) {
    return find(begin(table), end(table), s) - begin(table);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string c1, c2; cin >> c1 >> c2;
        int diff = abs(idx(c1) - idx(c2));
        cout << (diff == 0 ? 'E' : (diff == 1 || diff == 5) ? 'A' : diff == 3 ? 'C' : 'X') << '\n';
    }
    return 0;
}
