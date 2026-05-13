#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
        isPrime = false;
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}
