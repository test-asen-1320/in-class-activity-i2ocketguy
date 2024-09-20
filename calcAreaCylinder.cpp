#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	// Variable declaration
	float diameter_in;				// [in] input diameter of cylinder
	float radius_in, radius_ft;		// radius of cylinder in inch and feet
	float height_in, height_ft;		// height of cylinder in inch and feet
	float area_in, area_ft;			// area of cylinder in inch and feet
	
	// Prompt user for input diameter and height
	cout << "Enter the cylinder diameter [in]: ";
	cin >> diameter_in;
	
	cout << "Enter the cylinder height [in]: ";
	cin >> height_in;
	
	// Calculate and convert radius (inch and feet)
	radius_in = diameter_in / 2.0;
	radius_ft = radius_in / 12.0;
	
	// Convert height
	height_ft = height_in / 12.0;
	
	// Calculate the area of a right cylinder
	area_ft = (2 * M_PI * radius_ft * height_ft) + (2*M_PI*radius_ft*radius_ft); 
	area_in = (2 * M_PI * radius_in * height_in) + (2*M_PI*radius_in*radius_in); 
	
	// Display output to the console
	cout << "Radius = " << radius_ft << " [ft] or " << radius_in << " [in]" << endl;
	cout << "Height = " << height_ft << " [ft] or " << height_in << " [in]" << endl;
	cout << "Cylinder Area = " << area_ft << " [ft^2] or " << area_in << " [in^2]";
	
	return 0;
}