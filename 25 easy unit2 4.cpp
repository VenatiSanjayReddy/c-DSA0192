#include <iostream>
using namespace std;

float calculateSimpleInterest(float principal, float rateOfInterest, float time) {
    return (principal * rateOfInterest * time) / 100;
}

float calculateSimpleInterestSeniorCitizen(float principal, float time) {
    return calculateSimpleInterest(principal, 12.0, time);
}

float calculateSimpleInterestRegular(float principal, float time) {
    return calculateSimpleInterest(principal, 10.0, time);
}

int main() {
    float principal, time;
    char customerType;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time period (in years): ";
    cin >> time;

    cout << "Enter customer type (S for senior citizen, any other key for regular customer): ";
    cin >> customerType;

    float interest;

    if (customerType == 'S' || customerType == 's') {
        interest = calculateSimpleInterestSeniorCitizen(principal, time);
        cout << "Simple interest for senior citizen: " << interest << endl;
    } else {
        interest = calculateSimpleInterestRegular(principal, time);
        cout << "Simple interest for regular customer: " << interest << endl;
    }

    return 0;
}

