#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string s; cin >> s;
        int n = s.length();
        cout << "..#";
        for(int i=0; i<n-1; i++) cout << "...#";
        cout << "..\n";

        for(int i=0; i<2*n; i++) cout << ".#";
        cout << ".\n";

        for(const char& ch : s)
            cout << "#." << ch << ".";
        cout << "#\n";

        for(int i=0; i<2*n; i++) cout << ".#";
        cout << ".\n";

        cout << "..#";
        for(int i=0; i<n-1; i++) cout << "...#";
        cout << "..\n";
    }
    return 0;
}