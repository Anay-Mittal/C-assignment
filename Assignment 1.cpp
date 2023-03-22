#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << " Assignment 1: calculating pythogoreas theorem and root evaluation" << endl;
    float a,b,c,d,r1,r2;
    cout << " enter the value of a : " << endl;
    cin >> a;
    cout << "enter the value of b : " << endl;
    cin >> b;
    cout << " enter the value of c : " << endl;
    cin >> c;
    d= b*b-4*a*c;
    if (d>=0)
    {
        r1= -b+sqrt(d)/2*a;
        r2= b+sqrt(d)/2*a;
        cout << "the real roots are : " <<  r1 << " and " << r2 << endl;
    }
    else if (d==0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        cout << " the roots are equal and are : " << r1 << " and " << r2 << endl;
    }
    else
    cout << " the roots are imaginary." << endl;
    return 0;

}