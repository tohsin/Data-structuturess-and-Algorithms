//
//  Student_info.hpp
//  learningcpp
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#ifndef Guard_Student_info_hpp
#define Guard_Student_info_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
    
};
bool compare(const Student_info& ,const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&,std::vector<double>&);

#endif /* Student_info_hpp */

