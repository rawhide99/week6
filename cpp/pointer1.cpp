//exploring pointer arithmetic

#include <iostream>
using namespace std;

int main()
{
    int len = 7;
    int arr[len] = {2,3,5,7,11,13,17};
    int *ptr = arr;

    for(int i = 0; i < len; i++)
    {
        // 1st method
        //cout << i+1 << " prime element is " << *(ptr + i) << endl;
        
        //2nd method
        cout << i+1 << " prime element is " << arr + i << endl;
    }

    return 0;
}