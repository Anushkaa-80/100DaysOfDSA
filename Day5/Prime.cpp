#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() {
    int range;
    cin >> range;

    cout << "Prime numbers up to " << range << ": ";
    for (int i = 2; i <= range; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}
