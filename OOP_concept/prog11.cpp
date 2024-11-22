#include <iostream>
using namespace std;
class B;
class A
{   
    int a;
    public:
    void set_value(int x)
    {
        a = x;
    }
    friend void fun(A,B); 
};

class B
{   
    int b;
    public:
    void set_value(int y)
    {
        b = y;
    }
    friend void fun(A,B);
};

void fun(A o1,B o2)
{
    cout << "Sum is " << o1.a + o2.b << endl;
}

int main()
{
    A c1;
    B c2;
    c1.set_value(5);
    c2.set_value(8);
    fun(c1, c2);
    return 0;
}