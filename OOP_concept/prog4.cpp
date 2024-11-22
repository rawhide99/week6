#include <iostream>
using namespace std;


struct book
{
    int bookid;
    char title[20];
    float price;
};

void add(book &);
book add();
void display(book);

int main()
{
    book b1,b2;
    b1 = add();
    add(b2);
    display(b1);
    display(b2);
    return 0;

}
void add(book &b)
{
    cout << "Enter bookid, title, price 2" << endl;
    cin >> b.bookid >> b.title >> b.price;
}

book add()
{
    book b;
    cout << "Enter bookid, title, price " << endl;
    cin >> b.bookid >> b.title >> b.price;
    return b; 
}

void display(book b)
{
    cout << "Book ID :- "  << b.bookid << endl << "Title :- " << b.title << endl << "Price :- " << b.price << endl;
}