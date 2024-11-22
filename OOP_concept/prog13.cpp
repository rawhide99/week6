#include <iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
    void set_data(int x, int y)
    {
        a = x, b = y;
    }
    void show_data()
    {
        cout << "a "  << a << endl << "b " << b << endl;
    }
    friend complex operator-(complex);
};

complex operator-(complex X)
{
    {
        complex temp;
        temp.a = -X.a;
        temp.b = -X.b;
        return temp;
    }
}

int main()
{
    complex c1, c2;
    c1.set_data(4,6);
    c1.show_data();
    c2 = -c1;
    c2.show_data();
    return 0;
}