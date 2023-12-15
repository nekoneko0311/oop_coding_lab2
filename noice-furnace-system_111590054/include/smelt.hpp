
#ifndef OOP_SMELT_H
#define OOP_SMELT_H

#include <string>
#include <vector>
#include "SmeltResult.hpp"

class smelt{
private:
    SmeltResult id = SmeltResult(1,"Iron");  
;
public:
    smelt(){
    }
    SmeltResult Smelt (){
        return id;
    }
};


#endif