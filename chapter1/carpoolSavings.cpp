//carpoolSavings.cpp

#include <iostream> 

int main(){
    
    int numPeople, numTolls; 
    float milesDriven; 
    float costPerMile = 0.5; 
    int parkingFee = 3;
    float costPerToll = 1.2; 

    std::cout << "Number of people: "; 
    std::cin >> numPeople; 

    std::cout << "Number of tolls driven through: "; 
    std::cin >> numTolls; 

    std::cout << "Number of miles driven per person: "; 
    std::cin >> milesDriven; 

    float noCarpool = (milesDriven * costPerMile * numPeople) + (costPerToll * numTolls * numPeople) + (parkingFee * numPeople);
    float yesCarpool = (milesDriven * costPerMile) + (costPerToll * numTolls) + parkingFee; 

    float amountSaved = noCarpool - yesCarpool; 
    if (amountSaved < 0){
        amountSaved = amountSaved * -1; 
    }

    std::cout << "Cost without carpooling: " << noCarpool << std::endl; 
    std::cout << "Cost with carpooling:    " << yesCarpool << std::endl; 
    std::cout << "Amount saved:            " << amountSaved << std::endl;   

    return 0; 
}
