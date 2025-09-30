#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int copy = num;
    int sum = 0;
    int digits = log10(num) + 1;  // Count number of digits

    while (copy > 0) {
        int lastdig = copy % 10;
        sum += pow(lastdig, digits);  // Use pow() to handle any number of digits
        copy /= 10;
    }

    if (sum == num) {
        cout << "The entered number is an Armstrong number\n";
    } else {
        cout << "The entered number is not an Armstrong number\n";
    }

    return 0;
}
