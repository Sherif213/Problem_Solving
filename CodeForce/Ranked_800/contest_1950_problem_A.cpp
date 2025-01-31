#include <iostream>
#include <vector>

using namespace std;


int main() {
	int number;
	cin >> number;
	int a, b, c;
	
	
	for (int i = 0; i < number; i++)
	{
		cin >> a >> b >> c;
		if (b > c && b > a) {
			cout << "PEAK" << endl;
		}
		else if(b<c && a<b) {
			cout << "STAIR" << endl;

		}
		else {
			cout << "NONE" << endl;
		}
	}

}
