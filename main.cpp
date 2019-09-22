#include <iostream>
#include <cmath>

// cannot handle n>(2^64) 18,446,744,073,709,551,615
unsigned long long iterLog(unsigned long long n){
    if(n<=1){
        return 0;
    } else{
        return 1+iterLog(log(n)/log(2));
    }
}

//long long unsigned factorial(long long unsigned n){
//    if(n==1){
//        return 1;
//    }
//    return n*factorial(n-1);
//}
//
//long long unsigned globalN = 169;

int main() {
    std::cout << iterLog(18446744073709551615) << std::endl;
    //std::cout << log(factorial(globalN))/log(2) << std::endl;

    return 0;
}