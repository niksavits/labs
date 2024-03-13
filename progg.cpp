#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> vector1 = {1, 2, 3, 4, 5};
for (size_t i = 0; i != vector1.size(); ++i) {
    cout << vector1[i] << endl;
}
cout << "\n";

cout << "Enter a first number for vector: ";
int a;
cin >> a;
vector1.push_back(a);
for (size_t j = 0; j != vector1.size(); ++j) {
    cout << vector1[j] << endl;
}

vector1.pop_back();
for (size_t k = 0; k != vector1.size(); ++k) {
    cout << vector1[k] << endl;
}
cout << "\n";

return 0;
}
