//
//  Group.h
//  Mentorship Hacking
//
//  Created by Sophia Kotov on 1/25/16.
//  Copyright (c) 2016 Sophia Kotov. All rights reserved.
//

#ifndef Mentorship_Hacking_Group_h
#define Mentorship_Hacking_Group_h

#include "Student.h"
#include "TimeSlot.h"

struct Group{
    TimeSlot * t;
    Student * s1;
    Student * s2;
    Student * s3;
    Student * s4;
    Student * s5;
    
    Group(){
        t = nullptr;
        s1 = nullptr;
        s2 = nullptr;
        s3 = nullptr;
        s4 = nullptr;
        s5 = nullptr;
    }
};
#endif
