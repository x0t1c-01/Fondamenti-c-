#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letter;

    cout << "You will be asked to enter a character.";
    cout << "\nIf it is a lowercase character, it will be converted to uppercase.";
    cout << "\n\nEnter a character. Press . to stop: ";

    cin >> letter;

    if(islower(letter))
    {
        letter = isupper(letter);
        cout << letter;
    }

    while(letter != '.')
    {
        cout << "\n\nEnter a character. Press . to stop: ";
        cin >> letter;

        if(islower(letter))
        {
            letter = toupper(letter);
            cout << letter;
        }
    }

    return 0;
}''
