//Push back and pop back methods in vector
#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> &v);

int main()
{
    vector<int>vec1;
    int ele;
    cout << "Enter the elements that you want to add to vector vec1" << endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> ele;
        vec1.push_back(ele);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vec1.pop_back();
    display(vec1);

    return 0;
}

void display(vector<int> &v)
{
    for(int j = 0; j < v.size(); j++)
    {
        cout << v[j] << "\t";
    }
    cout << endl;
}