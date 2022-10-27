#include <iostream>
#include <vector>
#include <windows.h>
#include<fstream>
using namespace std;
void intro()
{
    cout << "\n\n\t\t\t\t\t\t\t\t";
    vector<char> arr = {'B', ' ', 'A', ' ', 'N', ' ', 'K', ' ', ' ', ' ', 'M', ' ', 'A', ' ', 'N', ' ', 'A', ' ', 'G', ' ', 'E', ' ', 'M', ' ', 'E', ' ', 'N', ' ', 'T', ' ', ' ', ' ', 'S', ' ', 'Y', ' ', 'S', ' ', 'T', ' ', 'E', ' ', 'M'};
    vector<char> arr1 = {' ', ' ', ' ', ' ', 'W', 'E', 'L', 'C', 'O', 'M', 'E', ' ', 'T', 'O', ' ', 'A', 'B', 'C', ' ', 'B', 'A', 'N', 'K'};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        Sleep(40);
    }
    cout << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i];
        Sleep(20);
    }
    Sleep(1000);
    system("CLS");
}
void menu()
{
    cout << "Select option:\n\n1. Create new account\n2. View account details\n3. Transfer money\n4. Modify existing account\n5. Delete existing account\n6. View all accounts" << endl
         << "Enter: ";
}
class bank
{
    string name[100];
    string password[100];
    int amount[100];
    int a = 0;
    string bank_pass = "12c34";

public:
    void data(string x)
    {
        if (x == "1")
        {
            cout << "Number of accounts to be created: " << endl;
            int b;
            int s = 0;
            cin >> b;
            Sleep(250);
            system("CLS");
            if(b > 0){
                for (int i = a; i < a + b; i++)
                {
                    cout << "Account Holder name: " << endl;
                    cin >> name[i];
                    cout << "Create new password: " << endl;
                    cin >> password[i];
                    cout << "Enter the amount: " << endl;
                    cin >> amount[i];
                    s++;
                    if ((s == 1) && (b > 1))
                    {
                        cout << "1st ";
                    }
                    else if ((s == 2) && (b > 1))
                    {
                        cout << "2nd ";
                    }
                    else if ((s == 3) && (b > 1))
                    {
                        cout << "3rd ";
                    }
                    else if ((s > 3) && (b > 1))
                    {
                        cout << i+1 << "th ";
                    }
                    if (b > 1)
                    {
                        cout << "Account is created" << endl;
                        for (int i = 0; i < 4; i++)
                        {
                            cout << ".";
                            Sleep(100);
                        }
                        system("CLS");
                    }
                }
                a = a + b;
                if (s == 1)
                {
                    cout << "Your Account is Created Successfully" << endl;
                }
                else
                {
                    cout << "Your Account's are Created Successfully" << endl;
                }
                for (int i = 0; i < 4; i++)
                {
                    cout << ".";
                    Sleep(250);
                }
            }
            if(b<=0){
                cout<<"No Account's are created."<<endl;
                system("PAUSE");
            }
            system("CLS");
        }
        else if (x == "2")
        {
            string pass, nam;
            cout << "Enter the name: " << endl;
            cin >> nam;
            cout << "Enter the password: " << endl;
            cin >> pass;
            Sleep(300);
            system("CLS");
            int b = 0;
            for (int i = 0; i < a; i++)
            {
                if ((name[i] == nam) && (password[i] == pass))
                {
                    cout << "\n\nAccount holder name: " << name[i] << endl;
                    cout << "\nAmount: " << amount[i] << endl;
                    cout << endl;
                    system("PAUSE");
                    system("CLS");
                    b++;
                }
            }
            if (b == 0)
            {
                cout << "No such account exists" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        else if (x == "3")
        {
            string nam, nam1, pass;
            cout << "Your Account Name: " << endl;
            cin >> nam;
            cout << "Password: " << endl;
            cin >> pass;
            int y = 0;
            for (int i = 0; i < a; i++)
            {
                if ((name[i] == nam) && (password[i] == pass))
                {
                    int dep;
                    cout << "Enter the deposit amount: " << endl;
                    cin >> dep;
                    Sleep(300);
                    system("CLS");
                    if (dep < amount[i])
                    {
                        cout << "Amount is transferred to account name: " << endl;
                        cin >> nam1;
                        for (int j = 0; j < a; j++)
                        {
                            if (name[j] == nam1)
                            {
                                amount[i] = amount[i] - dep;
                                amount[j] = amount[j] + dep;
                            }
                        }
                        cout << "Processing";
                        for (int k = 0; k < 4; k++)
                        {
                            cout << ".";
                            Sleep(300);
                        }
                        system("CLS");
                        cout << "\nDeposit is successfully done" << endl;
                        system("PAUSE");
                        system("CLS");
                    }
                    else
                    {
                        cout << "Not enough money!!!" << endl;
                        system("PAUSE");
                        system("CLS");
                    }
                    y++;
                }
            }
            if (y == 0)
            {
                cout << "Error...Please Try Again" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        else if (x == "4")
        {
            cout << "Account Holder name: " << endl;
            string nam, pass;
            cin >> nam;
            cout << "Password: " << endl;
            cin >> pass;
            int y = 0;
            Sleep(250);
            system("CLS");
            for (int i = 0; i < a; i++)
            {
                if ((name[i] == nam) && (password[i] == pass))
                {
                    cout << "\nWhat would you like to Modify?" << endl;
                    cout << "1. Name\n2. Password\n";
                    int x;
                    cout << "Enter: ";
                    cin >> x;
                    system("CLS");
                    if (x == 1)
                    {
                        string nam1;
                        cout << "Enter new name: " << endl;
                        cin >> nam1;
                        name[i] = nam1;
                        cout << "\nYour Account name is Changed" << endl;
                        Sleep(500);
                        system("PAUSE");
                        system("CLS");
                    }
                    else if (x == 2)
                    {
                        string pass1;
                        cout << "Enter new password: " << endl;
                        cin >> pass1;
                        password[i] = pass1;
                        cout << "\nYour Account password is Changed" << endl;
                        Sleep(500);
                        system("PAUSE");
                        system("CLS");
                    }
                    else
                    {
                        cout << "Wrong Input" << endl;
                        system("PAUSE");
                        system("CLS");
                    }
                    y++;
                }
            }
            if (y == 0)
            {
                cout << "No such account exists" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        else if (x == "5")
        {
            cout << "Account Holder name: " << endl;
            string nam, pass;
            int b, y = 0;
            cin >> nam;
            cout << "Password: " << endl;
            cin >> pass;
            for (int i = 0; i < a; i++)
            {
                if ((name[i] == nam) && (password[i] == pass))
                {
                    b = i;
                    y++;
                }
            }
            for (int i = b; i < a; i++)
            {
                name[i] = name[i + 1];
                password[i] = password[i + 1];
                amount[i] = amount[i + 1];
            }
            if (y != 0)
            {
                a=a-1;
                cout << "Deleting";
                for (int k = 0; k < 4; k++)
                {
                    cout << ".";
                    Sleep(300);
                }
                system("CLS");
                cout << "Your account is deleted !!!" << endl;
                system("PAUSE");
                system("CLS");
            }
            if (y == 0)
            {
                cout << "No such account exists" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        else if (x == "6")
        {
            cout << "Enter the bank's official password: " << endl;
            string ban_pass;
            cin >> ban_pass;
            cout << "Processing";
            for (int i = 0; i < 4; i++)
            {
                cout << ".";
                Sleep(250);
            }
            system("CLS");
            if (ban_pass == bank_pass)
            {
                cout << "--------------------------------------" << endl;
                for (int i = 0; i < a; i++)
                {
                    cout << "\nAccount Holder name: " << name[i] << endl;
                    cout << "Password: " << password[i] << endl;
                    cout << "Amount: " << amount[i] << endl
                         << endl;
                    cout << "--------------------------------------" << endl;
                }
                system("PAUSE");
                system("CLS");
            }
            else
            {
                cout << "Wrong Password!!!" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        ofstream write;
        write.open("bank.txt");
        write<<"-------------------------------------\n";
        for (int i = 0; i < a; i++)
        {
            write << "Name: " << name[i] << "\nPassword: " << password[i] << "\nBalance: " << amount[i] <<"\n-------------------------------------\n";
        }
        write.close();
    }
};
int main()
{
    bank b;
    intro();
    while (true)
    {
        menu();
        string num;
        cin >> num;
        Sleep(500);
        system("CLS");
        b.data(num);
    }
    return 0;
}
