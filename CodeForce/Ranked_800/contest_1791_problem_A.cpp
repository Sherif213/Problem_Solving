	#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;

	int main()
	{
		int number;
		cin >> number;
		char array[] = { 'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's' };
		for (int i = 0; i < number; i++) {
			char letter;
			cin >> letter;
			bool flag = false;
			for (int i = 0; i < 10; i++) {
				if (letter == array[i]) {
					flag = true;
				}
			}
			if (flag) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	
