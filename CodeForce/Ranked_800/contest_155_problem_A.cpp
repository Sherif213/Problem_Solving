#include<iostream>

using namespace std;

int main() {
	int max;
	int min;
	int number;
	cin >> number;
	int digits;
	int count=0;
	for (int i = 0; i < number; i++)
	{
		cin >> digits;
		if (i == 0) {
			max = digits;
			min = digits;
			continue;

		}
		if (digits > max) {
			max = digits;
			count++;
		}
		else if (digits < min) {
			min = digits;
			count++;
		}

	}
	cout << count;

}