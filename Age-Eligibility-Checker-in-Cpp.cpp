#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 0 && age <= 12)
    {
        cout << "Dude, you're a kid. Go and do your homework!" << endl;
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "You are a Teenager!" << endl;
    }
    else if (age >= 20 && age <= 30)
    {
        cout << "You are a Young Adult" << endl;
    }
    else
    {
        cout << "You are an Adult!" << endl;
    }

    return 0;
}
