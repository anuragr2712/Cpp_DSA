#include <iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;

    cout<<"Enter value of pencil : ";
    cin >>pencil;

    cout <<"Enter value of pen : ";
    cin>> pen;

    cout << "Enter value of eraser : ";
    cin>> eraser;

    float bill = (pen+pencil+eraser);
    float GST_Bill = 0.18*bill;
    float total_bill = GST_Bill+bill;
    cout << "GST (18%) is : " << GST_Bill << endl;
    cout << "Total bill with GST is : " << total_bill << endl;
    return 0;
}