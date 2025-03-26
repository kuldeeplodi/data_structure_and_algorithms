#include<iostream>
using namespace std;

void change(int a){//pass by value
    a=20;
}

void changeA(int* ptr){//pass by reference using pointer
    *ptr=20;
}
void changeB(int &a){//pass by reference using alias
    a=20;
}

int main(){
    int a=10;
    // change(a);
    // changeA(&a);
    changeB(a);

    cout<<"inside main fnx:"<<a<<endl;


    return 0;
}