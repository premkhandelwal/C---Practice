#include <iostream>

using namespace std;

void swap(int* a, int* b){
    (*a) = (*a)^(*b);
    (*b) = (*b)^(*a);
    (*a) = (*a)^(*b);
}

int main(){
    int a,b;
    cout<< "Enter first value: " <<endl;
    cin>>a;
    cout<< "Enter second value: " <<endl;
    cin>>b;
    
    cout<< "Value of a before swapping: " << a <<endl;
    cout<< "Value of b before swapping: " << b <<endl;
    swap(&a, &b);
    cout<< "Value of a after swapping: " << a <<endl;
    cout<< "Value of b after swapping: " << b <<endl;
    return 0;
}