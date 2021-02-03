#pragma once
# define List_h

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <list>
using namespace std;
#include "Sequence.hpp"

template <class T>
class List1
	//! is modeled by (
	//!		left: string of T
	//!		right: string of T
	//!	)
	//! exemplar self
{
	public: // Standard Operator
		List1 ();
		//! replaces self
		//! ensures: self = (<>, <>)

		~List1 ();

		void clear (void);
		//! clears self

		void transferFrom (List1& source);
		//! replaces self
		//! clears source
		//! ensures: self = #source

		List1& operator = (List1& rhs); // rhs means the right hand side
		//! replaces self 
		//! restores rhs
		//! ensures: self = rhs

		// List1 Specific Operations
		void moveToStart(void);
		//! updates self
		//! ensures: self = (<>, #self.left * #self.right)

		void moveToFinish(void);
		//! updates self
		//! ensures: self = (#self.left * #self.right,<>)

		void advance(void);
		//! updates self
		//! requires: self.right /= <>
		//! ensures: self.left * self.right = #self.left *
		//! #self.right and |self.left| = |#self.left| + 1

		void addRightFront(T& x);
		//! updates self.right
		//! clears x
		//! ensures: self = (#self.left, <#x> * #self.right)

		void removeRightFront(T& x);
		//! updates self.right
		//! replaces x
		//! requires: self.right /= <>
		//! ensures: <x> is prefix of #self.right and
		//! self = (#self.left, #self.right[1, |#self.right|))

		T& rightFront(void);
		//! restores self
		//! requires: self.right /= <>
		//! ensures: <rightFront> is prefix of self.right

		void replaceRightFront(T& x);
		//! updates self.right, x
		//! requires: self.right /= <>
		//! ensuresL <x> is prefix of #self.right and
		//! self = (#self.left,<#x> * #self.right[1,|#self.right|))

		void swapRights(List1& otherS);
		//! updates self.right, otherS.right
		//! ensures: self = (#self.left,#otherS.right) and
		//!			 otherS = (#otherS.left,#self.right)

		int leftLength(void);
		//! restores self
		//! ensures: leftLength = |self.left|

		int rightLength(void);
		//! restores self
		//! ensures: rightLength = |self.right|

		void outputList(void);
		//! this will output the list I create
		//! I can jerryrig the fence into here

		private: //representation
			Sequence<T> left, right;
}; // List1 contract
		