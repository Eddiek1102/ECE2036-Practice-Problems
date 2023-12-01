//heartRates.cpp

#include <bits/stdc++.h>

class HeartRates{
    private: 
        std::string firstName, lastName; 
        int birthMonth, birthDay, birthYear; 
    
    public: 
        HeartRates(std::string firstName, std::string lastName, int birthMonth, int birthDay, int birthYear){
            this -> firstName = firstName; 
            this -> lastName = lastName; 
            this -> birthMonth = birthMonth; 
            this -> birthDay = birthDay; 
            this -> birthYear = birthYear; 
        }
        HeartRates(){
            firstName = "None"; 
            lastName = "None"; 
            birthMonth = 0; 
            birthDay = 0; 
            birthYear = 0; 
        }
        void setFirstName(std::string first){
            firstName = first; 
        }
        std::string getFirstName(){
            return firstName; 
        }
        void setLastName(std::string last){
            lastName = last; 
        }
        std::string getLastName(){
            return lastName; 
        }
        void setBirthMonth(int month){
            birthMonth = month; 
        }
        int getBirthMonth(){
            return birthMonth; 
        }
        void setBirthDay(int day){
            birthDay = day; 
        }
        int getBirthDay(){
            return birthDay; 
        }
        void setBirthYear(int year){
            birthYear = year; 
        }
        int getBirthYear(){
            return birthYear; 
        }
        
        int calculateAge(int day, int month, int year){
            //current date: day = 30, month = 11, year = 2023
            int age = (2023 - birthYear); 
            if (month > birthMonth){
                age += 1;
            }
            else if (month == birthMonth && day >= birthDay){
                age += 1; 
            }
            return age; 
        }
        void calculateHeartRate(int age){
            int low = (220 - age) * 0.5; 
            int high = (220 - age) * 0.8; 

            std::cout << firstName << " " << lastName << "'s ideal heart rate range is between " << low << " and " << high << std::endl;  
        }
}; 

int main(){
    HeartRates patient = HeartRates("John", "Doe", 11, 2, 2002); 
    int age = patient.calculateAge(patient.getBirthMonth(), patient.getBirthDay(), patient.getBirthYear());  
    
    std::cout << "Patient Info:     " << std::endl; 
    std::cout << "Name:             " << patient.getFirstName() << " " << patient.getLastName() << std::endl; 
    std::cout << "DOB:              " << patient.getBirthMonth() << "/" << patient.getBirthDay() << "/" << patient.getBirthYear() << std::endl; 
    std::cout << "Age:              " << age << std::endl; 
    patient.calculateHeartRate(age); 

    return 0; 
}
