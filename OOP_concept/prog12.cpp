#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    void set_value(int x, int y)
    {
        a = x, b = y;
    }
    void show_data()
    {
        cout << "a" << a << endl << "b" << b << endl;
    }
    friend complex operator+(complex, complex);  
};

complex operator+(complex X, complex Y)
{
    complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;  
}

int main()
{
    complex c1, c2, c3;
    c1.set_value(6,7);
    c2.set_value(8,9);
    c3 = c1 + c2;
    c3.show_data();
    return 0;

}