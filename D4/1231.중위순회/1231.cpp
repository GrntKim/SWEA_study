#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Node {
    string value;
    int left = 0;
    int right = 0;
};

string traverse(const vector<Node>& graph, int head) {
    Node cur = graph[head];
    string ret = "";

    if (cur.left) ret += traverse(graph, cur.left);
    ret += cur.value;
    if (cur.right) ret += traverse(graph, cur.right);
    return ret;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n; cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<Node> graph(n+1);
        for(int i = 1; i <= n; i++) {
            string input; getline(cin, input);
            stringstream ss(input);
            int idx;
            ss >> idx >> graph[i].value;
            int l, r;
            if (ss >> l) graph[i].left = l;
            if (ss >> r) graph[i].right = r;
        }
        int ans = 0;
        cout << '#' << t << ' ' << traverse(graph, 1) << '\n';
    }
    return 0;
}