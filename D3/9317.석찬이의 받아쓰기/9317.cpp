#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int len; cin >> len;
        string tar; cin >> tar;
        string src; cin >> src;
        int cnt = 0;
        for(int i=0; i<len; i++)
            if(src[i] != tar[i]) cnt++;
        cout << '#' << t << ' ' << len-cnt << '\n';
    }
    return 0;
}