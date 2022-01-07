// Copyright (c)
// 2022 Zack Isingoma
// Creared by: Zack Isingoma
// Created on: Jan 7th 2022.
#include <iostream>
int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
         }
        cout << "Factorial of " << n << " is " << factorial;    
    }

    return 0;
}
