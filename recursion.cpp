#include <iostream>

using namespace std;

int arr[] = {1,2,3,4,5} ;
void printReverse(int n)
{
    if(n > 4){
        return;
    }
        cout << "Value of n " << arr[n] << endl;
        printReverse(n + 1);
        cout << "Printing after: " << arr[n] << endl;

}

int main()
{
    printReverse(0);
    return 0;
}