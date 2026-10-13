// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

int add(int x, int y){
    return x + y;
}

int main(){
    int x;
    int y;

    std::cout << "Enter number x: ";
    std::cin >> x;

    std::cout << "Enter number y: ";
    std::cin >> y;

    int result = add(x, y);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
