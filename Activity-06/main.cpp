#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    while (true) {
        time_t currentTime = time(nullptr);
        tm* timeInfo = localtime(&currentTime);

        int hour = timeInfo->tm_hour;
        int minute = timeInfo->tm_min;
        int second = timeInfo->tm_sec;

        cout << "\r"
             << setfill('0')
             << setw(2) << hour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second;

        cout.flush();

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
