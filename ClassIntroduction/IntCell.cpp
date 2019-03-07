//
//  IntCell.cpp
//  jjjjj
//
//  Created by Eray on 7.03.2019.
//  Copyright © 2019 Eray Alparslan. All rights reserved.
//

#include "IntCell.hpp"
class IntCell {
    
private:
    int storedValue;
    
    
public:
    /*  Our default initilizer  */
    IntCell(){
        storedValue = 99;
    }
    
    /* Our custom initializer */
    IntCell(int initialValue){
        storedValue = initialValue;
    }
    
    /* Getter */
    int getStoredValue(){
        return storedValue;
    }
    
    /* Setter */
    void setStoredValue(int val){
        storedValue = val;
    }
    
};
