#include <iostream>
#include <string>

int main() {
    // you'll need to store the answer in a variable named 'sum'
    // --- Your code here
    
    int first=1;
    int second=2;
    int sum=3;
    while (second<4000000){
        int temp=first+second;
        first=second;
        second=temp;
        if(second%2==0) sum+=second;
    }



    // ---
    std::cout << sum << std::endl;
    return 0;
}