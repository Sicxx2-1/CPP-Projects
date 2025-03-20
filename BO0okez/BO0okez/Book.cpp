#include <iostream>
#include <string>
#include "Book.h"
using namespace std;


Book::Book(string author, string title, string genre, int numPages)
{
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}

string Book::getAuthor() const
{
	return author;
}

string Book::getTitle() const
{
	return title;
}

string Book::getGenre() const
{
	return genre;
}

int Book::getNumPages() const
{
	return numPages;
}

void Book::printBookDetails() const
{
	cout << "The author is: " << author << endl;
	cout << "The name of the book is: " << title << endl;
	cout << "The genre is: " << genre << endl;
	cout << "It has " << numPages << " number of pages." << endl;
}