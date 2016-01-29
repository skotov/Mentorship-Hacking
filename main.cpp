//
//  main.cpp
//  Mentorship Hacking
//
//  Created by Sophia Kotov on 1/25/16.
//  Copyright (c) 2016 Sophia Kotov. All rights reserved.
//

#include "Student.h"
#include "Group.h"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

//prints a message describing what the program does and how to use it
void printHelpText(){
    cout << "Welcome to the Mentorship Hacker(tm). Given some information on mentors and students, this program creates mentorship groups.\n";
    cout << "The file containing information on mentors should have information in the following format:\n";
    cout << "<name> <course> <meeting day> <meeting time>\n";
    cout << "names must have no whitespace, meeting days must be one of M, TU, W, TH, F, SA, SU, and meeting times must fall on the hour. For example, 5 pm should be represented as '5'.\n";
    cout << "information on students should be represented in a .csv file in the following format:\n";
    cout << "<email (not uniqname)> <course> <availability>\n";
    cout << "courses should be represented as 'ENGR 101', 'ENGR 151', 'EECS 183', or 'EECS 280'\n";
    cout << "Currently, this program can't handle times";
}

//returns true if input reading was successful, false otherwise
bool readInput(vector<TimeSlot> & ts, vector<Student> & s);

//prints the results of the pairings
void printGroups(vector<Group> & g);

int main(int argc, const char * argv[]) {
    
    vector<TimeSlot> timeSlots;
    vector<Student> students;
    string help;
    cout << "for more information on how this program works and formatting of input, press 'h' or type 'help'. Press enter to continue\n";
    cin >> help;
    if (help == "h" || help == "help") {
        printHelpText();
        exit(1);
    }
    
    bool inputStatus = readInput(timeSlots, students);
    if (!inputStatus) {
        cout << "something went wrong while reading input. Please try again.\n";
        exit(1);
    }
    
    vector<Group> groups;
    
    //for each timeslot
    for (int i = 0; i < timeSlots.size(); ++i) {
        
        
        //find the first five students in the students array that also have that time slot
        
        //flip each of their assigned bools
        
        //create a Group object
        
        //add to array of Group pointers
    }
    
    //take care of the case when there are remaining students for each course
    
    
    
    return 0;
}

bool readInput(vector<TimeSlot> & ts, vector<Student> & s){
    
    string mentorFName;
    cout << "enter the name of the file containing the list of mentor-specified meeting times using the specified format\n";
    cin >> mentorFName;
    ifstream f;
    f.open(mentorFName);
    
    if (f.fail()){
        return false;
    }
    
    string currentLine;
    
    while (getline(f, currentLine)) {
        
        //parse the string
        
        //store in timeSlots vector
    }
    f.close();
    
    //read in mentor times into timeSlots vector
    
    cout << "enter the name of the file containing the student data in the specified format\n";
    string studentFName;
    cin >> studentFName;
    
    f.open(studentFName);
    
    if (f.fail()){
        return false;
    }
    
    while (getline(f, currentLine)) {
        
        //parse the string
        
        //store in timeSlots vector
    }
    
    f.close();
    
    return true;
}
