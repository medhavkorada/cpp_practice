#include <iostream>
#include <string>

using namespace std;

int main(){
    string airline_name, miles, airline_class; 
    
    std::cin >> airline_name >> miles >> airline_class ;
    std::cout << "airline_name: " << airline_name << endl;
    std::cout << "miles: " << miles << endl;
    std::cout << "airline_class: " << airline_class << endl;

    int miles_int = stoi(miles);

    return 0;
}

// This file is there to calculte airline ticket prices
// Things to read
// Git: 
// git add
// git commit 
// git push
// git log 