#include <iostream>
 class A
 {
    private:
    int a;
    protected:
    void set_value(int x)
    {
        a = x;
    }
 };
 class B:public A
 {
    public: 
    void set_data(int x)
    {
        set_value(x);
    
    }
 };


int main()
{
    B obj;
    obj.set_data(5);
    return 0;
}