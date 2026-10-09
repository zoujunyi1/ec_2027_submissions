#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Please enter an integer n: ";
    cin >> n;

    vector<int> primes;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    cout << "There are " << primes.size() << " prime numbers between 1 and " << n << "." << endl;
    cout << "All prime numbers are: ";
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
