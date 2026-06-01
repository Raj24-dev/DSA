#include <iostream>
#include <unistd.h> // for usleep()
using namespace std;

// Rainbow color codes
string colors[] = {
    "\033[1;31m", // Red
    "\033[1;33m", // Yellow
    "\033[1;32m", // Green
    "\033[1;36m", // Cyan
    "\033[1;34m", // Blue
    "\033[1;35m"  // Magenta
};

void pattern7(int n){
    // Countdown
    for (int k = 3; k >= 1; k--) {
        cout << "Starting in " << k << "...\n";
        sleep(1);
    }

    cout << "\033[2J\033[1;1H"; // Clear screen

    int totalXP = 0;
    for(int i = 1; i <= n; i++){
        cout << "\033[2J\033[1;1H"; // Clear screen per frame

        // Left spaces
        for(int j = 1; j < i; j++){
            cout << " ";
            usleep(30000);
        }

        // Stars with rainbow colors
        int stars = 2*(n - i) + 1;
        for(int j = 0; j < stars; j++){
            string color = colors[j % 6]; // Cycle through rainbow
            cout << color << "*" << "\033[0m";
            usleep(30000);
        }
        totalXP += stars;

        // Right spaces
        for(int j = 1; j < i; j++){
            cout << " ";
            usleep(30000);
        }

        // XP tracker
        cout << "  [XP: " << totalXP << "]" << endl;
        usleep(300000); // Pause before next row
    }

    // Final pause
    cout << "\nTotal XP earned: " << totalXP << " 🎉\n";
    sleep(2);
}

int main (){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++ ){
        int n;
        cin >> n;
        pattern7(n);
    }
    return 0;
}