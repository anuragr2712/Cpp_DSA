#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number which is 3 digit : ";
    cin >> n;

    int num = n; // creatiing a copy

    int dig1 = num % 10;
    num /=10;
    int dig2 = num % 10;
    num /=10;
    int dig3 = num % 10;
    num /=10;

    int cubesum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

    if (cubesum == n){
        cout <<n<<" is an Armstrong number";
    }else {
        cout << n<< " is not an Armstrong number";
    }
return 0;
}