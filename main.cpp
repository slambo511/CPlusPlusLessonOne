#include <iostream>                             // Import the basic input/output stream library
                                                // Whitespace is ignore by the compiler, so use it to structure your code in a readable manner
using namespace std;                            // Tells the compiler we are using the namespace std, see line 8

int main()                                     // All C++ programs need an entry point, main() is it, void means it returns nothing
{                                               // Start of main()
    std::cout << "How to print to the console"; // cout outputs text to the console. The angle brackets denote the direction of the things, in this case a string toward cout
                                                // The std:: point the compiler toward the namespace in which cout resides, here it is the std namespace
                                                // A namespace is a way of grouping functions and allowing name reuse. So I could create a namespace called sam and a method called cout
                                                // and reference it using sam::cout. Because we have used the using namespace std; declaration at the start of the code, this is not
                                                // necessary but is left in here to explain namespaces and using statements in c++
    double d;                                   // declaring a variable (a double precision floating point number)
    d = 3.151592654;                            // initialising d with a value, 3.141592654
    int i = 12;                                 // a c++ integer variable holding 12, declared and initialised on the same line
    string s = "Hello";                         // a c++ string holding Hello
    cout << endl << "double: " << d;            // the next three lines move to a new line (endl) and output the double, integer and string we just created to the console
    cout << endl << "integer: " << i;
    cout << endl << "string: " << s;
}                                                // End of main()