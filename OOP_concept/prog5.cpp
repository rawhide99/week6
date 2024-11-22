#include <iostream>
using namespace std;

struct book{
    private :
    int bookid;
    char title[20];
    float price;
    public :
    void input()
    {
        cout << "Enter the bookid, title, price " << endl;
        cin >> bookid >> title >> price;
        if(bookid < 0)
            bookid = -bookid;
    }
    void display()
    {
        cout << "Book ID - " << bookid << endl << "Title - " << title << endl << "Price - " << price << endl;
        
    }

};

int main() 
{
    book b1;
    b1.input();
    b1.display();
    return 0;

}