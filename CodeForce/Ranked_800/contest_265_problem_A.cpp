//
// Created by Shoul on 1/2/2025.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    char t[60];
    cin >> t;
    char s[60];
    cin >> s;

    int position=0;
    int i = 0;
    bool name = true;
    while (name) {
        if (t[position] == s[i]) {
            position++;
        }
        i++;
        if (i == (sizeof(s) / sizeof(s[0]))) {
            name = false;
        }
    }
    cout << position + 1;

    return 0;
}