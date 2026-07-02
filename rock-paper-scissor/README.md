# Rock-Paper-Scissor

The idea behind the program is very simple. At the stating the game shows a welcome message with two options, play game and exit. If the user choose play game it ask for the user input either a full words like **rock, paper, scissor** or else make it as option like **1. Rock2. Paper3. Scissor** by typing a number it choose it. And then the system must choose a random option. Now compare the user's and computer's choice and display either loose or win, also diplay play again or exit button at that time.

### Welcome
At the starting of the program need to show the wecome message like given below,

```
        Rock Paper Scissor
##################################

[1] Play Game
[2] Exit Game

Enter your option: 
```

### Play Game
If the user choose play game, it need to show some options like the given below,

```
        Rock Paper Scissor
##################################

[1] Rock
[2] Paper
[3] Scissor

Enter your option:
```

The user can choose their option and it need to be stored in a variable named **userChoice**. And the computer option need to be random from the give option and need to store in the variable named **computerChoice**.

### Comparison
After getting the input from both user and computer, we need to compare those and say who won the game. Lets us use these conditons,

if userChoice == computerChoice then need to print game is tie.
if (( userChoice == rock && computerChoice == scissor) || (userChoice == paper && computerChoice == stone) || (userChoice == scissor && computerChoice == paper) ) then need to print You won.
else print the computer won or you lose.

### Result
When comparison completed print the result and also ther need to be a options like given below,

```
#############################
        [Game result]
#############################

[1] Play again
[2] Exit

Enter your option:
```
