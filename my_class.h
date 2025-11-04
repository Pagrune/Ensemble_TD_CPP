#ifndef MyClass_H
#define MyClass_H


#include <iostream>
#include <string>


class my_class
    {
    private:
        std::string _string;
    public:
        my_class();
        my_class(std::string str);
        ~my_class();
        
        void print_my_element(std::string _string);
    
    };



#endif 