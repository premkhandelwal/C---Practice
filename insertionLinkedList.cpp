#include <iostream>

using namespace std;

struct Node
{
    int data =1;
    struct Node* next;
};


int main(){
     Node* node  ;
     cout<< node->data <<endl;

    node->data = 2;
    node->next =NULL;
    //cout<< node->data <<endl;
     cout<< "Hello" <<endl;
     cout<< node->data <<endl;
    return 0;
}