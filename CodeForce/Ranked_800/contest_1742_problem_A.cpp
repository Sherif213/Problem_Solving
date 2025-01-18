#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;
 
	int main()
	{
		int number;
		cin >> number;
		int a, b, c;
		for (int i = 0; i < number; i++) {
			cin >> a >> b >> c;
			if ((a + b == c) || (a + c == b) || (b + c == a)) {
				cout << "YES"<<endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}