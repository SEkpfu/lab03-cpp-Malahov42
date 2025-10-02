#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int n, k = 0, ch = 0;
    char s;
    do {
        cout << "Введите числа : ";
        cin >> n;
        k++;
        if (n %2==0) {
            ch++;
        }
        cout << "Вы хотите продолжить? (y/n): ";
        cin >> s;
    } while (s != 'n' && s != 'N');
    cout << "Кол-во чисел: " << k << endl;
    cout << "Кол-во чётных чисел: " << ch << endl;
    return 0;
}