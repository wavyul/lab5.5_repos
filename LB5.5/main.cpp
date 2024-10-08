#include <iostream>
#include <windows.h>

using namespace std;

// Рекурсивна функція для обчислення x^n
double power(double x, int n) {
    if (n == 0) {
        return 1; // x^0 = 1
    }
    else if (n < 0) {
        return 1. / power(x, -n); // x^(-n) = 1 / x^n
    }
    else {
        return x * power(x, n - 1); // x^n = x * x^(n-1)
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    int n;

    // Введення значень
    cout << "Введіть дійсне число x: ";
    cin >> x;
    cout << "Введіть цілий показник степеня n: ";
    cin >> n;

    // Виклик функції power
    double result = power(x, n);

    // Виведення результату
    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
