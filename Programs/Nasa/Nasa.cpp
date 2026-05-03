#include <iostream>
#include <string>
using namespace std;

int main() {
    int missionChoice;
    int astronauts, equipment;
    double fuel, food;

    cout << "===== NASA MISSION PLANNER =====" << endl;
    cout << "Select Mission:" << endl;
    cout << "1. Moon Exploration" << endl;
    cout << "2. Mars Exploration" << endl;
    cout << "3. Jupiter Exploration" << endl;
    cout << "Enter choice (1-3): ";
    cin >> missionChoice;

    if (missionChoice < 1 || missionChoice > 3) {
        cout << "Invalid mission selection!" << endl;
        return 1;
    }

    cout << "\nEnter number of astronauts: ";
    cin >> astronauts;
    cout << "Enter available fuel (liters): ";
    cin >> fuel;
    cout << "Enter food supplies (units): ";
    cin >> food;
    cout << "Enter equipment kits: ";
    cin >> equipment;

    double successProb = 0;
    bool feasible = false;

    if (missionChoice == 1) {
        cout << "\n--- MOON MISSION REQUIREMENTS ---" << endl;
        if (astronauts >= 3 && fuel >= 500 && food >= 100 && equipment >= 3) {
            feasible = true;
            successProb = (fuel / 500.0) * 20 + (food / 100.0) * 30 + (equipment / 3.0) * 50;
            cout << "Status: FEASIBLE" << endl;
        }
        else {
            cout << "Status: NOT FEASIBLE" << endl;
        }
    }
    else if (missionChoice == 2) {
        cout << "\n--- MARS MISSION REQUIREMENTS ---" << endl;
        if (astronauts >= 5 && fuel >= 1000 && food >= 300 && equipment >= 5) {
            feasible = true;
            successProb = (fuel / 1000.0) * 25 + (food / 300.0) * 40 + (equipment / 5.0) * 35;
            cout << "Status: FEASIBLE" << endl;
        }
        else {
            cout << "Status: NOT FEASIBLE" << endl;
        }
    }
    else {
        cout << "\n--- JUPITER MISSION REQUIREMENTS ---" << endl;
        if (astronauts >= 8 && fuel >= 3000 && food >= 800 && equipment >= 10) {
            feasible = true;
            successProb = (fuel / 3000.0) * 30 + (food / 800.0) * 40 + (equipment / 10.0) * 30;
            cout << "Status: FEASIBLE" << endl;
        }
        else {
            cout << "Status: NOT FEASIBLE" << endl;
        }
    }

    if (feasible) {
        if (successProb > 100) successProb = 100;
        cout << "Success Probability: " << successProb << "%" << endl;
    }

    return 0;
}
