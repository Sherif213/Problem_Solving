//
// Created by Shoul on 1/31/2025.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    int number;
    cin >> number;
    int a, b,countA=0,countB=0;

    for (int i = 0; i < number; i++)
    {
        cin >> a >> b;
        if (a > b) {
            countA++;
        }
        else if (b > a) {
            countB++;
        }
        else {
            continue;
        }

    }
    if (countA > countB) {
        cout << "Mishka" << endl;
    }
    else if (countB > countA) {
        cout << "Chris" << endl;
    }
    else {
        cout << "Friendship is magic!^^" << endl;
    }

}