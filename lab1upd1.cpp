#include <iostream>
#include <cmath>
using namespace std;

int main() {

setlocale(LC_ALL, "Russian");
int a, b , c;
cout << "������� ����� ������ ������� ������������: " << "\n";
cin >> a;
cout << "������� ����� ������ ������� ������������: " << "\n";
cin >> b;
cout << "������� ����� ������� ������� ������������: " << "\n";
cin >> c;
double P = a + b + c;
if ((a + b > c) && (a + c > b) && (b + c > a)) {
    cout << "�������� ������������ �����: " << P << "\n";
    double S = sqrt((P / 2) *(P / 2 - a) * (P / 2 - b) * (P / 2 - c));
    cout << "������� ������������ �� ������� ������ �����: " << S << "\n";
    if (a == b || a == c || b == c) {
        cout << "����������� ��������������\n";
    } else {
        cout << "����������� ����������������\n";
    }
} else {
cout << "����� ����������� �� ����� ������������!";
}

return 0;
}
