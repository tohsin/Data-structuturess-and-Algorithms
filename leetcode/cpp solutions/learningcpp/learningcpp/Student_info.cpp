//
//  Student_info.cpp
//  learningcpp
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//
#include "grade.hpp"
#include "Student_info.hpp"
using std ::list;
using std::istream; using std::vector;

bool compare(const Student_info& x,const Student_info& y){
    return x.name<y.name;
}
istream& read_hw(istream& in,vector<double>& hw){
    if(in) {
        hw.clear();

        double x;
        while (in>>x){
            hw.push_back(x);

            in.clear();
        }

    }
    return in;
}

istream& read(istream& is, Student_info& s) {
// read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework); // read and store all the student's homework grades
    return is;
 }
bool fgrade(const Student_info& s){
    return grade(s)<60;
}

list<Student_info> extract_fails(list<Student_info>& students){
    list<Student_info> fail;
    list<Student_info>::iterator iter =students.begin();
    while(iter != students.end()){
        if (fgrade(*iter)){
            fail.push_back(*iter);
            iter=students.erase(iter);
        }else{
            ++iter;
        }
    }
    return fail;
}

