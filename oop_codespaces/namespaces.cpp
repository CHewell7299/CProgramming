#include <iostream>

namespace first {
        int a= 5;

        void print() {
            std::cout << "First" << std::endl;
        }
}

namespace second {
        int a= 5;

        void print() {
            std::cout << "Second" << std::endl;
        }
}

int main(){
    first::print;
    second::print;
    return 0;
}