#include <iostream>
using namespace std;

struct Person {
    int age;
};

void getPerson(Person &person) {
    cout << "Enter person's age: ";
    cin >> person.age;
}

void checkEligibility(const Person &person) {
    if (person.age >= 18) {
        cout << "The person is eligible to vote." << endl;
    } else {
        int yearsLeft = 18 - person.age;
        cout << "The person is not eligible to vote." << endl;
        cout << "Years left to be eligible: " << yearsLeft << endl;
    }
}

int main() {
    Person person;
    getPerson(person);
    checkEligibility(person);
    return 0;
}

