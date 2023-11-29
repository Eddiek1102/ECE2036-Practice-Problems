//largestSmallestMagnitude.cpp 
#include <iostream> 

int largest(int a, int b, int c, int d, int e){
    if (a > b && a > c && a > d && a > e){
        return a; 
    }
    else if (b > a && b > c && b > d && b > e){
        return b; 
    }
    else if (c > a && c > b && c > d && c > e){
        return c; 
    }
    else if (d > a && d > b && d > c && d > e){
        return d; 
    }
    else if (e > a && e > b && e > c && e > d){
        return e; 
    }
    else{
        return -1; 
    }
}

int smallest(int a, int b, int c, int d, int e){
    if (a < b && a < c && a < d && a < e){
        return a; 
    }
    else if (b < a && b < c && b < d && b < e){
        return b; 
    }
    else if (c < a && c < b && c < d && c < e){
        return c; 
    }
    else if (d < a && d < b && d < c && d < e){
        return d; 
    }
    else if (e < a && e < b && e < c && e < d){
        return e; 
    }
    else{
        return -1; 
    }
}

int main(){

    int a, b, c, d, e; 
    
    std::cout << "Enter first number: "; 
    std::cin >> a; 
    if (a < 0){
        a *= -1; 
    }

    std::cout << "Enter second number: "; 
    std::cin >> b; 
    if (b < 0){
        b *= -1; 
    }

    std::cout << "Enter third number: "; 
    std::cin >> c; 
    if (c < 0){
        c *= -1; 
    }

    std::cout << "Enter fourth number: "; 
    std::cin >> d; 
    if (d < 0){
        d *= -1; 
    }

    std::cout << "Enter fifth number: "; 
    std::cin >> e; 
    if (e < 0){
        e *= -1; 
    }

    int largest_magnitude = largest(a, b, c, d, e); 
    int smallest_magnitude = smallest(a, b, c, d, e); 
    
    std::cout << "Largest Magnitude: " << largest_magnitude << std::endl; 
    std::cout << "Smallest Magnitude: " << smallest_magnitude << std::endl; 

    return 0; 
}
