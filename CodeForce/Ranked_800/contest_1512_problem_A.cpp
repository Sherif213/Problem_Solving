#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;

	int main()
	{
		int number;
		vector<int> array;
		cin >> number;
		for (int i = 0; i < number; i++) {
			array.clear();
			int number2;
			cin >> number2;
			int digit;
			int position = 0;
			for (int k = 0; k < number2; k++) {
				cin >> digit;
				array.push_back(digit);
			}
			if (array[0] != array[1] && array[0] != array[2]) {
				cout << 1 << endl;
			}

			else {
				for (int k = 1; k < number2; k++) {
					if (array[0] != array[k]) {
						cout << k + 1 << endl;
						break;
					}
				}

			}
		}

	}