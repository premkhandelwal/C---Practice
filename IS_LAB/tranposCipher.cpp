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
    int keyLen = lenNum(key);
    int rowCount = message.length() % keyLen;


    /* 
       0 1 2 3

    0  h e l l
    1  o   w o 
    2  r l d

    2 1 3 4

    
     */

    cout<< "keylen " << keyLen <<endl;
    cout<< "rowCount " << rowCount <<endl;

    char matrix[rowCount][keyLen];

    int messageInd = 0;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < keyLen; j++)
        {
            matrix[i][j] = message[messageInd++];
        }
        
    }

/*     cout<< "1st Row" <<endl;
    cout<< matrix[0][0] <<endl;
    cout<< matrix[0][1] <<endl;
    cout<< matrix[0][2] <<endl;
    cout<< matrix[0][3] <<endl;

    cout<< "2nd Row" <<endl;

    cout<< matrix[1][0] <<endl;
    cout<< matrix[1][1] <<endl;
    cout<< matrix[1][2] <<endl;
    cout<< matrix[1][3] <<endl;
    cout<< "3rd Row" <<endl;


    cout<< matrix[2][0] <<endl;
    cout<< matrix[2][1] <<endl;
    cout<< matrix[2][2] <<endl;
    cout<< matrix[2][3] <<endl;
    cout<< "End" <<endl; */

    string res[keyLen];

    for (int i = 0; i < keyLen; i++)
    {
        string resString;
        for (int j = 0; j < rowCount; j++)
        {
            resString += matrix[j][i];
        }
        // res.append()
        res[i] = resString;
        cout<< "res : " << resString <<endl;   
    }
//
    for (int i = 0; i < keyLen; i++)
    {

        cout<<  endl;
    }
    
    
    
}

int main(){
    encrypt("hello World", 1234);
    return 0;
}