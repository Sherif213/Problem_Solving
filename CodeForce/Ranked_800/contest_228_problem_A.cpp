//
// Created by Shoul on 1/2/2025.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int* array = new int[4];
    bool flag = false;

    int count = 0;
    for (int i = 0; i < 4; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < 4; i++)
    {
        int k;
        for (k = 0; k < 4; k++) {
            if (array[i] == array[k]) {
                break;
            }
        }
        if (i==k) {
            count++;

        }


    }
    cout << 4 - count;


    return 0;
}