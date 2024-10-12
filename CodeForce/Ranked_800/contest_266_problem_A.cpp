include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cin >> number;
    string name;
    cin >> name;
    int count = 0;

    for (int i = 1; i < number; i++)
    {
        if (name[i] == name[i - 1])
        {
            count++;
        }
    }
    cout << count;
}