#include "foo.h"
#include <iostream>
#include <functional>

int main ( int argc, char *argv[] ){
    char *a = argv[1];
    int x = std::atoi(a);

    char *b = argv[2];
    int y = std::atoi(b);
    
    std::cout<<"a :"<<a <<"   "<<x <<"\n";
    std::cout<<"b :"<<b <<"   "<<y <<"\n";

 
    [out = std::ref(std::cout << "Result from C code: " << add(x,y))](){
    out.get() << ".\n";
    }();
    return 0;
}