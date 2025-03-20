#include <iostream>
#include <string>
#include "Book.h"
using namespace std;



int main()

{
	Book myBook;

	myBook.setTitle("1984");
	myBook.setAuthor("George Orwell");
	myBook.setPages(328);
	myBook.printBook();

	return 0;
}