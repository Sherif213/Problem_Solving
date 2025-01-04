//
// Created by Shoul on 1/4/2025.
//
#include <iostream>
#include <string>
using namespace std;



int main() {

    int n;
    cin >> n;

    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int m;
    cin >> m;
    int x, y,number;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        number = array[x - 1] - y;

        if (x<n) {
            array[x] += number;

        }
        if(x>1) {
            array[x - 2] += array[x - 1] - (number + 1);
        }


        array[x - 1] = 0;



    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
    return 0;
}
