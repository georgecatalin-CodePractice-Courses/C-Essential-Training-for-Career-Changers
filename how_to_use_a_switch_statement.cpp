#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "\tChoose one: \n";
    cout << "\t\t1. Hot Dog \t\t$1.95\n";
    cout << "\t\t2. Chili Dog \t\t$2.50\n";
    cout << "\t\t3. Hamburger \t\t$2.95\n";
    cout << "\t\t4. Cheeseburger\t\t$3.50\n";
    cout << "\t\t5. Water \t\t$1.50\n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose a Hot Dog." << endl;
        break;
    case 2:
        cout << "You chose a Chili Dog." << endl;
        break;
    case 3:
        cout << "You chose a Hamburger." << endl;
        break;
    case 4:
        cout << "You chose a Cheeseburger." << endl;
        break;
    case 5:
        cout << "You chose Water." << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}