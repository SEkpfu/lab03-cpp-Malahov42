#include <iostream>
using namespace std;
int main() {
    int n;
    int m = 0; 
    int c = 0;     
    cout << "Введите последовательность натуральных чисел :" << endl;
    while (true) {
        cin >> n; 
        if (n == 0) {
            break; 
        }
        if (n > m) {
            m = n;
            c = 1;
        }
        else if (n == m) {
            c++; 
        }
    }

    if (m > 0) {
        cout << "Наибольшее число: " << m << endl;
        cout << "Количество элементов, равных наибольшему: " << c << endl;
    }
    else {
        cout << "Последовательность не содержит натуральных чисел" << endl;
    }

    return 0;
}