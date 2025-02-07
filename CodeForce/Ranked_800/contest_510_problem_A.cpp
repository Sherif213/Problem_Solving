//
// Created by Shoul on 2/7/2025.
//
#include <iostream>
using namespace std;

int main() {

    int x,y;
    cin >> x>>y;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++)
        {
            if (i % 2 == 0) {
                if (j == 1 && i % 4 == 0) {
                    cout << "#";
                }
                else if (j == y && i % 4 != 0) {
                    cout << "#";
                }
                else {
                    cout << ".";
                }

            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
}