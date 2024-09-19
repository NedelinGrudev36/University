#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int powerPlayerOne, powerPlayerTwo;
    cout << "Enter power on first player: ";
    cin >> powerPlayerOne;
    cout << "Enter power on second player: ";
    cin >> powerPlayerTwo;
    if (powerPlayerOne > powerPlayerTwo)
    {
        cout << "First player WIN !!!";
    }
    else
    {
        cout << "Second player WIN !!!";
    }
}

