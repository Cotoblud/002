// 002.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Домашнее задание 1
//ЗАДАНИЕ 1
//Заданы три сопротивлении R1, R2, R3.Вычислить значение сопротивления R0 по формуле : 1 / R0 = 1 / R1 + 1 / R2 + 1 / R3.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double R1,R2,R3;
    cout << "Программа вычисления значения сопротивления R0" << "\n" << endl
        << "\tВведите R1 – > " << "\n" << endl;
    cin >> R1;
    cout << "\tВведите R2 – > " << "\n" << endl;
    cin >> R2;
    cout << "\tВведите R3 – > " << "\n" << endl;
    cin >> R3;
    cout << "сопротивлениt R0 = " << 1 / R1 + 1 / R2 + 1 / R3 << "\n" << endl;
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 2
//По заданной длине окружности найти площадь круга
//по формуле S = pi * R2, радиус вычислить из формулы длины
//окружности : L = 2 * pi * R.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float pi, L, R, S;
    pi = 3.14;
    cout << "Программа вычисления  площади круга" << "\n" << endl
        << "\tВведите длину окружности – > " << "\n" << endl;
    cin >> L;
    R = L / (2 * pi);
    S = pi * R * R;
    cout << "площадь круга = " << S << "\n" << endl;
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 3
//Вычислить пройденное расстояние при прямолинейном
//равноускоренном движении по формуле S = v * t + (a * t2) / 2,
//где v — скорость, t — время, а — ускорение.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double V, T, A;
    cout << "V = " << "T = " << "A = ";
    cin >> V >> T >> A;
    double S = V * T + (A * T * T) / 2;
    cout << "S = " << S << "\n";
    system("pause");
    return 0;
}
*/