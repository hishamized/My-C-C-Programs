#include<iostream>
#include<stdlib.h>
using namespace std;
int counter(); // returns the number of books in the library
void display(int);
void author(char*);
struct library
{
    int an; //accession number
    char title[30]; //name of the book
    char name[30]; //name of the author
    int price; //price of the book
    bool flag;
}
book[50] = { 1, "Let Us C", "Yashavant Kanethkar", 258, 1,
2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};
int main()
{
 int ans=1, an;
 char name2[30];
 while(ans!=7)
 {
  cout<<"\n\nYou are in the menu section\n.";
  cout<<"\nPress 1 to add book information.";
  cout<<"\nPress 2 to display book information.";
  cout<<"\nPress 3 to List all books of given author.";
  cout<<"\nPress 4 to List the title of specified book.";
  cout<<"\nPress 5 to List the count of books in the library.";
  cout<<"\nPress 6 to List the books in order of accession number.";
  cout<<"\nPress 7 to exit the menu.";
  cin>>ans;
  switch(ans)
  {
  case 1:
    addbook();
    getch();
    break;
  case 2:
    cout<<"\nEnter the accession number of the book.";
    cin>>an;
    display(an);
    getch();
    break;
  case 3:
    cout<<"\nEnter the name of the author.";
    gets(name2);
    author(name2);
    getch();
    break;
  case 4:
      cout<<"\nEnter the accession number of the book you're looking for.";
      cin>>an;
      whichone(an);
      getch();
      break;
  case 5:
    cout<<"\nThe total number of books in the library are : \n";
    counter();
    getch();
    break;
  case 6:
    allbooks();
    getch();
    break;
  case 7:
    return 0;
  default:
    cout<<"\n\nWrong choice try again.";
  }
 }
 getch();
 return 0;
}
int counter()
{
    int i=0;
    while(book[i].an)
    {
        i++
    }
    return i;
}
void display(int i)
{
    i--; //indexing
    cout<<<"\n\n\n\n Accession number : "<<book[i].an;
    cout<<"\n Book title : "<<book[i].title;
    cout<<"\n Author name : "<<book[i].name;
    cout<<"\n Book Price : "<<book[i].price;
    if(book[i].flag) // flag : 0
        cout<<"\n\nStatus : Issued!";
    else // flag : 1
        cout<<"\n\nStatus : Available!";
}
void author(char *name2)
{
    int i = 0;
    cout<<"\n\nThe books of "<<name2<<" are : ";
    while(book[i].an)
    {
        if(!(strcmp(name2, book[i].name)))
            display(book[i].an);
        i++;
    }
}
