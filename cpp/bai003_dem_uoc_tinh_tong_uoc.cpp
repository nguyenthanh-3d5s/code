#include <iostream>
using namespace std;

void countAndSumDivisors(int n) {
    int count = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            sum += i;
        }
    }
    cout << "Số ước: " << count << endl;
    cout << "Tổng ước: " << sum << endl;
}

int main() {
    int n;
    cin >> n;
    countAndSumDivisors(n);
    return 0;
}
