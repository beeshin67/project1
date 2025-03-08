// created by bradley thor
// 8 March 2025

// This program converts a given value in meters to different amusing units (football field, furlong, cubit).

#include <iostream>
#include <iomanip> // allows setprecision to control the number of decimals

using namespace std;

int main(){
    double value = 0; // variable to store the user's input value
    double FOOTBALL_FIELD = 100.0;
    double FURLONG = 220;
    double CUBIT = 0.445;

    // Prompt user for input in meters
    cout << "Enter the value in meters: ";
    cin >> value;

    // Convert meters to football fields, furlongs, and cubits
    FOOTBALL_FIELD = value / FOOTBALL_FIELD;
    FURLONG = value / FURLONG;
    CUBIT = value / CUBIT;

    // Conversion output compared to the three different conversion units
    cout << "Distance in meters: " << value << "\n";
    cout << "Which is about " << FOOTBALL_FIELD << " football fields" << "\n";
    cout << "Which is also " << fixed << setprecision(2) << FURLONG << " furlongs" << "\n";
    cout << "Which is " << fixed << setprecision(2) << CUBIT << " cubits";
}