//digits.cpp 
//only use integer division and remainder operations 

#include <iostream> 

int main(){
    int number; 
    int arr[5]; 
    
    std::cout << "Enter a 5-digit number: "; 
    std::cin >> number; 

    for (int i = 0; i < 5; i++){
        arr[i] = number % 10; 
        number = number / 10; 
    }

    for (int j = sizeof(arr)/sizeof(arr[0]) - 1; j >= 0; j--){
        std::cout << arr[j] << "   "; 
    }

    return 0; 
}

