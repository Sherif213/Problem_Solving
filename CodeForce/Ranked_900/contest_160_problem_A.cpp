//
// Created by Shoul on 1/26/2025.
//
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> array;
    int number;
    cin >> number;
    int sum = 0;
    for (int i = 0; i < number; i++) {
        int digit;
        cin >> digit;
        array.push_back(digit);
        sum += digit;
    }
    for (int i = 0; i < number; i++) {
        for (int k = 0; k < number; k++) {
            if (array[k] < array[i]) {
                int temp = array[k];
                array[k] = array[i];
                array[i] = temp;
            }
        }
    }

    int coins = 0;
    int sumcoins=0;
    int i = 0;
    while (sumcoins <= sum)
    {
        sumcoins += array[i];
        coins++;
        sum -= array[i];
        i++;
    }
    cout << coins;
}