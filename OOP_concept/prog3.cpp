#include <iostream>
using namespace std;

float area(int);
int area(int, int);

int main()
{
    int r;
    cout << "Enter the radious" << endl;
    cin >> r;
    int A = area(r);
    cout << "area of circle " << A << endl;

    int a,l,b;
    cout << "Enter the lenght and Breadth" << endl;
    cin >> l >> b;
    a = area(l,b);
    cout << "area of rectangle " << a << endl;
    return 0;
}

float area(int R)
{
    return (3.14 * R * R);
}

int area(int L, int B)
{
    return(L * B);
}