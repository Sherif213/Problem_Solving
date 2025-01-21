#include<iostream>
#include<vector>
using namespace std;

int main() {
	int number;
	cin >> number;
	vector<int>array;
	int access;
	int flag = false;
	int evenPosition,oddPosition;
	int evenCount = 0, oddCount = 0;
	for (int i = 0; i < number; i++)
	{
		cin >> access;
		array.push_back(access);
	}
	for (int i = 0; i < number; i++) {
		if (array[i] % 2 == 0) {
			evenCount++;
			evenPosition = i;
		}
		else {
			oddCount++;
			oddPosition = i;
		}
	}
	if (evenCount< oddCount) {
		cout << evenPosition+1;
	}
	else {
		cout << oddPosition+1;
	}

}