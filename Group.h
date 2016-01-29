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
#include <vector>

struct Group{
    TimeSlot * t;
    std::vector<Student*> groupMembers;
    
    Group(){
        t = nullptr;
    }
    
    void addStudent(Student * ptr){
        ptr->unassigned = false;
        groupMembers.push_back(ptr);
    }
};
#endif
