#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the value of a and b"<< endl;
    cin>>a>>b;

    char op;
    cout<<"enter the operation u want to perform"<< endl;

    cin>>op;

    switch(op){
        case '+':cout<<(a+b)<< endl;
                 break;

        case '-':cout<<(a-b)<< endl;
                 break;
         case '/':cout<<(a/b)<< endl;
                 break;
         case '*':cout<<(a*b)<< endl;
                 break;
         case '%':cout<<(a%b)<< endl;
                 break;
         
         default:cout<<"Please enter a valid operation"<< endl;
    }
    return 0;
}