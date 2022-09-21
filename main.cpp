#include <iostream>
#include "functions.h"
using namespace std;

int main(){

cout << "\n------------------\n";
string result1 = "";
result1 = box(3,5);
cout << "box(3,5):\n";
cout << result1;
cout << "\n------------------\n";

string result2 = "";
result2 = checkerboard(11,6);
cout << "checkerboard(11,6):\n";
cout << result2;
cout << "\n------------------\n";

string result3 = "";
result3 = cross(8);
cout << "cross(8):\n";
cout << result3;
cout << "\n------------------\n";

string result4 = "";
result4 = lower(8);
cout << "lower(8):\n";
cout << result4;
cout << "\n------------------\n";

string result5 = "";
result5 = upper(5);
cout << "upper(5):\n";
cout << result5;
cout << "\n------------------\n";

string result6 = "";
result6 = trapezoid(12,5);
cout << "trapezoid(12,5):\n";
cout << result6;
cout << "\n------------------\n";

/*
string result7 = "";
result7 = checkerboard3x3(16,11);
cout << "checkerboard3x3(16,11):\n";
cout << result7;
cout << "\n------------------\n";
}
*/
}