#include <iostream>
#include <string>
#include <sstream>



std::string string_it(int n){
    std::string new_string = std::to_string(n);
    return new_string;   
}

int sum_of_digits(int num) {
    int sum = 0;
    int digit = 0;
    
    while (num) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    return sum;
    
}



bool isLucky(int n) {
    std::string x = string_it(n);
    std::string first_half;
    std::string second_half;
    
    for (int i = 0; i < x.length()/2; i++) {
        first_half.push_back(x[i]);
    }
    
    for (int i = x.length()/2; i < x.length(); i++) {
        second_half.push_back(x[i]);
    }
    
    int first_half_int = std::stoi(first_half);
    int second_half_int = std::stoi(second_half);
    
    if (sum_of_digits(first_half_int) == sum_of_digits(second_half_int)) {
        return true;
    }
    
    return false;
    
}
