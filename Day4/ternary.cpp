#include <iostream>
using namespace std;

int main(){
    bool isadult;
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    isadult = age >=18 ? 1 : 0;
    return 0;
}