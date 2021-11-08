#include <iostream>
#include <iomanip>

using namespace std;

class GasPump {
	private:
		double amountDispensed,
		       amountCharged,
		       costPerGallon;

	public:
		double getAmountDispensed() { return amountDispensed; }
		double getAmountCharged() { return amountCharged; }
		double getCostPerGallon() { return costPerGallon; }
		void setCostPerGallon(double cpg) { costPerGallon = cpg; }
        
		void dispense(int seconds) {

			amountDispensed = 0.10 * seconds;			
			amountCharged = amountDispensed * costPerGallon;
		}
		void reset() {
            
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}		
};
	
int main() {
	
    //Define variables

	double cpg = 0.0;
	double seconds = 0.0;

    //Define Class Object

	GasPump pump;
	
	cout << "Enter the cost of gas per gallon: ";
	cin >> cpg;
	cout << "Enter the number of seconds you want to pump gas: ";
	cin >> seconds;

    //Call Functions

	pump.setCostPerGallon(cpg);
	pump.dispense(seconds);
	cout << "\nThe number of gallons of gas pumped is " << pump.getAmountDispensed() << endl;
	cout << "The cost per gallon of gas is $" << pump.getCostPerGallon() << endl;
	cout << "The total cost of gas is $" << pump.getAmountCharged() << endl;
	

	return 0;
}
