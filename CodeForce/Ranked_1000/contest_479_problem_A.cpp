#include<iostream>
using namespace std; main() {
	int t, s, r;
	cin >> r >> s >> t;
	cout << max(max(r + s + t, r * (s + t)), max(r * s * t, (r + s) * t));
}