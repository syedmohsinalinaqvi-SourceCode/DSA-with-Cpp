#include <iostream>
#include <string>
using namespace std;

int main() {
    double groceryBudget, utilityBudget, entBudget, miscBudget;
    double groceryExp, utilityExp, entExp, miscExp;

    cout << "===== BUDGET PLANNING TOOL =====" << endl;
    cout << "Enter your budget for Groceries: $";
    cin >> groceryBudget;
    cout << "Enter your budget for Utilities: $";
    cin >> utilityBudget;
    cout << "Enter your budget for Entertainment: $";
    cin >> entBudget;
    cout << "Enter your budget for Miscellaneous: $";
    cin >> miscBudget;

    cout << "\n--- Enter Actual Expenses ---" << endl;
    cout << "Groceries: $";
    cin >> groceryExp;
    cout << "Utilities: $";
    cin >> utilityExp;
    cout << "Entertainment: $";
    cin >> entExp;
    cout << "Miscellaneous: $";
    cin >> miscExp;

    double totalBudget = groceryBudget + utilityBudget + entBudget + miscBudget;
    double totalExp = groceryExp + utilityExp + entExp + miscExp;

    cout << "\n===== BUDGET ANALYSIS =====" << endl;

    cout << "Groceries:" << endl;
    cout << "  Budget: $" << groceryBudget << " | Spent: $" << groceryExp;
    if (groceryExp <= groceryBudget) {
        cout << " | Status: WITHIN BUDGET" << endl;
    }
    else {
        cout << " | Status: OVERSPENDING" << endl;
    }

    cout << "Utilities:" << endl;
    cout << "  Budget: $" << utilityBudget << " | Spent: $" << utilityExp;
    if (utilityExp <= utilityBudget) {
        cout << " | Status: WITHIN BUDGET" << endl;
    }
    else {
        cout << " | Status: OVERSPENDING" << endl;
    }

    cout << "Entertainment:" << endl;
    cout << "  Budget: $" << entBudget << " | Spent: $" << entExp;
    if (entExp <= entBudget) {
        cout << " | Status: WITHIN BUDGET" << endl;
    }
    else {
        cout << " | Status: OVERSPENDING" << endl;
    }

    cout << "Miscellaneous:" << endl;
    cout << "  Budget: $" << miscBudget << " | Spent: $" << miscExp;
    if (miscExp <= miscBudget) {
        cout << " | Status: WITHIN BUDGET" << endl;
    }
    else {
        cout << " | Status: OVERSPENDING" << endl;
    }

    cout << "\n----- TOTAL SUMMARY -----" << endl;
    cout << "Total Budget: $" << totalBudget << endl;
    cout << "Total Expenses: $" << totalExp << endl;
    if (totalExp <= totalBudget) {
        cout << "Overall Status: WITHIN BUDGET" << endl;
    }
    else {
        cout << "Overall Status: OVERSPENDING" << endl;
    }

    return 0;
}
