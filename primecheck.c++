#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;      // 0, 1, and negative numbers are NOT prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;   // If divisible, not prime
    }

    return true;   // No divisors → prime number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number\n";
    else
        cout << num << " is NOT a prime number\n";

    return 0;
}