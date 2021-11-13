//
//  median.cpp
//  learningcpp
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include "median.h"
#include <algorithm> // to get the declaration of sort
#include <stdexcept> // to get the declaration of domain_error #include <vector> // to get the declaration of vector
using std::domain_error;
using std::sort;
using std::vector;
// compute the median of a vector<double>
// note that calling this function copies the entire argument vector doub

// function body as defined in §4.1.1/53 }
double median(vector<double> vec){
    typedef vector<double>::size_type vec_siz;

    vec_siz size=vec.size();
    if (size==0){
        throw domain_error("median of an empty vector");
    }
    //sort the grades
    //Rearranges the elements defined by the range [b, e) into nondecreasing order
    sort(vec.begin(),vec.end());
    vec_siz mid=size/2;
    
    return size%2==0?(vec[mid]+vec[mid-1])/2:vec[mid];

}
