#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void insertData(double weight[], double height[], int n){
    for (int i=0; i<n; i++){
        cout << "Enter person " << i+1 << "'s weight in kilograms: ";
        cin >> weight[i];
        cout << "Enter person " << i+1 << "'s height in meters: ";
        cin >> height[i];
        cout << endl;
    }
}

void calculateBMIs(double weight[], double height[], double bmi[], int n){
    for (int i=0; i<n; i++){
        bmi[i] = (weight[i]/(height[i] * height[i]));
    }
}

void displayData(double bmi[], int n){
    for (int i=0; i<n; i++){
        cout << "Person " << i+1 << "'s BMI: ";
        cout << setprecision (2) << fixed << bmi[i] << " ";
        if (bmi[i] < 18.5){
            cout << " Their BMI value is underweight. " << endl;
        } else if (bmi[i] >= 18.5 && bmi[i] < 25){
            cout << " Their BMI value is normal."  << endl;
        } else if (bmi[i] >= 25 && bmi[i] < 30){
            cout << " Their BMI value is overweight."  << endl;
        } else {
            cout << " Their BMI value is obese."  << endl;
        }
    }
}

void sort(double arr[], int x){
    for (int i = 0; i < x-1; i++){
        for (int j=0; j < x -1 -i; j++){
            if (arr[j] , arr[i+1]){
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void displayMinMax(double arr[], int n){
    cout << "The biggest BMI: " << arr[n-1] << endl;
    cout << "The smallest BMI: " << arr[0] << endl;
    cout << endl;
}


int main() {
    int n;
    string x;
    cout << "Welcome to groupName's BMI Calculator. \n \n \n";
    
    cout << "(The measurements used in this calculator are kilograms for the weight and meters for the height. Please refrain from using US measurements.)\n \n";
    
    cout << "To get started, please input the amount of people you want to count the BMI of. \n";
    
    cout << "The amount of people: ";
    cin >> n;
    
    double weight[n];
    double height[n]; 
    double bmi[n];
    
    insertData(weight, height, n);
    calculateBMIs(weight, height, bmi, n);
    displayData(bmi, n);
    
    cout << "Would you like to find out the biggest and smallest BMI?";
    cin >> x;
    
    if (x == "yes" || x == "Yes") {
        sort(bmi, n);
        displayMinMax(bmi, n);
        cout << "Thank you for using groupName's BMI Calculator. Have a nice day!" << endl;
    } else {
        cout << "Thank you for using groupName's BMI Calculator. Have a nice day!" << endl;
    }

return 0;
}