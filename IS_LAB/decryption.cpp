#include <iostream>

using namespace std;

int main(){
    // Decryption
    string c;
    cout << "Enter the string which is to be decrypted: ";
    cin >> c;
    string ansString;
    for (int i = 0; i < c.length(); i++)
    {
        if(c[i] >= 'a' && c[i] <='z')
        {

        ansString += c[i] -2;
        }
    }
    cout << "The encrypted string is: " << ansString;
    cout<< "Ascii of a " << int('a') <<endl;
    cout<< "Ascii of z " << int('z') <<endl;
    return 0;
    return 0;
}