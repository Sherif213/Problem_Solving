#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;

	int main()
	{
		int number;
		cin >> number;
		int temu;
		int others;

		for (int i = 0; i < number; i++)
		{
			cin>> temu;
			int count = 0;
			for (int k = 0; k < 3; k++) {
				cin >> others;
				if (temu < others) {
					count++;
				}
			}
			cout << count<<endl;


		}
	}