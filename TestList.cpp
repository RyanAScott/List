// Programming Project 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "List.hpp"

int main()
{
    typedef List1<int> IntegerList;

    IntegerList L1, L2, L3;

    // Variables
    int a = 15;
    int b = 30;
    int c = 55;
    int d = 420;
    int e = 333;
    int f = 69;

    // Testing List output
    cout << "TESTING LIST1 OUTPUT";
    cout << "L1 empty\n";
    L1.outputList();
    cout << "L1 left length: " << L1.leftLength() << "\n";
    cout << "L1 right length: " << L1.rightLength() << "\n";
    cout << "\n";

    // Testing adding to right list
    cout << "ADDING 4 VARIABLES TO RIGHT LIST";
    L1.addRightFront(a);
    L1.addRightFront(b);
    L1.addRightFront(c);
    L1.addRightFront(d);
    cout << "L1 \n";
    L1.outputList();
    cout << "L1 left length: " << L1.leftLength() << "\n";
    cout << "L1 right length: " << L1.rightLength() << "\n";
    cout << "\n";
    
    // Testing removing from the right list
    cout << "REMOVING ONE VARIABLE FROM RIGHT LIST";
    L1.removeRightFront(a);
    cout << "L1 \n";
    L1.outputList();
    cout << "L1 left length: " << L1.leftLength() << "\n";
    cout << "L1 right length: " << L1.rightLength() << "\n";
    cout << "\n";

    // Testing Advance function
    cout << "ADVANCING TWO VARIABLES FROM RIGHT FRONT TO LEFT REAR\n";
    L1.advance();
    L1.advance();
    cout << "L1 \n";
    L1.outputList();
    cout << "L1 left length: " << L1.leftLength() << "\n";
    cout << "L1 right length: " << L1.rightLength() << "\n";
    cout << "\n";
    cout << "\n";

    // right front
    cout << "TESTING THE RIGHTFRONT FUNCTION\n";
    cout << "Right front: ";
    cout << "\n";

    // replaceRightFront
    cout << "TESTING THE REPLACERIGHTFRONT FUNCTION\n";
    L1.addRightFront(c);
    cout << "Before: ";
    L1.outputList();
    cout << "\n";
    L1.replaceRightFront(d);
    cout << "After: ";
    L1.outputList();
    cout << "\n"; 

    // operator =
    cout << "TESTING THE OPERATOR=\n";
    L2.operator=(L1);
    cout << "L1: ";
    L1.outputList();
    cout << "\n";
    cout << "L2: ";
    L2.outputList();
    cout << "\n";

    // transferFrom
    cout << "TESTING TRANSFERFROM\n";
    L2.transferFrom(L1);
    cout << "L2: ";
    L1.outputList();
    cout << "\n";
    cout << "L3: ";
    L2.outputList();
    cout << "\n";

    // swapRight
    //add two values to L2
    L3.addRightFront(e);
    L3.addRightFront(f);

    // before swap
    cout << "Before: \n";
    cout << "L2: ";
    L2.outputList();
    cout << "\n";
    cout << "L3: ";
    L3.outputList();
    cout << "\n";

    
    // after swap
    L2.swapRights(L3);
    cout << "After: \n";
    cout << "L2: ";
    L2.outputList();
    cout << "\n";
    cout << "L3: ";
    L3.outputList();
    cout << "\n";

    // moveToStart
    cout << "TESTING MOVETOSTART\n";
    cout << "L2 before: ";
    L2.outputList();
    cout << "\n";

    cout << "L2 after: ";
    L2.moveToStart();
    L2.outputList();
    cout << "\n";

    // move to finish
    cout << "TESTING MOVE TO FINISH\n";
    L1.addRightFront(b);
    L1.advance();
    L1.addRightFront(c);
    L1.advance();
    L1.addRightFront(e);
    L1.moveToFinish();
    L1.outputList();
    cout << "\n";

    // right Front
    L1.addRightFront(b);
    cout << "TESTING RIGHTFRONT\n";
    cout << "L1 rightfront: " << L1.rightFront();

}//main
