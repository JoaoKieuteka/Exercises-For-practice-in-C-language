This is some exercises I did just for learning some basics in C programming language, they were wrote all in Portugese but I'm just too lazy to translate it LOL.

Exercise 1 - Guess the number:

Here I did a simple algorithm that randomizes a number, stores it in a Int type variable and the user has to guess the number by typing It on a console, if the guessed number is above the correct one, the software prints "Your guess is above the correct number, try it again", the same applies if the guess is below the correct value, but this time it prints "Your guess is below the correct number", if the user guess it right the algorithm stops and prints a congratulations message.

Exercise 2 - Vowels:

This one is about couting the vowels in a text that the user types on a console, here the user types a text with a 100 characters limit, the algorithm stores it in a array named "TextoUsuario" with the fgets function, and uses a for loop that counts how many of each vowels are in the text that the user typed in, in the end the console prints out the number of each vowel containing in the text.

Exercise 3 - Student Grades:

Here is the one that stores the students grades in a matrix 4x2, the first dimension represents the number of students, the second one is their respective grades, in the end the console prints out the grades of each student and calculates the avarage grade of them.

Exercise 4 - Calculator:

Thats the classic "Calculator algorithm", in this one I created an array called "NumerosUsuario" that stores the numbers that the user typed in, there is the "Menu" function that selects which arithmetic operation the user wants to use and stores it in a int type variable called "Operacao", after that i created 4 functions, each one of them represents a arithmetic operation, there is one for Sum, Subtraction, Multiplication and Division, and I created a "Switch" case inside of a "While loop" in the main function, that picks the right operation the user wants to make.

OBS 1: There is a print function in the end of each arithmetic function, It prints out the result of the math involving the User numbers.

OBS 2: The user selects the operation by typing in a number 1 to 4, if the user types a number below 1 or above 4, the algorithm returns to the beginning of the "Menu" function, which is the one that stores the number of the operation the user types in.

