#include <iostream>
	#include <string>
	#include <vector>


	using namespace std;

	int main()
	{

		int number;
		cin >> number;
		for (int i = 0; i < number; i++) {
			string sentence, sentenceTwo;
			cin >> sentence;
			sentenceTwo = sentence;
			for (int i = 0; i < sentence.length(); i++) {
				sentenceTwo[i] = tolower(sentence[i]);
			}
			if (sentenceTwo == "yes") {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}