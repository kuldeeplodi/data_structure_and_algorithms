#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    // 
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    // dereference operator
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;

    int **parptr=&ptr;
    cout<<**(parptr)<<endl;


    // null pointer
    int *ptr1=NULL;
    cout<<ptr1;

    
    return 0;
}