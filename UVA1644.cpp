#include <iostream>
using namespace std;

// 耞计琌借计
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 璸衡计┮借计丁回
int prime_gap_length(int n) {
    if (is_prime(n)) {
        return 0;
    }
    int i = n - 1;
    while (!is_prime(i)) {
        i--;
    }
    int j = n + 1;
    while (!is_prime(j)) {
        j++;
    }
    return j - i ;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        int len = prime_gap_length(n);
        cout << len << endl;
    }
    return 0;
}
