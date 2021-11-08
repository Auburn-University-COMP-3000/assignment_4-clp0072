#include <iostream>

using namespace std;

class Temperature {
	private:
		double degreesKelvin,
		       degreesFahrenheit,
		       degreesCelsius;
	public:
		void setTempKelvin(double dk) {degreesKelvin = dk;}
		double getTempKelvin() {return degreesKelvin;}
		void setTempCelsius() {degreesCelsius  = degreesKelvin - 273.15;}
		double getTempCelsius() {return degreesCelsius;} 
		void setTempFahrenheit() {degreesFahrenheit = (getTempCelsius()/(5.0/9))+32;}
		double getTempFahrenheit() {return degreesFahrenheit;}
};

int main() {
	double dk;
	Temperature temp;

	cout << "Enter a temperautre in degrees Kelvin: ";
	cin >> dk;

	temp.setTempKelvin(dk);
	temp.setTempCelsius();
	temp.setTempFahrenheit();

	cout << "Temperature in Celsius = " << temp.getTempCelsius() << endl;
	cout << "Temperature in Fahrenheit = " << temp.getTempFahrenheit() << endl;

}
