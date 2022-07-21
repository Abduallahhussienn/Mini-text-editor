#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.cpp"
#include <string>
#include <vector>


using namespace std;
int main() {
    std::vector<std::string> v;
    cout << "\n";
    v.push_back("                                       #   #    ####   #      #     ####");
    v.push_back("                                       #   #    #      #      #     #  #");
    v.push_back("                                       # # #    ####   #      #     #  #");
    v.push_back("                                       #   #    #      #      #     #  #");
    v.push_back("                                       #   #    ####   ####   ####  ####");
    for (auto row : v)
    {
        for (auto col : row)
            cout << col;
        cout << "\n";
    }
    cout << "\n";
    LinkedList<string> l;

    while (true)
    {
        string choice;
        string line;
        string num;
        cout << "How can i help you sir?\n\n";
        cout << "1) Add line\t\t 2) Insert line\t\t 3) Get line text\t\t 4) Delete line\n\n";
        cout << "5) Update line\t\t 6) Find all\t\t 7) Find & replace all\t\t 8) Show lines\n\n9) Exit\n\n";
        cout << "Your choice is : ";
        getline(cin, choice);
        cout << "\n";
        if (choice == "1")
        {
            cout << "Please enter new line: ";
            getline(cin, line);
            l.Add(line);
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "2")
        {
            int position{};
            string pos = to_string(position);
            cout << "Please enter new line: ";
            getline(cin, line);
            cout << "Please enter the position : ";
            getline(cin, pos);
            l.InsertAt(position, line);
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "3")
        {
            int position{};
            string pos = to_string(position);
            cout << "Please enter the position of the line : ";
            getline(cin, pos);
            cout << "The line is : " << l.At(position);
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "4")
        {
            int position{};
            string pos = to_string(position);
            cout << "Please enter the position of the line you want to delete : ";
            getline(cin, pos);
            l.DeleteAt(position);
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "5")
        {
            int position{};
            string pos = to_string(position);
            cout << "Please enter new line: ";
            getline(cin, line);
            cout << "Please enter the position of the line you want to update : ";
            getline(cin, pos);
            l.Update(position, line);
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "8")
        {
            l.show();
            cout << "\n\nDo you want to go to main menu?\t 1) Yes\t\t 2) No\n";
            cout << "Your choice is : ";
            getline(cin, num); cout << "\n";
            if (num == "2")
            {
                system("pause");
                return 0;
            }
        }
        else if (choice == "9")
        {
            system("pause");
            return 0;
        }
    }
}