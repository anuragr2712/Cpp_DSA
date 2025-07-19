//  Write a C++ program that takes a year from the user and print whether 
// that year is a leap year or not. 

#include <iostream>
using namespace std;

int main(){
    int year;
    cout << " Enter The Year to check :"<<endl;
    cin >> year;

    if (year%4 == 0){
        cout <<"Leap year : "<<year<<endl;
    }else {
        cout << "It is not a leap year : "<<year<<endl;
// int a = 5; 
// if (++a*5 <= 25) { 
// cout<<"Hello\n"; 
// } else { 
// cout<<"Bye\n"; 
// }
    } return 0;
}