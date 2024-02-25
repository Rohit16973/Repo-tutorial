#include <iostream>
using namespace std;
class Complex{
int a,b;
public :
Complex(void);

void print()
{
    cout<<"The number is "<<a <<" + "<<b<<"i"<<endl;
}

};
Complex::Complex()
{
a=10;
b=10;
}
int main()
{
    Complex c1,c2;
    c1.print();
    c2.print();
    return 0;
}
