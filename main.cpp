#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Are you single or married? " << endl;
    string maritalStatus;
    cin >> maritalStatus;
    double taxOne, taxTwo, income;
    ////////////////////////
    ////////////////////////
    if (maritalStatus == "single") {
        cout << "what is your income? ";
        cin >> income;
        if (income <= 32'000) {
            taxOne = 0.1 * income;
            cout << "Based on the 10% tax rate, you will be deducted " << taxOne << " from " << income;
        } else {
            taxTwo = 0.25 * (income - 32'000);
            cout << "Based on the 25% tax rate, you will be deducted " << taxTwo << " from " << income;
        }
    ////////////////////////
    ////////////////////////
    } else if (maritalStatus == "married") { //starts  married branch
        cout << "what is your income? ";
        cin >> income;
        if (income <= 64'000) {
            taxOne = 0.1 * income;
            cout << "Based on the 10% tax rate, you will be deducted " << taxOne << " from " << income;
        } else {
            taxTwo = 0.25 * (income - 64'000);
            cout << "Based on the 25% tax rate, you will be deducted " << taxTwo << " from " << income;
        }
    ////////////////////////
    ////////////////////////
    } else { //if the user does not type in single or married this runs.
        cout << "ERROR: please enter married or single.";
    } //closes overarching if statement
    return 0;
} //closes main function
