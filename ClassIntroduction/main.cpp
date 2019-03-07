//
//  main.cpp
//  jjjjj
//
//  Created by Eray on 5.03.2019.
//  Copyright © 2019 Eray Alparslan. All rights reserved.
//

#include <iostream>
#include "IntCell.cpp"
using namespace std;

int main(){
    
    IntCell *cellObject;
    cellObject = new IntCell;
    
    // print default value
    cout << cellObject->getStoredValue() << endl;
    
    // call with custom constructor
    
    IntCell *mpointer;
    IntCell myObject(777);
    mpointer = &myObject;
    
    cout << mpointer->getStoredValue() << endl;
    
    // use setter to change the value
    mpointer->setStoredValue(778);
    
    // print the brand new value
    cout << mpointer->getStoredValue() << endl;
    
    return 0;
}



