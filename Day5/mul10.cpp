//WAP where user can keep entering numbers till they enter a multiple of 10.
#include <iostream>
using namespace std;

int main(){
    int n;

    do {
        
    cout<<"Enter a number : " << endl;
    cin >> n;

    if (n%10 == 0){
        break;
    }  
    cout << "You entered : " << n  << endl;  
    }while (true);
    return 0;
}
