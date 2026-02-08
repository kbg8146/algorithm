#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int M = 1; M < N; M++) {
        int sum = M;
        int x = M;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (sum == N) {
            cout << M;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
