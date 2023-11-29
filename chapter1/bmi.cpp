//BMI.cpp
#include <iostream> 

int main(){
    float weightPounds, heightInches; 

    std::cout << "Weight in pounds: "; 
    std::cin >> weightPounds; 
    std::cout << "Height in Inches: "; 
    std::cin >> heightInches;  

    float bmi = (weightPounds * 703) / (heightInches * heightInches); 

    std::cout << "BMI Statistics \n"; 
    std::cout << "Underweight: Less than 18.5" << std::endl; 
    std::cout << "Normal:      Between 18.5 and 24.9" << std::endl; 
    std::cout << "Overweight:  Between 25 and 29.9" << std::endl;
    std::cout << "Obese:       30 or greater" << std::endl; 

    if (bmi < 18.5){
        std::cout << "Your BMI is: " << bmi << std::endl; 
        std::cout << "You are underweight" << std::endl; 
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        std::cout << "Your BMI is: " << bmi << std::endl; 
        std::cout << "You are normal" << std::endl; 
    }
    else if (bmi >= 25 && bmi <= 29.9){
        std::cout << "Your BMI is: " << bmi << std::endl; 
        std::cout << "You are overweight" << std::endl; 
    }
    else{
        std::cout << "Your BMI is: " << bmi << std::endl; 
        std::cout << "You are obese" << std::endl; 
    }

    return 0; 
}
