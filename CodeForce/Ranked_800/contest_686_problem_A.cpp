//
// Created by Shoul on 1/8/2025.
//
#include <iostream>

using namespace std;



int main() {
    int number;
    cin >> number;
    long long  packs;
    cin >> packs;
    int count = 0;

    char sign;
    int packNo;
    for (int i = 0; i < number; i++) {
        cin >> sign >> packNo;
        if (sign == '+') {
            packs += packNo;
        }
        else if (sign == '-') {
            if (packNo > packs) {
                count++;
            }
            else {
                packs -= packNo;
            }
        }
    }
    cout << packs << " " << count;
    return 0;
}


