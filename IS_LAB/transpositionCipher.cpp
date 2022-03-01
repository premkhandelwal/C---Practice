#include <iostream>

using namespace std;

int lenNum(int num)
{
    int lengthNum = 0;
    while (num > 0)
    {
        num = num / 10;
        lengthNum += 1;
    }
    return lengthNum;
}

void encrypt(string message, int key)
{
    cout<< "message " << message <<endl;
    int keylen = lenNum(key);
    int rowCount = message.length() % keylen;

    int messageInd = 0;
    char matrix[keylen][rowCount];
    cout<< "rowCount " << rowCount  <<endl;
    cout<< "keylen " << keylen  <<endl;
    // int row = 0, col = 0;
    //rowCount = 3
    //keyLen = 4
    //helloWorld
    /* 
       0 1 2 3

    0  h e l l
    1  o   w o 
    2  r l d
    
     */
    for (int i = 0; i < rowCount+1; i++) 
    {
        for (int j = 0; j < keylen; j++)
        {
            cout<< "messageInd " << messageInd <<endl;
            matrix[i][j] = message[messageInd++];
            cout << "i, j,  message[messageInd] " << i << " " << j << " " << matrix[i][j] << endl;
        }
        cout<< "matrix[i] " << matrix[i] <<endl;
    }
    // cout<< "message 2 "    <<endl;
    /* cout<< matrix[0][0] <<endl;
    cout<< matrix[0][1] <<endl;
    cout<< matrix[0][2] <<endl;
    cout<< matrix[0][3] <<endl;
    
    cout<< matrix[1][0] <<endl;
    cout<< matrix[1][1] <<endl;
    cout<< matrix[1][2] <<endl;
    cout<< matrix[1][3] <<endl;

    cout<< matrix[2][0] <<endl;
    cout<< matrix[2][1] <<endl;
    cout<< matrix[2][2] <<endl;
    cout<< matrix[2][3] <<endl; */

    cout<< "matrix[i][j] " << matrix[0] <<endl;

    // print(matrix)
    /* int row = 0, col = 0;
    for (int i = 0; i < calculatedlenNum + 1; i++) // calculatedlenNum = Key = 4
    {
        row = 0;
        for (int j = 0; j < rowCount + 1; j++)
        {
            cout <<  "col " << col << " row " << row  << " char " << matrix[row][col]  << endl;
            // cout << "col " << col << endl;

            // cout << matrix[row][col];
            row++;
        }
        col++;
        
    } */

    for (int i = 0; i < keylen; i++)
    {
        for (int j = 0; j < rowCount; j++)
        {
            cout << matrix[j][i];
        }
    }

    // cout<< "Matrix " << matrix <<endl;
}

int main()
{
    int key;
    string s;
    // cout << "Enter the text: ";
    // getline(cin, s);
    // cout << "Enter the key: ";
    // cin >> key;
    encrypt("hello World", 1234);
    return 0;
}