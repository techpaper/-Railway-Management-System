# Description of Source.zip

## Made By Saumyak Raj (19CS30040)

## Link to code: 
https://github.com/saumyakraj/Railway-Management-System

## Files in "Code" Folder:

1. Date.h and Date.cpp - Implementation of class Date.
2. Station.h and Station.cpp - Implementation of class Station.
3. Passenger.h and Passenger.cpp - Implementation of class Passenger.
4. BookingClasses.h and BookingClasses.cpp - Implementation of class BookingClasses and its parametric hierarchy.
5. Railways.h and Railways.cpp - Implementation of class Railways.
6. Gender.h and Gender.cpp - Implementation of class Gender.
7. Exceptions.h and Exceptions.cpp - Implementation of hierarchy of class Exceptions.
8. Booking.h and Booking.cpp - Implementation of class Booking.
9. BookingCategory.h and BookingCategory.cpp - Implementation of class BookingCategory and its polymorphic hierarchy.
10. UnitTesting.cpp - Implementation of UnitTesting for classes Booking,Passenger,Date,Station.
11. ApplicationTesting.cpp - Implementation of UnitTesting for the Booking Application.
12. Out.txt - Output of ApplicationTesting
13. Report.txt - Output and Test Report of Application Testing

## Compiler Information: 

#### g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0 (GNU-GCC Compiler)
#### Tested on - C++17 and above in Kali Linux 20.04

## How to Run Tests?

Extract the sources.zip file in a folder and open the folder location in a terminal.

To run unit tests run the following commands inside the "Code" directory:

1.
``` bash
g++ Booking.cpp Date.cpp Passenger.cpp BookingCategories.cpp Railways.cpp Gender.cpp BookingClasses.cpp Station.cpp Concession.cpp Exceptions.cpp UnitTest.cpp
```
2. 
``` bash
./a.out
```
To run application tests run the following command:

1. 
``` bash
g++ Booking.cpp Date.cpp Passenger.cpp BookingCategories.cpp Railways.cpp Gender.cpp BookingClasses.cpp Station.cpp Concession.cpp Exceptions.cpp ApplicationTesting.cpp
```
2. 
```bash
./a.out
``` 
