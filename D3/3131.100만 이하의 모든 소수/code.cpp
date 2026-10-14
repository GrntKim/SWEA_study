#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    vector<bool> isPrime(1000001, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= 1000; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= 1000000; i++) 
        if (isPrime[i]) cout << i << ' ';
    cout << '\n';
    return 0;
}
