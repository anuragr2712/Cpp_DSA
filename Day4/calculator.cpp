#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout <<"Enter a : ";
    cin >> a;

    cout <<"Enter b : ";
    cin >> b;
    
    cout <<"Enter Operator : ";
    cin >> op;

    switch (op){
        case '+' : cout <<"a+b = "<<(a+b)<<endl;
            break;
        case '-' : cout <<"a-b = "<<(a-b)<<endl;
            break;
        case '/' : cout <<"a/b = "<<(a/b)<<endl;
            break;
        case '*' : cout <<"a*b = "<<(a*b)<<endl;
            break;
    }return 0;
}