//
// Created by Shoul on 1/16/2025.
//
#include <iostream>
#include<vector>
using namespace std;



int main() {

    bool flag = false;

    string sentence;
    cin >> sentence;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'H' || sentence[i] == 'Q' || sentence[i] == '9' ) {
            flag = true;
            break;
        }

    }
    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }


    return 0;
}


