#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

void Book::setTitle(string title)
{
	this->title = title;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

void Book::setPages(int pages)
{
	this->pages = pages;
}

string Book::getTitle() const 
{
	return title;
}

string Book::getAuthor() const
{
	return author;
}

int Book::getPages() const
{
	return pages;
}

void Book::printBook() const
{
	cout << "The title of the book is: " << title << endl;
	cout << "It was written by: " << author << endl;
	cout << "It has " << pages << " number of pages" << endl;
}