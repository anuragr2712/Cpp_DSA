#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout<<"Enter a:";
    cin >> a;

    cout<<"Enter b:";
    cin>>b;

    int sum = a+b;
    int sub = a-b;
    int product = a*b;
    cout << "sum =" << sum<<endl;
    cout << "sub =" << sub <<endl;
    cout << "prod =" << product <<endl;
    system("pause");
    return 0;
}
