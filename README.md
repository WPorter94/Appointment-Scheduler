# Appointment-Scheduler

This scheduling application was developed by Will Porter and is designed to help users manage their appointments through a command-line interface.
The program supports three types of appointments: daily, monthly, and one-time appointments. Users can create, view, and manage appointments using various commands.

How to Use the Application

Compile and Run:

Compile the program using a C++ compiler (e.g., g++).
Execute the compiled program to start the application.
Available Commands:

d: Create a daily appointment.
m: Create a monthly appointment.
o: Create a one-time appointment.
c: Check appointments for a specific date.
s: Save appointments to a file.
l: Load appointments from a file.
q: Quit the application.
Creating Appointments:

For daily, monthly, and one-time appointments, you will be prompted to enter relevant details such as start and end times, dates (for one-time appointments), and descriptions.
Checking Appointments:

Use the c command to check appointments for a specific date. Enter the year, month, and day to view appointments for that date.
Saving and Loading:

Use the s command to save appointments to a file. Enter the filename to save the appointments.
Use the l command to load appointments from a file. Enter the filename to load the appointments.


Classes and Files Overview:

main.cpp
The entry point of the application.
Manages user input and interaction.
Appointment.h, Appointment.cpp
Contains the base class Appointment, representing a generic appointment.
Implements methods for printing, reading, saving, loading, and checking occurrences of appointments.
Daily.h, Daily.cpp
Inherits from Appointment.
Represents daily appointments.
Implements methods specific to daily appointments.
Monthly.h, Monthly.cpp
Inherits from Appointment.
Represents monthly appointments.
Implements methods specific to monthly appointments.
Onetime.h, Onetime.cpp
Inherits from Appointment.
Represents one-time appointments.
Implements methods specific to one-time appointments.
Time.h, Time.cpp
Represents time using hours, minutes, and seconds.
Provides methods for managing time, such as addition and comparison.
Date.h, Date.cpp
Represents dates with year, month, and day attributes.
Provides methods for comparing dates.


Notes for Developers:

The codebase uses object-oriented programming principles, including inheritance and polymorphism, to manage different types of appointments efficiently.
File I/O operations are implemented to allow users to save and load appointments from external files.
The application is designed for simplicity and ease of use, with a focus on command-line interaction.
Feel free to explore and modify the code to enhance its functionality or adapt it for your specific needs!
