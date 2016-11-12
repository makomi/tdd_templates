# Mars Rover Kata
This kata takes you to the red planet. As a programmer at a new space exploration startup your task is to write software that moves the Mars rover robot around on the red planet:

## Requirements:
- You are given the initial starting point (x,y) of a rover and the direction (N,S,E,W) it is facing. 
- The rover receives a character array of commands.
-  Implement commands that move the rover forward/backward (f,b). 
- Implement wrapping from one edge of the grid to another. (planets are spheres after all) 
- Implement obstacle detection before each move to a new square.  If a given sequence of commands encounters an obstacle, the rover moves up to the last possible point and reports the obstacle. 

## How to build:
- Maven 3
- Java 8
- mvn clean install
