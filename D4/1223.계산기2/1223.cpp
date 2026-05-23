#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

unordered_map<char, int> priority = {{'+', 0}, {'*', 1}};

string convert_to_postfix(string exp) {
    stack<char> st;
    string converted = "";
    for(const auto& token : exp) {
        if(priority.find(token) != priority.end()) {
            while(!st.empty() && priority[st.top()] >= priority[token]) {
                converted += st.top();
                st.pop();
            }
            st.push(token);
        } else
            converted += token;
    }
    while(!st.empty()) {
        converted += st.top();
        st.pop();
    }
    return converted;
}

int calculate_postfix(string exp) {
    stack<int> st;
    for(const auto& token : exp) {
        if(isdigit(token)) {
            st.push(token-'0');
        } else {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if(token == '+') st.push(x+y);
            else st.push(x*y);
        }
    }
    return st.empty() ? 0 : st.top();
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int len; cin >> len;
        string exp; cin >> exp;
        cout << '#' << t << ' ' << calculate_postfix(convert_to_postfix(exp)) << '\n';
    }
    return 0;
}