// StudentID_AMS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_students = 10;
const int max_lectures = 6;

// yha pr global arrays bnaye ge

string nameofstudents[max_students];
string rollnumber[max_students];
int att[max_students][max_lectures];
int totalStudents = 0;

// y function  students ke details store krne k liye h
void inputstudentdata() {
    cout << "kitne student hn ? / totla students ?" << endl;
    cin >> totalStudents;
    for (int i = 0; i < totalStudents; i++) {
        cout << "Student " << i + 1 << " ka Roll Number: ";
        cin >> rollnumber[i];

        cout << "Student " << i + 1 << " ka Naam: ";
        cin >> nameofstudents[i];
    }
}

// y function attendance mark krne k liye h
    void markAttendance() {
        for (int i = 0; i < totalStudents; i++) {
            for (int j = 0; j < max_lectures; j++) {

                cout << nameofstudents[i] << " - Lecture " << j + 1 << " - 1=Present, 0=Absent: ";
                cin >> att[i][j];
            }
        }
    }

    // y function percentage calculation k lye h
    float calculatePercentage(int studentIndex) {
        int plc = 0;

        for (int j = 0; j < max_lectures; j++) {
            if (att[studentIndex][j] == 1) {
                plc++;
            }
        }

        float perc = (plc / (float)max_lectures) * 100;
        return perc;
    }

	// bachu k status check krne k liye h
    string getStatus(float perc) {
        if (perc >= 90) {
            return "EXCELLENT";

        }
        else if (perc >= 75) {
			return "SATISFACTORY";
        }
        else if (perc >= 60) {
            return "LOW";
        }
        else {
            return "SHORTAGE";
		}
    }
    // sheet print function
    void displayAttendanceSheet() {
        // pehle heading print krnge
        cout << "Roll No. | Name | L1 | L2 | L3 | L4 | L5 | L6 | Total | % | Status" << endl;

        for (int i = 0; i < totalStudents; i++) {
            cout << rollnumber[i] << " | " << nameofstudents[i] << " | ";

            for (int j = 0; j < max_lectures; j++) {
                if (att[i][j] == 1) {
                    cout << "P | ";
                }
                else {
                    cout << "A | ";
                }
            }
            float perc = calculatePercentage(i);
            cout << perc << "% | " << getStatus(perc) << endl;
        }
    }

    // search student detailed function
    void searchStudent() {
        string searchRoll;
        
        cout << "Roll Number enter karo: ";
        cin >> searchRoll;

		bool found = false;  // yha pr found variable use kr rhe h search k lye bool yes or no k lye h 0 and 1 jese
        for (int i = 0; i < totalStudents; i++) {
            float perc = calculatePercentage(i);
            if (rollnumber[i] == searchRoll) {
                cout << "Student Found:" << endl;
                cout << "Name: " << nameofstudents[i] << endl;
                cout << "Roll No: " << rollnumber[i] << endl;
                cout << "Percentage: " << perc << "%" << endl;
                cout << "Status: " << getStatus(perc) << endl;
            }
        }
        if (found == false) {
            cout << "Student nahi mila!" << endl;
        }
    }
	// shortage students count krne k lye h
    void countShortage() {
        int count = 0;

        for (int i = 0; i < totalStudents; i++) {
            if (calculatePercentage(i) < 75) {
                count++;
            }
        }

        cout << "Shortage students: " << count << endl;
    }



    int main() {
        int choice;
        // menu show krne k lye h
        do {
            cout << "\n=== AMS MENU ===" << endl;
            cout << "1. Student Data Enter Karo" << endl;
            cout << "2. Attendance Mark Karo" << endl;
            cout << "3. Attendance Sheet Dekho" << endl;
            cout << "4. Student Dhundo" << endl;
            cout << "5. Shortage Count Karo" << endl;
            cout << "0. Exit" << endl;
            cout << "Choice: ";
            cin >> choice;

            switch (choice) {
            case 1: inputstudentdata(); break;
            case 2: markAttendance(); break;
            case 3: displayAttendanceSheet(); break;
            case 4: searchStudent(); break;
            case 5: countShortage(); break;
            case 0: cout << "Bye!" << endl; break;
            default: cout << "Galat choice!" << endl;
            }

        } while (choice != 0);

        return 0;
    }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
