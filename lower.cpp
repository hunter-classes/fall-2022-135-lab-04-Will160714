#include <iostream>
#include <string>
#include "all.h"

std::string lower(int length){
    std::string result = "";
    result += "Input side length: " + std::to_string(length) + "\n";
    result += "\n";
    result += "Shape: \n"; 

    for(int x = 0; x < length; x ++){
        for(int y = 0; y <= x; y ++){
            result += "*";
        }
        result += "\n";
    }

    return result;
}