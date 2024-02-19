#include<iostream>
using namespace std;

int main() {
    // Printing D
    for(int i = 1; i <= 7; i++) {
        if(i == 1 || i == 7) {
            cout << "& & & &";
        } else if(i == 4) {
            cout << "& & & ";
        } else {
            cout << " & ";
        }
        
        cout << "   "; // Adding space between D and E
//         Printing E
        if(i == 1 || i == 7) {
            cout << "& & & &";
        } else if(i == 4) {
            cout << "& & & ";
        } else {
            cout << "& ";
        }
        cout << endl;
    }
    return 0;
}
