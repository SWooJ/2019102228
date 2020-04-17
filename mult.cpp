#include <iostream>
using namespace std;

int main() {
    cout << "\n ";
    for(int i = 1; i <= 9; i++) {
        cout << "\t" << i;
    }
    for(int i = 1; i <= 9; i++) {
        cout << endl << i;
        for(int j = 1; j <=9; j++) {
            cout << "\t" << i*j;
        }
    }
    return 0;
}