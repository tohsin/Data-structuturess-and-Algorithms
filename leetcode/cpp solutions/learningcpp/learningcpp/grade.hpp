//
//  grade.hpp
//  learningcpp
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#ifndef Guard_grade_hpp
#define Guard_grade_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "Student_info.hpp"
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif /* grade_hpp */
