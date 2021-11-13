//
//  main.cpp
//  functions
//
//  Created by Oluwatosin  Oseni on 22/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>

class Entity{
private:
    int x,y;
public:
    int getx(){
        x=2;
        return x;
    }
//    const int* const get(y) const{
//
//    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    int value=9;
    int* pi;
    pi =&value;
    std::cout<<value<<std::endl;
    *pi=7;
    std::cout<<value<<std::endl;
    const int max_age=20;
    int* const  p=new int;
    *p =2;
    
    return 0;
    
}
