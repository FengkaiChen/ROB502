#include <iostream>

int main() {
    // --- Your code here
    int difference;
    int sum=0;
    int SquareOfSum,SumOfSquare=0;
    for(int i=1;i<101;i++){
        SumOfSquare+=i*i;
        sum+=i;
    }
    SquareOfSum=sum*sum;
    difference=SquareOfSum-SumOfSquare;



    // ---
    std::cout << difference << std::endl;
    return 0;
}