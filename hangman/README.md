# Hangman

The idea of the program is very simple. First there need to be a list of words **wordBank** the computer choose the random word from it. Then display the first letter only and followed by the underscores. Then it ask for the guess If we type the letter it check whether it is correct or wrong. If it correct then display the guessed letter followed by the underscores. If we enter wrong letter it reduce your lives. At last it print either you won or lose the game with the word.

### wordBank

I have declared a array named **wordBank** with size of **10 X 10** and initialized with some random word. With that I have declared the variables which need to be used in the program.

### Display menu

First when the user enter the game it need to display a welcome message or something. For that I used my own given below,

```
        Hangman
#########################

[1] Play Game
[2] Exit

Enter your option: 
```

When the user enter 1 it need to go to the game, if he enter 2 it need to exit from the game.

###  Random

When the user pick to play game, the computer pick the random word from the **wordBank** and store it to a variable. Then we need to find the length of the word to diplay exactly the number of underscores. We display the word with first letter followed by the underscore. 

### Guess

It ask the user to enter a guess also say to enter **?** for reveal ine word. If the user enter **?** it reveal the current character and reduce one live. If word enter a letter, it checks whether the letter is correct or not. If it correct then it display the discovered words followed by underscores. If it was wrong it reduce one life and say wrong guess.

### Result

If the user discover the whole word, the program print the winning message with the word. If the lives drops to 0. Then the program print the lose message with the word.

### Play again

With that winning message or lose message the program ask the user to play again or exit from the game.

```
        Hangman
#########################

[1] Play Again
[2] Exit

Enter your option: 
```