# CS50 Week 4 - Memory
This repository contains my solutions for Harvard's CS50 Week 4 problem sets: "Readability", "Recover", "Filter-less" and "Volume".

## Problem Descriptions

### Readability
In this problem set, we implement a program that computes the approximate grade level needed to comprehend some text. This program uses the Coleman-Liau index, which is a readability test designed to gauge the understandability of a text.

### Recover
In this problem set, we implement a program that recovers JPEGs from a forensic image, essentially simulating a digital forensics process. It's a great introduction to concepts like file I/O and byte manipulation in C.

### Volume
In this problem set, we write a program that modifies the volume of an audio file. The audio file is given in the form of a .raw file, which is a type of format that contains the "raw" data of the audio.

## Getting Started
To run these solutions, you'll need a C compiler. If you're on a Linux or Mac system, you might already have GCC installed. If you're on Windows, you might want to install something like MinGW.

##Compiling
To compile the code, navigate into the directory containing "readability.c", "recover.c", or "volume.c" and run the following command:

```sh
gcc -o readability readability.c
gcc -o recover recover.c
gcc -o volume volume.c
```

This will create an executable in the current directory.

## Running
To run the executables, use:

```sh
./readability
./recover
./volume
```

Each program will prompt you for input:

 - Readability: You will be prompted to enter a text for which the program will calculate the readability score.
 - Recover: You just need to run the program, it will recover the JPEGs from a predetermined forensic image in the same directory.
 - Volume: You will need to provide command-line arguments indicating the input audio file, the output audio file, and the factor by which to increase or decrease the volume.

Please ensure to enter valid input as prompted.