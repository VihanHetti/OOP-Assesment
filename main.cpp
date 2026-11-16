#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

int main() {
    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    cout << "GitHub Sync Test" << endl;
    cout << "Version: 1.0" << endl;
    cout << "Current time: " << ctime(&currentTime);

    return 0;
}
