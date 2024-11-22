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
        cout << "a " << a << endl << "b " << b << endl;
    }
    friend void fun(complex);
};

void fun(complex c)
{
    cout <<"Sum is " << c.a+c.b;
}


int main()
{
    int a, b;
    cin >> a >> b;
    complex c1;
    c1.set_data(a,b);
    c1.show_data();
    fun(c1);
    return 0;
}