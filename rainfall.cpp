#include <iostream>
#include <string>

using namespace std;

int main() {
    const int months = 12;
    string monthNames[months] = { "January", "February", "March", "April", "May", "June",
                                 "July", "August", "September", "October", "November", "December" };
    double rainfall[months];

    for (int i = 0; i < months; ++i) {
        cout << "Enter total rainfall for " << monthNames[i] << " (in inches): ";
        cin >> rainfall[i];
    }

    double totalRainfall = 0;
    for (int i = 0; i < months; ++i) {
        totalRainfall += rainfall[i];
    }

    double averageRainfall = totalRainfall / months;

    double maxRainfall = rainfall[0];
    double minRainfall = rainfall[0];
    string rainiestMonth = monthNames[0];
    string driestMonth = monthNames[0];

    for (int i = 1; i < months; ++i) {
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            rainiestMonth = monthNames[i];
        }
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            driestMonth = monthNames[i];
        }
    }

    cout << "\nTotal rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Rainiest month: " << rainiestMonth << endl;
    cout << "Driest month: " << driestMonth << endl;

    return 0;
}
