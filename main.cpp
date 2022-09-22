#include <iostream>
#include "functions.h"

int main(){

std::cout<< "\n------------------\n";
std::string result1 = "";
result1 = box(3,5);
std::cout<< "box(3,5):\n";
std::cout<< result1;
std::cout<< "\n------------------\n";

std::string result2 = "";
result2 = checkerboard(11,6);
std::cout<< "checkerboard(11,6):\n";
std::cout<< result2;
std::cout<< "\n------------------\n";

std::string result3 = "";
result3 = cross(8);
std::cout<< "cross(8):\n";
std::cout<< result3;
std::cout<< "\n------------------\n";

std::string result4 = "";
result4 = lower(8);
std::cout<< "lower(8):\n";
std::cout<< result4;
std::cout<< "\n------------------\n";

std::string result5 = "";
result5 = upper(5);
std::cout<< "upper(5):\n";
std::cout<< result5;
std::cout<< "\n------------------\n";

std::string result6 = "";
result6 = trapezoid(12,5);
std::cout<< "trapezoid(12,5):\n";
std::cout<< result6;
std::cout<< "\n------------------\n";


std::string result7 = "";
result7 = checkerboard3x3(16,11);
std::cout<< "checkerboard3x3(16,11):\n";
std::cout<< result7;
std::cout<< "\n------------------\n";
}