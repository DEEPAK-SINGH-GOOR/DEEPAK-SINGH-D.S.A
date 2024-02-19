#include<iostream>
using namespace std;

int main() {
    int numRows = 5;
    int num = 1;
    for (int currentRow = 1; currentRow <= numRows; currentRow++) {
        for (int j = 1; j <= currentRow; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}

