# C++ Assignments and Solutions

<b>Class:</b>

ITSE 1307/ COSC 1320 C/C++ Programming Course 

<b>Textbook:</b>

C++ How to Program 10th Edition

Author: Deitel

* Print ISBN: 9780134448237

## Assignments:


1.[Total Purchase]: (https://github.com/ladycharliy/C-Assignments/blob/master/Total%20Purchase.cpp)

2.[Kinetic Energy]: (https://github.com/ladycharliy/C-Assignments/blob/master/Kinetic%20Energy.cpp)

3.[Math Tutor]: (https://github.com/ladycharliy/C-Assignments/blob/master/Math%20Tutor.cpp)

4.[Hotel Occupancy]: (https://github.com/ladycharliy/C-Assignments/blob/master/Hotel%20Occupancy.cpp)

5.[Number Analysis]: (https://github.com/ladycharliy/C-Assignments/blob/master/Number%20Analysis.cpp)







<h3><b>1. Total Purchase:</b></h3>

<h4>Assignment Directons:</h4>

A customer in a store is purchasing five items. The prices of the five items are as follows:

Price of item 1 = $15.95

Price of item 2 = $24.95

Price of item 3 = $6.95

Price of item 4 = $12.95

Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. 
Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. 
Assume the sales tax is 7 percent.




<h3><b>2. Kinetic Energy:</b><h3>

<h4>Assignment Directions:</h4>

In physics, an object that is in motion is said to have kinetic energy. The following formula can be used to determine a moving object’s kinetic energy:

KE=(1/2) mass * velocity squared        KE=1/2?mv2

The variables in the formula are as follows: KE is the kinetic energy, m is the object’s mass in kilograms, and v is the object’s velocity, in meters per second.

Write a function named KineticEnergy that accepts an object’s mass (in kilograms) and velocity (in meters per second) as arguments. (20 pts)

The function should return the amount of kinetic energy that the object has. (10 pts)

Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity. (50 pts)

The user experience is important, be sure to have the user type in the mass and velocity (20 pts).




<h3><b>3.Math Tutor</b></h3>

<h4>Assignment Directions:</h4>

Write a program that can be used as a math tutor for a young student. The program should display two random numbers to be added, (10 pts)

such as

247

"+"

129

¯¯¯¯¯¯¯¯¯?????

The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution: (10 pts)

247

"+"

129

¯¯¯¯¯¯¯¯¯

376

If the answer is correct, a message of congratulations should be printed. If the answer is incorrect, a message should be printed showing the correct answer. (30 pts)

The program must displays a menu allowing the user to select an addition, subtraction, multiplication, or division problem. (10 pts)

The final selection on the menu should let the user quit the program. (10 pts)

After the user has finished the math problem, the program should display the menu again. (10 pts)

This process is repeated until the user chooses to quit the program. (10 pts)

Input Validation: If the user selects an item not on the menu, display an error message and display the menu again. (10 pts)




<h3><b>4.Hotel Occupancy</b><h3>

<h4>Assignment Directions:</h4>

Write a program that calculates the occupancy rate for a hotel. The program should start by asking the user how many floors the hotel has. (10 pts)

A loop should then iterate once for each floor. In each iteration, the loop should ask the user for the number of rooms on the floor and how many of them are occupied. (20 pts)

After all the iterations, the program should display how many rooms the hotel has, how many of them are occupied, how many are unoccupied, and the percentage of rooms that are occupied. (40 pts)

The percentage may be calculated by dividing the number of rooms occupied by the number of rooms. (10 pts)

 It is traditional that most hotels do not have a thirteenth floor. The loop in this program should skip the entire thirteenth iteration. (10 pts)

Input Validation: Do not accept a value less than 1 for the number of floors. Do not accept a number less than 10 for the number of rooms on a floor. (10 pts)




<h3><b>5.Number Analysis Program</b></h3>

<h4>Assignment Directions:</h4>

Write a program that asks the user for a file name. (20pts) Assume the file contains a series of numbers, each written on a separate line. The program should read the contents of the file into an array then display the following data: (20 pts)

The lowest number in the array (10 pts)
The highest number in the array (10 pts)
The total of the numbers in the array (20 pts)
The average of the numbers in the array (20 pts)
