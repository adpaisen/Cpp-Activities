# Digital Clock

A simple C++ console-based digital clock that displays the current system time and updates every second.

## Concepts Practiced

- #include <iostream> → Allows the program to use input and output features.
- #include <iomanip> → Provides formatting tools for displaying time values with leading zeros.
- #include <ctime> → Provides functions for retrieving and working with system time.
- #include <thread> → Allows the program to pause execution using threads.
- #include <chrono> → Provides time duration utilities for creating delays.
- using namespace std; → Lets you use cout and other standard functions without writing std::.
- time_t → Stores the current system time.
- localtime() → Converts system time into local date and time values.
- while loop → Keeps the clock running continuously.
- setfill() and setw() → Formats the clock display with two-digit numbers.
- this_thread::sleep_for() → Pauses the program for one second before updating the time.
- return 0; → Ends the program successfully.

## Features

- Real-time clock display
- Automatic time updates every second
- 24-hour time format
- Console-based interface
- Simple and lightweight application

## Technologies Used

- C++
- Standard Input/Output Library
- Time Library
- Thread Library
- Chrono Library
