//
// Created by Shoul on 2/8/2025.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int number;
    cin >> number;
    vector<string> array;
    string excuse;
    unordered_map<string, int>hash;

    for (int i = 0; i < number; i++)
    {
        cin >> excuse;
        bool flag = false;
        for (int i = 0; i < array.size(); i++) {
            if (excuse == array[i]) {
                flag = true;
            }
        }
        if (!flag) {
            array.push_back(excuse);
            hash[excuse] = 1;
            cout << "OK" << endl;
        }
        else {
            cout << excuse << hash[excuse] << endl;
            hash[excuse]++;
        }
    }
}