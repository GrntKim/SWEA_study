#include <iostream>
#include <sstream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        bool possible = true;
        int n; cin >> n;
        cin.ignore();
        for(int i=0; i<n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            int idx; string s; 
            ss >> idx >> s;

            bool isOp = (s == "+" || s == "-" || s == "*" || s == "/");
            if(idx <= n/2) {
                if(!isOp) possible = false;
            } else {
                if (isOp) possible = false;
            }
        }
        cout << '#' << t << ' ' << possible << '\n';

    }
    return 0;
}