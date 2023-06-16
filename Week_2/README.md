# CS50 Week 2 - Arrays in C

This repository contains my solutions for Harvard's CS50 Week 2 problem sets: "Caesar" and "Scrabble".

## Problem Descriptions

### Caesar

In this problem set, we implement a program that encrypts messages using Caesar’s cipher. This cipher is a type of substitution cipher in which each letter in the plaintext is 'shifted' a certain number of places down the alphabet.

### Scrabble

In this problem set, we implement a program that determines which of two Scrabble words is worth more points, given the point values of each letter.

## Getting Started

To run these solutions, you'll need a C compiler. If you're on a Linux or Mac system, you might already have GCC installed. If you're on Windows, you might want to install something like MinGW.

## Compiling

To compile the code, navigate into the directory containing "caesasr.c" or "scrabble.c" and run the following command:

```sh
gcc -o caesar caesar.c
gcc -o scrabble scrabble.c
```

This will create an executable in the current directory.

## Running

To run the executables, use:

```sh
./caesar
./scrabble
```

Each program will prompt you for input:

 - Caesar: Enter a non-negative integer which will be used as the key to shift the letters in the plaintext.
 - Scrabble: Enter two words to compare their respective Scrabble scores.

Please ensure to enter valid input as prompted.
