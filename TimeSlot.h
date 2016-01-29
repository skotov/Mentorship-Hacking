//
//  Time.h
//  Mentorship Hacking
//
//  Created by Sophia Kotov on 1/25/16.
//  Copyright (c) 2016 Sophia Kotov. All rights reserved.
//

#ifndef Mentorship_Hacking_Time_h
#define Mentorship_Hacking_Time_h


struct TimeSlot{
    bool assigned;
    unsigned int course;
    
    unsigned int hour;   //Student struct contains an array of TimeSlots
    std::string day;     //these two fields are the only ones pertinent to Students
    
    std::string mentor;
    
    
    
    TimeSlot(){
        day = "";
        hour = 0;
    }
};

#endif
