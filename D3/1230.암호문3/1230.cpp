#include <iostream>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n; cin >> n;
        list<int> codes;
        for(int i=0; i<n; i++) {
            int k; cin >> k;
            codes.push_back(k);
        }
        int ops; cin >> ops;
        int x, y, s;
        auto it = codes.begin();
        for(int i=0; i<ops; i++) {
            char cmd; cin >> cmd;
            switch (cmd) {
                case 'I':
                    cin >> x >> y;
                    it = codes.begin();
                    advance(it, x);
                    while(y--) {
                        cin >> s;
                        codes.insert(it, s);
                    }
                    break;
                case 'D':
                    cin >> x >> y;
                    it = codes.begin();
                    advance(it, x);
                    while(y--) it = codes.erase(it);
                    break;
                case 'A':
                    cin >> y;
                    while(y--) {
                        cin >> s;
                        codes.push_back(s);
                    }
                    break;
            }
        }
        cout << '#' << t << ' ';
        it = codes.begin();
        for(int i=0; i<10; i++) {
            cout << *(it++) << ' ';
        }
        cout << '\n';
    }
    return 0;
}