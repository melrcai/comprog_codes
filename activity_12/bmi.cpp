#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

void conversion(double &pounds, double &feet, double &inches, double &BMI);

int main() {

    double pounds;
    double feet;
    double inches;
    double BMI;
    char choice;
    
    while (true) {

    cout << "\n====== BODY MASS INDEX (BMI) CALCULATOR ======" << endl;
    cout << "\nEnter your weight (in pounds): ";
    cin >> pounds; cout << endl;
    cout << "Enter your height (in feet) followed"
    << "\nBy a space then additional inches: ";
    cin >> feet >> inches;  cout << endl;

    conversion(pounds, feet, inches, BMI);

    cout << "\nProcess another (Y/N): ";
    cin >> choice; cout << endl;

    if (choice == 'N' || choice == 'n') {
        cout << "Thank you." << endl;
        cout << "Prepared by: Marcaida, Melissa" << endl;
        break;
    }
 }

    return 0;
}


void conversion(double &pounds, double &feet, double &inches, double &BMI) {

  double massInKilo;
  double heightInMeters;
  // lbs to kilo 
  massInKilo = pounds / 2.2;

  // ft & in to m 
  heightInMeters = ((feet * 12) + inches) * 0.0254;

  // formula to get BMI
  BMI = massInKilo / (heightInMeters * heightInMeters);
  cout << "Your BMI: " << fixed << setprecision(2) << BMI << endl; 
  cout << "(In decimal): " << fixed << setprecision(6) << BMI << endl;

  // health risk translation
  cout << "Your risk category: ";

  if (BMI < 18.5) {
    cout << "Underweight";
  } else if (BMI >= 18.5 && BMI < 25) {
    cout << "Normal weight";
  } else if (BMI >= 25 && BMI < 30) {
    cout << "Overweight";
  } else {
    cout << "Obese";
  } 

  cout << endl;
}



/*
mass is in kilo // lbs to kilo (1kg is 2.2 lbs)
height is in meters // feet & inches to meters // 
product of feet and inches multiplied by 
0.0254 to convert to meters


underweigt < 18.5
normal weight < 25
overweight < 30
obese >= 30
*/