//
// Created by Shoul on 1/5/2025.
//
#include <iostream>
#include <string>
using namespace std;



int main() {

    int n, b, d;

    cin >> n >> b >> d;

    int a,squeeze = 0,count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > b) {
            continue;
        }
        else {
            squeeze += a;
        }
        if (squeeze > d) {
            count++;
            squeeze = 0;
        }
    }
    cout << count;
    return 0;
}


