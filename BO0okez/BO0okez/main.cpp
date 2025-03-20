#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

void printBookDetails(const Book& book);

int main()
{
	Book myBook("Andrei Pumn-de-zale", "Cum sa faci bani pe urma prosti lor", "Smecherie", 69);

	
	//printBookDetails(myBook);

	myBook.printBookDetails();



	return 0;
}


void printBookDetails(const Book& book)
{
	cout << "The author is: " << book.getAuthor() << endl;
	cout << "The name of the book is: " << book.getTitle() << endl;
	cout << "The genre is: " << book.getGenre() << endl;
	cout << "It has " << book.getNumPages() << " number of pages." << endl;
}