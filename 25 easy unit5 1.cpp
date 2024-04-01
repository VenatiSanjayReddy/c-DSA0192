#include <iostream>
using namespace std;

class Person {
protected:
    float salary;

public:
    void getData() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "Salary: " << salary << endl;
    }
};

class Admin : public Person {
public:
    float bonus() {
        return salary * 1.1; 
    }
};

class Account : public Person {
public:
    float bonus() {
        return salary * 1.1;
    }
};

class Master : public Admin, public Account {
public:
    void calculateBonus() {
        Admin::getData();
        float bonusAmount = Account::bonus(); 
        cout << "Bonus = " << bonusAmount << endl;
    }
};

int main() {
    Master masterObj;
    masterObj.calculateBonus();
    return 0;
}

