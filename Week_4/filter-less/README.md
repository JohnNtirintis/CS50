# CS50 Week 4 - Filter (Less Comfortable)
This repository contains my solution for the problem set "Filter (Less Comfortable)" from Harvard's CS50 Week 4.

## Problem Description
In this problem set, we implement a program called "Filter" that applies filters to BMPs, specifically the grayscale, reflect, blur, and edge-detection filters. The objective is to get hands-on experience with image processing concepts and techniques.

This less comfortable version of the problem requires us to implement the grayscale and reflect filters, and is a great way to understand how images are stored and manipulated in code.

## Getting Started
To run this solution, you'll need a C compiler. If you're on a Linux or Mac system, you might already have GCC installed. If you're on Windows, you might want to install something like MinGW.

## Compiling
To compile the code, navigate into the directory containing "helpers.c" and "filter.c" and run the following command:

```sh
gcc -o filter filter.c helpers.c
```

This will create an executable in the current directory.

## Running

To run the executable, use:

```sh
./filter -g infile.bmp outfile.bmp
./filter -r infile.bmp outfile.bmp
```

You'll need to provide command-line arguments:

 - The flag -g or -r indicating whether to apply a grayscale or reflect filter, respectively.
 - infile.bmp is the bitmap file you want to apply the filter to.
 - outfile.bmp is the name of the new bitmap file that should be produced.

Please ensure to enter valid file paths and names.