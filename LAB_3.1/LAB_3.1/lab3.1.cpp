#include <iostream>
#include <cmath>  

using namespace std;


int main() {
    double x = 0;
    double y = 0;
    double a = 0;
    double b = 0;
    cout << "Enter x: ";
    cin >> x;
    y = pow(x, 3) + 2;
    // Скорочене розгалуження
    if (x < 4) {
        a = pow(x, 8) * 5 + pow(x, 6) - pow(x, 2) + 3;
    }
    if (x >= 4 && x < 7) {
        a = atan((x + 3) / 2) + 7 * x;
    }
    if (x >= 7) {
        a = log10(2 * x + exp(5 * x + 5));
    }

    cout << "Result (shortened form) y: " << y + a << endl;

    // Повне розгалуження 
    if (x < 4) {
        b = pow(x, 8) * 5 + pow(x, 6) - pow(x, 2) + 3;
    }
    else if (x >= 4 && x < 7) {
        b = atan((x + 3) / 2) + 7 * x;
    }
    else {
        b = log10(2 * x + exp(5 * x + 5));
    }

    cout << "Result (full form) y: " << y + b << endl;
    return 0;
}