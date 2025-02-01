//
// Created by Shoul on 2/1/2025.
//
#include <iostream>
using namespace std;

int main() {
    int number, presents, arr[100];
    cin >> number;
    for (int i = 1; i <= number; i++) {
        cin >> presents;
        arr[presents] = i;
    }
    for (int i = 1; i <= number; i++) {
        cout << arr[i] << " ";
    }
}