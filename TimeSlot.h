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
    unsigned int hour;
    std::string mentor;
    std::string day;
    std::string course;
    
    TimeSlot(){
        day = "";
        hour = 0;
    }
};

#endif
