#include <iostream>

int euler9() {
    for(int b=0;b<1000;b++){
        for(int a=0;a<b;a++){
            int c=1000-a-b;
            if(a*a+b*b==c*c){
                return a*b*c;
            }
        }
    }
    return 0;



    // ---
}

int main() {
    // This code is a lot cleaner if you write it as a function, because you can use `return` once you find the answer
    int const product = euler9();
    std::cout << product << std::endl;
    return 0;
}