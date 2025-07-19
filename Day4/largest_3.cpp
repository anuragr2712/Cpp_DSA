#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout <<"Enter first number a : ";
      cin >> a;
    cout <<"Enter second number b : ";
      cin >> b;
    cout <<"Enter third number c : "; 
      cin >> c;

    if (a >=b && a >=c){
        cout<<"a is the greatest number" <<a<< endl;
    } else if (b>=c ){
        cout <<"b is the greatest number" <<b<< endl;
    } else {
        cout << "c is the greatest number" <<c<< endl;
    } 
    return 0;

}