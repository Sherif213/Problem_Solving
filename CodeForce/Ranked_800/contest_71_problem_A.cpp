//
// Created by Shoul on 1/7/2025.

#include <iostream>
#include <string>
using namespace std;



int main() {
    string word;

    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1]<<endl;

        }
        else {
            cout << word<<endl;
        }
    }

    return 0;
}


