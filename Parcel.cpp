#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float length, width, height;

	cout << "Welcome to the post office" << endl << "-------------" << endl;
	cout << "Please enter the specifications of your parcel below" << endl;
	cout << "Lenght : ";
	cin >> length;
	cout << "Width : ";
	cin >> width;
	cout << "Height : ";
	cin >> height;

	
	if (length > 353 || width > 250 || height > 30) {
		cout << "Pelase note your parcel will be more then R6.25";

	}
	else if (length > 250 && length < 354 || width > 176 && width < 251 || height > 10 && height < 31) {
		cout << "Please note your parcel will be R6.25";
	}
	else if (length > 235 && length < 251 || width > 120 && width < 177 || height > 5 && height < 11) {
		cout << "Please note your parcel will be R5";
	} else if (length < 236 || width < 121 || height < 6) {
		cout << "Please note your parcel will be R2.50";
	}
	
	return 0;

}
