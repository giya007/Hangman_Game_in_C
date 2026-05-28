Introduction
Hangman is a word guessing game where the player guesses a hidden word before losing all chances. In
this project, a word is selected from a predefined array of words. The player guesses one letter at a time
using the clue given. Correct guesses are displayed in the word pattern, while wrong guesses reduce lives
and update the hangman figure.

Objective
The objective of this project is to develop a console-based Hangman Word Guessing Game using C in
Linux. The screen displays the title, clue, word length, remaining lives, hidden word pattern, and hangman
drawing. The user inputs one letter at a time. The output shows the updated word pattern, hangman figure,
remaining lives, and final win or game over message.

Software Requirements
(i) Operating System: Linux / Ubuntu
(ii) Programming Language: C
(iii) Compiler: GCC Compiler
(iv) Text Editor / IDE: VS Code / any C editor
(v) Terminal: Linux terminal for compiling and running the program
(vi) Header Files Used: stdio.h, stdlib.h, time.h, string.h

Data Types
(i) int is used to store lives, length, index, stage number, check value, found value, and loop counters.
(ii) char is used to store the single guessed letter entered by the user.
(iii) char[] is used to store strings such as correct_word, clue, and word_holder.
(iv) char[][] is used to store multiple strings such as words, clues, and hangman_pics.
(v) void is used for functions that do not return any value.

Predefined Functions
(i) printf() is used to display messages, clue, lives, word pattern, hangman drawing, and result.
(ii) scanf() is used to read one letter entered by the user.
(iii) strlen() is used to find the length of the selected word.
(iv) strcpy() is used to copy the selected word and clue into separate variables.
(v) strchr() is used to check whether '_' is still present in word_holder.
(vi) rand() is used to generate a random index for word selection.
(vii) srand() is used to initialize the random number generator.
(viii) time() gives the current time value as seed for random generation.
(ix) system("clear") is used to clear the terminal screen and refresh the display.

User-Defined Functions
(i) selectWord() selects a random word and its matching clue from the arrays.
(ii) initWordHolder() initializes word_holder with underscores and adds '\0' at the end.
(iii) displayWordHolder() displays the current guessed progress of the word.
(iv) checkGuess() checks whether the guessed letter is present in the word and updates word_holder.
(v) checkWin() checks whether all letters are guessed by checking if '_' remains.
(vi) drawHangman() displays the hangman picture according to the wrong guess stage.

Logic Used
(i) The game is based on comparing the user’s guessed character with the characters of a randomly selected
word.
(ii) A separate string called word_holder is used to hide the actual word and display only correctly guessed
letters.
(iii) A flag variable is used to identify whether the guessed letter is correct or wrong.
(iv) The number of lives controls how many wrong guesses the user can make.
(v) The hangman picture changes according to the number of wrong guesses.
(vi) The win condition is checked by verifying whether any underscore remains in word_holder.

Working
(i) The screen is cleared and game data is initialized.
(ii) A random word and clue are selected.
(iii) The hidden word pattern is created using underscores.
(iv) The clue, lives, word length, hangman picture, and word pattern are displayed.
(v) The user enters one letter as a guess.
(vi) The guess is checked and the word pattern is updated if correct.
(vii) For a wrong guess, lives are reduced and the hangman stage is updated.
(viii) The game continues until the word is guessed or all lives are lost.

Compilation
Compile:
gcc hangman_game.c
Run:
./a.out

Advantages
(i) The game is simple, interactive, and easy to understand.
(ii) It helps to practice basic C programming concepts such as arrays, strings, loops, conditions, and
functions.
(iii) The use of clues, lives, and hangman drawing makes the game more interesting and user-friendly.

Limitations
(ii) The program does not include score or levels.
(iii) There is no graphical interface

Future Improvements
(i) Repeated guess checking can be added to avoid reducing lives for the same letter again.
(ii) More words and clues can be added to make the game more interesting.
(iii) Difficulty levels or score calculation can be included to improve the gameplay.

Conclusion
The Hangman Word Guessing Game is made using C programming language in Linux and demonstrates
modular programming. It combines arrays, strings, loops, conditions, random number generation, and
functions.
