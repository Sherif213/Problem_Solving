//
// Created by Shoul on 1/6/2025.
//
#include <iostream>

using namespace std;



int main() {

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int b = ((n + k - 1) / k)*t;
    if (d + t < b) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}


