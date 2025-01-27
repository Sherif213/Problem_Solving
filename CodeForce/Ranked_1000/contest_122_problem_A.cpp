//
// Created by Shoul on 1/27/2025.
//
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> array;
    for (int i = 1; i < 1000; i++) {
        bool flag = false;
        int number = i;
        while (number > 0) {
            if (number % 10 != 4 && number % 10 != 7) {

                flag = true;
            }
            number /= 10;
        }
        if (!flag) {
            array.push_back(i);
        }
    }
    int number;
    cin >> number;
    bool flag = true;
    int i = 0;
    while (flag) {
        if (number % array[i] == 0) {
            cout << "YES" << endl;
            flag = false;
        }
        if (i == array.size()-1) {
            break;
        }
        i++;
    }
    if (flag) {
        cout << "NO" << endl;
    }

}