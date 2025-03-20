#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;



class Book
{

public:
	void setTitle(string title);
	void setAuthor(string author);
	void setPages(int pages);
	string getTitle() const;
	string getAuthor() const;
	int getPages() const;
	void printBook() const;



private:
	string title;
	string author;
	int pages;
};

#endif