//
//  Student.h
//  Mentorship Hacking
//
//  Created by Sophia Kotov on 1/25/16.
//  Copyright (c) 2016 Sophia Kotov. All rights reserved.
//

#ifndef Mentorship_Hacking_Student_h
#define Mentorship_Hacking_Student_h

#include <string>
#include <vector>

#include "TimeSlot.h"

struct Student{
    bool unassigned;
    char gender;
    char campus;
    unsigned int course;
    std::string uniqname;
    std::vector<TimeSlot> availability;
};

#endif
