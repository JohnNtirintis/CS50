# CS50 Week 6 - World Cup
This repository contains my solution for the "World Cup" problem from Harvard's CS50.

## Problem Description
In the "World Cup" problem, the task is to implement a program that simulates a football tournament among given teams.

The program takes an input file that contains the names of the teams participating in the tournament, their ratings, and simulates games between those teams, eventually declaring a winner.

The logic of the game is based on the Elo Rating System, which calculates the relative skill levels of players in zero-sum games such as football.

## Getting Started
To use this program, you need Python installed on your system. If it is not installed, you can download Python from here.

## Data Files
The program requires a CSV file as input, which contains the following columns:

 - team: The name of the team.
 - rating: The Elo rating of the team.
An example of such file content is:
```sh
team,rating
Brazil,2100
Germany,2099
...
```

## Running
To run the program, navigate to the directory containing the python file and use the following command in the terminal:
```sh
python3 worldcup.py filename.csv
```
 - Where filename.csv is the name of the CSV file you want to use for the tournament. The program will output the results of the tournament in the terminal.
	i.e.
```sh
python tournament.py 2019w.csv
```
or
```sh
python tournament.py 2018m.csv
```

Please ensure to enter valid file paths and names.


