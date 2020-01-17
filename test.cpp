#include"functor.h"
#include<iostream>

int main() {
    mrr::vector<int> vec, result;
    
    for(int i = 0; i < 5; i++) {
        vec.push_back(i + 1);
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << "map test: ";

    result = vec.map($(x){ return x * 2; }).map($(x){ return x * 2; });

    for(auto i : result) {
        std:: cout << i << " ";
    }
    std::cout << std::endl << "reduce test : ";
    std::cout << vec.reduce<int>(1, $(v, x){ return v * x; }) << std::endl;

    return 0;
}