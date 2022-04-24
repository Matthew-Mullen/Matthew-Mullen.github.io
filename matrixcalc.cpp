#include <iostream>
#include <vector>
#include <string>


int main(){
    std::string str = "Hello World!";
    str[str.size()-1]='?';
    std::cout<<str<<std::endl;
    
}