#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int len; cin >> len;
        string str; cin >> str;
        unordered_map<char, char> m = {{'}', '{'}, {')', '('}, {']', '['}, {'>', '<'}};
        stack<char> st;
        bool valid = true;
        for(const char& ch : str) {
            if(ch == '{' || ch == '(' || ch == '[' || ch == '<') {
                st.push(ch);
            } else {
                if(st.empty() || st.top() != m[ch]) {
                    valid = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        cout << '#' << t << ' ' << valid << '\n';
    }
    return 0;
}