#include <iostream>
using namespace std;

class complex{
    int balance;
    static float roi;
    static int year;
    public:
    static void set_roi(float r)
    {
        roi = r;
    }
    void display()
    {
        cout << "roi - " << roi << endl; 
    }
};

float complex::roi = 3.14;
int complex:: year = 2;

int main()
{
    complex c;
    complex::set_roi(2.66f);
    c.display();
    return 0;
}