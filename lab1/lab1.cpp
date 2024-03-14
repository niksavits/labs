#include <iostream>
#include <cmath>
using namespace std;

int main() {

int a = 5;
int b = 5;
int c = 5;
int P = a + b + c;
cout << "Периметр треугольника равен: " << P << "\n";
double S = sqrt((P / 2) *(P / 2 - a) * (P / 2 - b) * (P / 2 - c));
cout << "Площадь треугольника по формуле Герона равна: " << S << "\n";
if (a == b || a == c || b == c) {
    cout << "Треугольник равнобедренный\n";
} else {
    cout << "Треугольник неравнобедренный\n";
}
return 0;
}