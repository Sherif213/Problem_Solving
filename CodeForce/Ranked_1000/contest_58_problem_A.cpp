//
// Created by Shoul on 1/15/2025.
//
#include <iostream>
using namespace std;



int main() {

    char array[6] = {'h', 'e', 'l', 'l', 'o','\0'};

    int array2[5] = { 0,0,0,0,0 };

    string sentence;
    cin >> sentence;
    int k = 0;
    int count = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == array[k] && array2[k]<1) {
            array2[k]++;
            k++;
            count++;
        }

    }
    if (count == 5) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }



    return 0;
}


