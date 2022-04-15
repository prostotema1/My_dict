 #include<iostream>
#include"my_dict.hpp"
#include "exception.hpp"
#include <string>

using std :: string;
using std :: cout;

int main() {
    try{
        my_dict<int,string> dict;
        dict.set(0,"Zero");
        dict.set(1,"One");
        dict.set(2,"Two");
        cout << dict.is_set(0) << " " << dict.get(0) << std :: endl;
        cout << dict.is_set(1) << " " << dict.get(1) << std :: endl;
        cout << dict.is_set(3) << " " << dict.get(3) << std :: endl;
    }
    catch(KeyNotFoundException <int> & ex){
        std :: cerr << ex.what() << std :: endl << ex.GetKey();
    }
    return 0;
}