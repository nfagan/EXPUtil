//
//  EXPUtil.cpp
//  EXPUtil
//
//  Created by Nick Fagan on 11/6/17.
//  Copyright © 2017 Nick Fagan. All rights reserved.
//

#include <iostream>
#include "EXPUtil.hpp"
#include "EXPUtilPriv.hpp"

void EXPUtil::HelloWorld(const char * s)
{
    EXPUtilPriv *theObj = new EXPUtilPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void EXPUtilPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

