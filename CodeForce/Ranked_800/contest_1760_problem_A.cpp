//
// Created by Shoul on 2/6/2025.
//

#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;
    int a, b, c;

    for (int i = 0; i < number; i++) {
        cin >> a >> b >> c;
        if (a > b && a < c) {
            cout << a << endl;
        }
        else if (b > a && b < c) {
            cout << b << endl;
        }
        else if (b<a &&b>c){
            cout << b << endl;
        }
        else if (a<b && a>c) {
            cout << a << endl;
        }
        else {
            cout << c << endl;
        }
    }
}
