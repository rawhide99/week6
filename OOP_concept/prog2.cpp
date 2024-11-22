#include <iostream>
using namespace std;
int add(int, int=0, int=0);
int main() {
    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "The sum " << add(a,b) << endl;
    int c;
    cout << "Enter three numbres" << endl;
    cin >> a >> b >> c;
    cout << "The sum of three numbers" << add(a,b,c) << endl;
    return 0;
}

int add(int x, int y, int z)
{
    return (x+y+z);
}