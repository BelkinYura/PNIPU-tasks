#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int X, a, b, k, max;

    cout << "Введите трехзначное число" << endl;
    cin >> X;

    while ((X < 100) || (X > 999)) {
        cout << "Введенное число не является трехзначным" << endl << "Повторите ввод" << endl;
        cin >> X;
    }
    
    a = X / 100;
    b = (X / 10) % 10;
    k = X - (a * 100) - (b * 10);

    cout << "Все возможные чисел из чисел числа '<<:" << endl;
    cout << a << b << k << endl;
    cout << a << k << b << endl;
    cout << b << k << a << endl;
    cout << b << a << k << endl;
    cout << k << b << a << endl;
    cout << k << a << b << endl;
    
    cout << "Наибольшее из этих чисел:";
    if (a > b) {
        if (b > k)
            cout << a << b << k;
        else if (a > k)
            cout << a << k << b;
        else 
            cout << k << a << b;
    }
    else {
        if (k > b)
            cout << k << b << a;
        else if (a > k)
            cout << b << a << k;
        else
            cout << b << k << a;
    }
    return 0;
}