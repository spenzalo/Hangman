# Hangman Game in C++

This repository contains a console-based Hangman game implemented in C++. The game picks a word at random from a predefined list and then prompts the player to guess letters within a certain number of attempts. Each correct guess reveals the letter's position(s) in the word, while each incorrect guess brings the player one step closer to being 'hanged'.

## Features

- **Random Word Selection**: The game selects a random word from a list at the start of each game.
- **Guessing Letters**: Players can guess one letter at a time to reveal its position(s) in the word.
- **Limited Attempts**: The game limits the number of incorrect guesses to make it challenging.
- **Visual Feedback**: Provides visual feedback on the current state of the guessed word and the number of attempts remaining.
- **Win/Lose Detection**: The game detects and announces a win or loss condition.

## Getting Started

### Prerequisites

Ensure you have a C++ compiler installed on your system. This project is built with standard C++ with no external dependencies, making it compatible with compilers like GCC, Clang, and MSVC.

### Compilation

To compile the Hangman game, navigate to the project's root directory in your terminal and run the following command:

```bash
g++ -o hangman hangman.cpp
