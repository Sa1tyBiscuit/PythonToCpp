// classical beginning to a hello world program but in cpp 
// python equivalent of print("hello world")

//import the standard library from cpp 

// to run the file 
/*  
g++ -o helloworld Day1_hello.cpp
compile -o <output_filename> <filename>.cpp
*/

//import from c++ standard library

#include <iostream>

int main()
{
    std::cout << "turn right in the corridor |^|! \n"; // << is the output operator
    std::cout << "up the stairs _- \n";
    std::cout << "it will be on your left <- \n";
    std::cout << "Here we go again! \n";
    return 0; // semicolons tell the compiler where statements begin/end
}

