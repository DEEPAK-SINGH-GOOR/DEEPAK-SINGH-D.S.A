#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e,f;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    cout << "Enter D: ";
    cin >> d;
    cout << "Enter E: ";
    cin >> e;
	cout << "Enter F: ";
    cin >> f;
    int largest = a;

    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;
    if (e > largest) largest = e;
	if (f > largest) largest = f;
    cout << "The largest number is: " << largest;

    return 0;
}



