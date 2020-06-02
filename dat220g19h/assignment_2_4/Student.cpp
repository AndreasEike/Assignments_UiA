//
// Created by Andreas Høiberg Eike on 2019-08-29.
//

#include <iostream>
#include "Student.h"



void Student::print() const {
    for(auto& n : course) {
        std::cout << name << " - " << n.first << " - " << n.second << std::endl;
    }
}