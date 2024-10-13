#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int number;
    int solid = 0;
    int crimes = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> number;
        if (number < 0 && solid == 0)
        {
            crimes++;
        }
        else if (number < 0 && solid>0)
        {
            solid--;
        }
        else
        {
            solid += number;
        }
    }
    cout << crimes;
}

