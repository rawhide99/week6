#include<iostream>

using namespace std;

void display(int *arr1, int size);

int main()
{
    cout << "Dynamic memory allocation using new" << endl;
    int *arr = new int[5];
    cout << "Enter all 5 elements." << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    display(arr, 5);

    delete[] arr;
    return 0;
}

void display(int *arr1, int size)
{
    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << "\t"; // Print each element
    }
}