# CS50 Week 3 - Algorithms

This repository contains my solutions for Harvard's CS50 Week 3 problem sets: "Plurality" and "Runoff".

## Problem Descriptions

### Plurality

In this problem set, we implement a program that runs a plurality election. A plurality vote (or first-past-the-post) is an electoral system in which each voter is allowed to vote for only one candidate, and the candidate who polls more votes than any other candidate is elected.

### Runoff

In this problem set, we implement a program that runs a runoff election. A runoff vote is an election in which the two candidates receiving the most votes are paired in a second election, and the candidate receiving the majority of votes in the second election is elected.

## Getting Started

To run these solutions, you'll need a C compiler. If you're on a Linux or Mac system, you might already have GCC installed. If you're on Windows, you might want to install something like MinGW.

## Compiling

To compile the code, navigate into the directory containing "plurality.c" or "runoff.c" and run the following command:

```sh
gcc -o plurality plurality.c
gcc -o runoff runoff.c
```

This will create an executable in the current directory.

## Running

To run the executables, use:

```sh
./plurality
./runoff
```

Each program will prompt you for input:

 - Plurality: You will be prompted to enter the number of voters and each voter's vote.
 - Runoff: You will be prompted to enter the number of voters and each voter's list of preferences.

Please ensure to enter valid input as prompted.
