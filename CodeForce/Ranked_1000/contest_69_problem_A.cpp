//
// Created by Shoul on 1/14/2025.
//
#include <iostream>



using namespace std;

int main()
{
    int number;
    cin >> number;
    int a, b, c;
    int asum = 0, bsum = 0, csum = 0;
    for (int i = 0; i < number; i++) {
        cin >> a >> b >> c;
        asum += a;
        bsum += b;
        csum += c;
    }
    if (asum == 0 && bsum == 0 && csum == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}