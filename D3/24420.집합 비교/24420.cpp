#include <iostream>
#include <unordered_set>

using namespace std;

bool areSame(unordered_set<int> s1, unordered_set<int> s2) {
    for (const int& v : s2) s1.erase(v);
    return s1.empty();
}

bool isContaining(unordered_set<int> s1, unordered_set<int> s2) {
    for (const int& v : s2)
        if (s1.find(v) == s1.end()) return false;
    return true;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        char ans = '?';
        int n1, n2; cin >> n1 >> n2;

        unordered_set<int> s1;
        for(int i = 0; i < n1; i++) {
            int v; cin >> v;
            s1.insert(v);
        }

        unordered_set<int> s2;
        for(int i = 0; i < n2; i++) {
            int v; cin >> v;
            s2.insert(v);
        }

        if (n1 == n2 && areSame(s1, s2)) ans = '=';
        else if (n1 > n2 && isContaining(s1, s2)) ans = '>';
        else if (n1 < n2 && isContaining(s2, s1)) ans = '<';
        
        cout << ans << '\n';
    }
    return 0;
}