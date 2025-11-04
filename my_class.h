#ifndef MyClass_H
#define MyClass_H


#include <iostream>
#include <string>


class my_class
    {
    private:
        std::string _str;
    public:
        my_class();
        my_class(std::string& _str);

        void print_my_element(std::string& _str);
    
    };



#endif 