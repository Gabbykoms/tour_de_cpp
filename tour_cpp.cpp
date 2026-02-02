#include <iostream>

int main(){

    std::cout << "Hello world \n";
    std::cout << "Just thought I would dive more into a beautiful language after so much C using  A tour of C++ \n";
    
    //The basics

    //const: variables we are not gonna change
    const int dmv = 12;

    //constexpr: variables that we want to make sure get run at compile time
    constexpr double max = 1.4 * dmv;


    //pointers, arrays and references
    char version1[6];                   //array of characters 
    char *p;                            //a pointer to a character

    char *p1 = & version1[3];             //p1 points to the fourth element of version1

    char x = *p1;                           //the element that p1 points to

    //NOTE : *means content of and & means address of

    return 0;
}