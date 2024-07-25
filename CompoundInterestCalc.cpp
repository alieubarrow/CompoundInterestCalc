//Header files
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function prototypes 
void load();
void calculate();
void printResult();

//Constant variable
const double INTEREST = 3;

//Global variables
double initialAmount;
int years;
double capital;
char answer;

int main() {

        cout << "COMPOUD INTEREST" << endl;
        cout << "================" << endl;
        cout << endl;

        do {

                load(); //Function calls and loads user input
                calculate(); //Function calls and calculates user input
                printResult(); //Function calls and prints results 

                cout << "One more time (Y/N)? ";
                cin >> answer;
                cout << endl;

        } while (answer == 'y' || answer == 'Y');

        return 0;
}

//Load function takes user input 
void load() {

        cout << "Load initial amount: ";
        cin >> initialAmount;

        cout << "Load number of years: ";
        cin >> years;

        cout << endl;
}

//Calculate function
void calculate() {

        double interestRate = 1 + (INTEREST / 100); //Interest is calculated 
        capital = initialAmount * pow(interestRate, years);
}

//Print function 
void printResult() {

        cout << fixed << setprecision(2) << showpoint;
        cout << "The capital with 3 % interest rate and after 10 years will be: " << setw(12) << capital << " SEK" << endl;
        cout << endl;
}

