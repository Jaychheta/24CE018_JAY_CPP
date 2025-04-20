#include <iostream>
#include <string>
using namespace std;

int superDigit(long long n) {
    if (n < 10)
        return n;

    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return superDigit(sum);
}

int main() {
    string number;
    int repeat;

    cin >> number;
    cin >> repeat;

    long long total = 0;

    for (int i = 0; i < number.size(); i++) {
        total += number[i] - '0';
    }

    total = total * repeat;

    cout << superDigit(total);

    return 0;
}
