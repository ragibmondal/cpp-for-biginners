#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrimeNumber(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int primeCount = 0;
    
    for (int i = 1; i <= 1000; i++) {
        if (isPrimeNumber(i)) {
            cout << i << " is a Prime Number\n";
            primeCount++;
        }
    }
    
    cout << "\nTotal number of prime numbers between 1 and 1000: " << primeCount << endl;
    
    return 0;
}