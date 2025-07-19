// // Write a C++ program to get a number from the user and print whether 
// it's positive, negative or zero. 
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin >> number;

    if (number > 0){
        cout <<"The number is positive"<<endl;
    } else if (number < 0){
        cout <<"The number is negative"<<endl;
    } else {
        cout <<"The number is Zero!"<< endl;

    }return 0;

}