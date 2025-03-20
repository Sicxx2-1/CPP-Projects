#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"
using namespace std;


class ArrayList : public List
{
public:
	ArrayList(int s = 16) : MAX_SIZE(s)
	{
		mArray = new int[MAX_SIZE];
		mNumElements = 0;
	}
	void add(int newEntry)
	{
		if (mNumElements >= MAX_SIZE)
		{
			cout << "Cannot add any more elements, List is full!" << endl;
			return;
		}
		mArray[mNumElements] = newEntry;
		mNumElements++;
	}
	void add(int newEntry, int position)
	{
		if (mNumElements >= MAX_SIZE)
		{
			cout << "Cannot add any more elements, List is full!" << endl;
			return;
		}

		if (position < 0 || position > mNumElements)
		{
			cout << "Out of range with position" << endl;
			return;
		}

		for (int i = mNumElements; i > position; i--)
		{
			mArray[i] = mArray[i - 1];
		}

		mArray[position] = newEntry;
		mNumElements++;
	}
	void set(int newEntry, int position)
	{
		if (position < 0 || position > mNumElements)
		{
			cout << "Out of range for setting at position" << endl;
			return;
		}
		mArray[position] = newEntry;

	}

	bool contains(int entry) const
	{
		bool found = false;

		for (int i = 0; i < mNumElements; i++)
		{
			if (mArray[i] == entry)
			{
				found = true;
				break;
			}
		}
		return found;
	}

	int find(int entry) const
	{
		int foundIndex = -1; // assume not found at first
		
		for (int i = 0; i < mNumElements; i++)
		{
			if (mArray[i] == entry)
			{
				foundIndex = i;
				break;
			}
		}

		return foundIndex;
	}

	int remove(int position)
	{
		int value = -1;
		if (position < 0 || position >= mNumElements)
		{
			cout << "The position to remove is out of range" << endl;
			return value;
		}

		value = mArray[position];

		// Close the gap, and reduce mNumElements

		for (int i = position; i < mNumElements - 1; i++)
		{
			mArray[i] = mArray[i + 1];

		}

		mNumElements--;

		return value;
	}

	void makeEmpty() 
	{
		mNumElements = 0;
	}

	int size() const
	{
		return mNumElements;
	}

	bool isEmpty() const
	{
		return mNumElements == 0;
	}

	void printList() const
	{
		for (int i = 0; i < mNumElements; i++)
		{
			cout << mArray[i] << endl;
		}
	}


private:
	int* mArray;
	const int MAX_SIZE;
	int mNumElements;
};


#endif
