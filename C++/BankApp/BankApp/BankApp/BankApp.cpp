#include <iostream>
#include <windows.h>


using namespace std;

void display()
{
    cout << "              Bank App                             " << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "1. �������" << "                       5. ����� �� PIN ���" << endl;
    cout << "2. �������" << "                       6. ���������� �� �����" << endl;
    cout << "3. �������" << "                       7. ������ �� ����������" << endl;
    cout << "4. ����������� �� ������" << "         8. �����" << endl;
    cout << "_____________________________________________________________________" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int enter;
    string username = "Nedelin";
    string password = "2299";
    string programUsername, programPassword;
    cout << "�������� ������ ������������� ���: ";
    cin >> programUsername;
    if (programUsername == username)
    {
        cout << "�������� ������ ������: ";
        cin >> programPassword;
        if (programPassword == password)
        {
            cout << "Wellcome...";
            do {
                int command;
                string name2 = "Nedelin";
                int balance2 = 10000;
                string name = "Boris";
                int balance = 10000;
                display();
                cout << "-->";
                cin >> enter;

                switch (enter)
                {
                case 1:
                    cout << "����� ���� ������ �� ���������? ";
                    cin >> command;
                    if (command > balance)
                    {
                        cout << "������������ ���������!";
                    }
                    else
                    {
                        int result = balance - command;
                        cout << name << " ��� ����������: " << command << endl;
                        cout << name << " � �������� �� �������� �������: " << result << " ����." << endl;
                    }
                    break;
                case 2:
                    cout << "����� ���� ������ �� �������? ";
                    cin >> command;
                    if (command > 0)
                    {
                        int result = command + balance;
                        cout << name << " ��� �������� " << command << " ����." << endl;
                        cout << name << " ����� " << result << " ���� � ��������.";
                    }
                    else
                    {
                        cout << "�� ���� �� �������� ����������� ���� ����!!!";
                    }
                    break;
                case 3:
                    cout << "����� ���� ������ �� ���������? ";
                    cin >> command;
                    if (command <= balance)
                    {
                        int prevod = balance - command;
                        cout << "��� ���������� " << command << " ����. � �������� �� " << name2 << "." << endl;
                        cout << "� ������ ������� ������� " << prevod << " ����.";
                    }
                    else
                    {
                        cout << "������ ������� ������.";
                    }
                    break;
                case 4:
                    cout << name << "� ������ ������ ��� " << balance << " ����.";
                    break;
                case 8:
                    cout << "�������� �� ���������. ������� ���!" << endl;
                    exit(0);
                    break;

                default:
                    cout << "��������� �������.";
                    break;
                }
            } while (enter != 0);

        }
        else
        {
            cout << "������ ������!";
        }
    }
    else
    {
        cout << "������ ������������� ���!";
    }
}



