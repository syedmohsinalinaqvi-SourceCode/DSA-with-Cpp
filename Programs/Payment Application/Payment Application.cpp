#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int code;
    double qty;
    int currencyChoice;

    const double PRICE_HANDI = 1800;
    const double PRICE_KARAHI = 2000;
    const double PRICE_TIKKA = 2200;
    const double PRICE_HALEEM = 500;
    const double PRICE_CREAMY = 2500;

    const double USD_RATE = 278.0;
    const double EUR_RATE = 290.0;

    double mealPrice = 0;
    string dishName;

    cout << "===== RESTAURANT MENU =====" << endl;
    cout << "Code | Meal              | Per kg Price (PKR)" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "1    | Chicken Handi     | 1800" << endl;
    cout << "2    | Chicken Karahi    | 2000" << endl;
    cout << "3    | Chicken Tikka     | 2200" << endl;
    cout << "4    | Chicken Haleem    | 500" << endl;
    cout << "5    | Creamy Chicken    | 2500" << endl;
    cout << "===========================================" << endl;

    cout << "Enter dish code (1-5): ";
    cin >> code;

    if (code < 1 || code > 5) {
        cout << "Error: Invalid dish code!" << endl;
        return 1;
    }

    switch (code) {
    case 1: mealPrice = PRICE_HANDI; dishName = "Chicken Handi"; break;
    case 2: mealPrice = PRICE_KARAHI; dishName = "Chicken Karahi"; break;
    case 3: mealPrice = PRICE_TIKKA; dishName = "Chicken Tikka"; break;
    case 4: mealPrice = PRICE_HALEEM; dishName = "Chicken Haleem"; break;
    case 5: mealPrice = PRICE_CREAMY; dishName = "Creamy Chicken"; break;
    }

    cout << "Enter quantity (kg): ";
    cin >> qty;

    if (qty <= 0) {
        cout << "Error: Quantity must be greater than 0!" << endl;
        return 1;
    }

    double totalMealPrice = mealPrice * qty;

    cout << "\nSelect Currency:" << endl;
    cout << "1. Pakistani Rupee (PKR)" << endl;
    cout << "2. Euro (EUR)" << endl;
    cout << "3. Dollar (USD)" << endl;
    cout << "Enter choice (1-3): ";
    cin >> currencyChoice;

    if (currencyChoice < 1 || currencyChoice > 3) {
        cout << "Error: Invalid currency selection!" << endl;
        return 1;
    }

    double salesTax = 0;
    if (totalMealPrice <= 1000) {
        salesTax = 0;
    }
    else if (totalMealPrice > 1000 && totalMealPrice <= 3000) {
        salesTax = totalMealPrice * 0.02;
    }
    else {
        salesTax = totalMealPrice * 0.05;
    }

    double totalAmount = totalMealPrice + salesTax;

    cout << fixed << setprecision(2);
    cout << "\n========== BILL ==========" << endl;
    cout << "Dish: " << dishName << endl;
    cout << "Quantity: " << qty << " kg" << endl;

    if (currencyChoice == 1) {
        cout << "Meal Price: PKR " << totalMealPrice << endl;
        cout << "Sales Tax: PKR " << salesTax << endl;
        cout << "Total Amount: PKR " << totalAmount << endl;
    }
    else if (currencyChoice == 2) {
        cout << "Meal Price: EUR " << (totalMealPrice / EUR_RATE) << endl;
        cout << "Sales Tax: EUR " << (salesTax / EUR_RATE) << endl;
        cout << "Total Amount: EUR " << (totalAmount / EUR_RATE) << endl;
    }
    else {
        cout << "Meal Price: USD " << (totalMealPrice / USD_RATE) << endl;
        cout << "Sales Tax: USD " << (salesTax / USD_RATE) << endl;
        cout << "Total Amount: USD " << (totalAmount / USD_RATE) << endl;
    }
    cout << "==========================" << endl;

    return 0;
}
