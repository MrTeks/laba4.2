#include <iostream>
#include <clocale>

using namespace std;
// Вариант 8
int main() {
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "Напишите 2 целых числа a и b (a < b): ";
    cin >> a >> b;
    if (a > b) {
        cerr << "Ошибка, a > b" << endl;
        return 0;
    }
    long long  sum = 1;
    for (int i = a; i <= b; i++) {
        sum *= i;
    }
    cout << "Произведение всех чисел от a до b: " << sum << endl;
}
