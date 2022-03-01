#include <iostream>

using namespace std;

string encrypt(string plainText, int key)
{
    char railMatrix[key][plainText.length()];
    string encryptedText;
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < plainText.length(); j++)
        {
            railMatrix[i][j] = '\n';
        }
    }

    int row = 0, col = 0, k = -1;

    for (int i = 0; i < plainText.length(); i++)
    {
        railMatrix[row][col++] = plainText[i];
        if (row == 0 || row == key - 1)
        {
            k = (-1) * k;
        }
        row += k;
    }

    for (int i = 0; i < key; ++i)
    {
        for (int j = 0; j < plainText.length(); ++j)
        {
            if (railMatrix[i][j] != '\n')
            {
                encryptedText += railMatrix[i][j];
            }
        }
    }
    return encryptedText;
}

void decrypt(string cipherText, int key){
    char railMatrix[key][cipherText.length()];
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < cipherText.length(); j++)
        {
            railMatrix[i][j] = '\n';
        }
        
    }
    int row = 0, col = 0, k = -1;
    for (int i = 0; i < cipherText.length(); i++)
    {
        railMatrix[row++][col] = cipherText[i];
        if (col == key - 1)
        {
            k = (-1) * key;
        }
        col += k;
    }

 row = 0, col = 0, k = -1;
    for (int i = 0; i < cipherText.length(); i++)
    {
        if (row == 0 || row == key - 1)
        {
            k = (-1) * k;
        }
            cout<< railMatrix[row][col++];
        row += k;
        
    }
    
    
    
}


int main()
{
   string encryptedTxt = encrypt("He12oWor3d", 3);
   cout<< "Encrypted Text is " << encryptedTxt <<endl;
    decrypt(encryptedTxt, 3);
    return 0;
}