#include <iostream>
#include <windows.h>


using namespace std;

void display()
{
    cout << "              Bank App                             " << endl;
    cout << "_____________________________________________________________________" << endl;
    cout << "1. Теглене" << "                       5. Смяна на PIN код" << endl;
    cout << "2. Депозит" << "                       6. Информация за такси" << endl;
    cout << "3. Преводи" << "                       7. Заявка за извлечение" << endl;
    cout << "4. Проверяване на Баланс" << "         8. Изход" << endl;
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
    cout << "Въведете вашето потребителско име: ";
    cin >> programUsername;
    if (programUsername == username)
    {
        cout << "Въведете вашата парола: ";
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
                    cout << "Каква сума искате да изтеглите? ";
                    cin >> command;
                    if (command > balance)
                    {
                        cout << "Недостатъчна наличност!";
                    }
                    else
                    {
                        int result = balance - command;
                        cout << name << " вие изтеглихте: " << command << endl;
                        cout << name << " в сметката ви останаха налични: " << result << " лева." << endl;
                    }
                    break;
                case 2:
                    cout << "Каква сума искате да вкарате? ";
                    cin >> command;
                    if (command > 0)
                    {
                        int result = command + balance;
                        cout << name << " вие вкарахте " << command << " лева." << endl;
                        cout << name << " имате " << result << " лева в сметката.";
                    }
                    else
                    {
                        cout << "Не може да вкарвате отрицателна сума пари!!!";
                    }
                    break;
                case 3:
                    cout << "Каква сума искате да преведете? ";
                    cin >> command;
                    if (command <= balance)
                    {
                        int prevod = balance - command;
                        cout << "Вие преведохте " << command << " лева. в сметката на " << name2 << "." << endl;
                        cout << "В вашата сметака остават " << prevod << " лева.";
                    }
                    else
                    {
                        cout << "Нямате наличен баланс.";
                    }
                    break;
                case 4:
                    cout << name << "в вашият баланс има " << balance << " лева.";
                    break;
                case 8:
                    cout << "Излизате от системата. Приятен ден!" << endl;
                    exit(0);
                    break;

                default:
                    cout << "Невалидна команда.";
                    break;
                }
            } while (enter != 0);

        }
        else
        {
            cout << "Грешна парола!";
        }
    }
    else
    {
        cout << "Грешно потребителско име!";
    }
}



