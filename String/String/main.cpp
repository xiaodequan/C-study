//
//  main.cpp
//  String
//
//  Created by lwl on 2021/11/8.
//

#include <iostream>
#include <string.h>

int main(int argc, const char * argv[]) {
    std::string str;
    str = "www";
    printf("%p\n",str.c_str());
    
    str = str + ".freecplus";
    printf("%p\n",str.c_str());
    
    str = "freecplus";
    printf("%p\n",str.c_str());
    
    str = "www.freecplus.net";
    printf("%p\n",str.c_str());
    return 0;
}
