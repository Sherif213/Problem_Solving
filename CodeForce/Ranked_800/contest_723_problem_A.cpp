//
// Created by Shoul on 2/8/2025.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minNo = min(c, min(a, b));
    int maxNo = max(c, max(a, b));

    int mid = (a + b + c) - (minNo + maxNo);

    cout << (maxNo - mid) + (mid - minNo);
}