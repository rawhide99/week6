// illustrating capacity function in vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a1;

    for(int i = 1; i < 6; i++)
    {
        a1.push_back(i);
    }

    cout << "Size of Vector a1 is " << a1.size() << endl;
    cout << "Capcity of Vector a1 is " << a1.capacity() << endl;
    cout << "Max size of Vector a1 is " << a1.max_size() << endl;

    a1.resize(7);
    cout << "Re-sizing of Vector a1 is " << a1.size() << endl;

    if (a1.empty() == true)
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    a1.shrink_to_fit();
    cout << "Vector elements are: " << endl;
    cout << "The new capcity of Vector a1 is " << a1.capacity() << endl;

    for(auto it = a1.begin(); it != a1.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}