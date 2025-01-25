#include<iostream>
#include<vector>
using namespace std;

int main() {
    int number;
    cin >> number;
    int rating;
    for (int i = 0; i < number; i++)
    {
        cin >> rating;
        if (rating <= 1399) {
            cout << "Division 4" << endl;
        }
        else if (rating <= 1400 && rating >= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (rating <= 1899 && rating >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (rating >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }
}