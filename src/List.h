#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;

template <class T>
class List {
	public:
		List();
		~List();
		//other
		List& operator+=(const T&);
		List& operator-=(const T&);
		const T& operator[](int index) const;
		T& operator[](int index);
		int getSize() const;
		bool isFull() const;
		void clear();
	
	private:
		int numElements;
		T* elements;
	
};

template <class T>
List<T>::List(){
	elements = new T[MAX_ARRAY];
	numElements = 0;
}

template <class T>
List<T>::~List(){
	delete [] elements;
}

//adds an element to the back of the List.
template <class T>
List<T>& List<T>::operator+=(const T& s){
	if (numElements >= MAX_ARRAY)   return *this;//check
  	elements[numElements++] = s;
	return *this;
}

//removes element T from the List if it exists.

template <class T>
List<T>& List<T>::operator-=(const T& s){
	int index = 0;
	while (index < numElements){
		if (s == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	return *this;
}

//If the supplied index is out of bounds, print an error message to cerr and call
//exit(1)
template <class T>
const T& List<T>::operator[](int index) const{
	if (index < 0 || index >= numElements) {
		cerr<<"List index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}

template <class T>
T& List<T>::operator[](int index) {
	if (index < 0 || index >= numElements) {
		cerr<<"List index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}


template <class T>
int List<T>::getSize() const{
	return numElements;
}

template <class T>
bool List<T>::isFull() const {
	return numElements >= MAX_ARRAY;
}

template <class T>
inline void List<T>::clear()
{
	numElements = 0;
}

#endif