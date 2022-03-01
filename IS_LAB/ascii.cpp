#include <iostream>

using namespace std;

int main()
{
    // Encryption
    string c;
    cout << "Enter the string which is to be encrypted: ";
    cin >> c;
    string ansString;
    for (int i = 0; i < c.length(); i++)
    {
        if(c[i] >= 'a' && c[i] <='z')
        {

        ansString += c[i] +2;
        }
    }
    cout << "The encrypted string is: " << ansString;
    return 0;
}