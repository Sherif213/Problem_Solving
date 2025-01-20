#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;

	int main()
	{
		int number;
		cin >> number;
		int sequence;
		for (int i = 0; i < number; i++) {
			cin >> sequence;
			int countOne=0, countLast=0;
			for (int i = 0; i < 6; i++) {
				if (i < 3) {
					countOne += sequence % 10;
					sequence /= 10;
				}
				else {
					countLast += sequence % 10;
					sequence /= 10;
				}
			}


			if (countOne == countLast) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}

		}
	}