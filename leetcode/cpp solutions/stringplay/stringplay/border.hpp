//
//  border.hpp
//  stringplay
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#ifndef Guard_border_hpp
#define Guard_border_hpp
#include <string>
#include <stdio.h>
#include <vector>
std::string::size_type width(const std::vector<std::string>&);
std::vector<std::string> frame(const std::vector<std::string>&);
std::vector<std::string> vcat(const std::vector<std::string>&, const std::vector<std::string>&);
#endif /* border_hpp */
