#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int y) {
    if (y <= 1) return false;
    for (int i = 2; i <= sqrt(y); y++) {
        if (y % i == 0) return false;
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    (is_prime(x)) ? cout << "Entered number is prime." : cout << "Entered number is not prime.";
    
    return 0;
}
