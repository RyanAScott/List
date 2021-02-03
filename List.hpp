#pragma once
# define List_hpp

#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
#include "List.h"

//	STANDARD OPERATORS	

// List1 Constructor
template <class T>
List1<T>::List1() {

}// constuctor

// List1 destructor
template <class T>
List1<T>::~List1() {

}// destructor

// List1 clear
template <class T>
void List1<T>::clear(void) {
	left.clear();
	right.clear();
}// clear

// List1 transferFrom
template <class T>
void List1<T>::transferFrom(List1& source) {
	left.transferFrom(source.left);
	right.transferFrom(source.right);
	source.clear();
}// transferFrom

// List1 operator = 
template <class T>
List1<T>& List1<T>::operator=(List1& rhs) {
	left.operator = (rhs.left);
	right.operator = (rhs.right);
	return (*this);
}// operator = 

//		LIST1 SPECIFIC OPERATORS

// output list
template <class T>
void List1<T>::outputList() {
	cout<<"(";
	left.outputSequence();
	cout<<",|";
	right.outputSequence();
	cout << ")";
	cout << "\n";
}// output list

// left length
template <class T>
int List1<T>::leftLength(void) {
	return left.length();
}// leftLength

// right length
template <class T>
int List1<T>::rightLength(void) {
	return right.length();
}// rightLength

// addRightFront
template <class T>
void List1<T>::addRightFront(T& x) {
	right.add(x, 0);
}// addRightFront


// removeRightFront
template <class T>
void List1<T>::removeRightFront(T& x) {
	if (right.length() == 0) {
		cout << "Right list is empty\n";
	}// if
	else {
		right.remove(x, 0);
	}// else
}// removeRightFront

// advance (advance value from the front of right to the rear of left
template <class T>
void List1<T>::advance(void) {
	if (right.length() == 0) {
		cout << "Right is emply\n";
	}// if
	else {
		int x = right.entry(0);
		right.remove(x, 0);
		left.add(x, left.length());
	}// else
}// advance



// replace right front
template <class T>
void List1<T>::replaceRightFront(T& x) {
	if (right.length() != 0) {
		T temp = x;
		right.remove(x, 0);
		right.add(temp, 0);
	}// if
}


// swapRights
template <class T>
void List1<T>::swapRights(List1& otherS) {
	Sequence<T> temp;
	temp = right;
	right = otherS.right;
	otherS.right = temp;
	temp.clear();
}// swapRights

// moveToStart
template <class T>
void List1<T>::moveToStart(void) {
	for (int i = 0; i < left.length(); i++) {

		right.add(left.entry(i), i);
		left.remove(left.entry(i), i);

	}// for i
}//moveToStart

template <class T>
void List1<T>::moveToFinish(void) {

	for (int i = 0; i, right.length(); i++) {

		left.add(right.entry(i), i);
		right.remove(right.entry(i), i);

	}// for i 

}// move to Finish

template <class T>
T& List1<T>::rightFront() {
	return right.entry(0);
}// rightFront