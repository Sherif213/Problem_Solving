#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

	int n, k, l, c, d, p,nl,np;
	cin >> n >> k >> l >> c >> d >> p>>nl>>np;

	int toastPerBottle = (l * k) / nl;
	int toastPerLime = (c * d);
	int toastPerSalt = p / np;

	int minmum = min(toastPerBottle, toastPerLime);
	int last = min(toastPerSalt, minmum);
	cout << last / n;

}
