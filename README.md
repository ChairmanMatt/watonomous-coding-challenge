# Matt Lu Watonomous Coding Challenge

## Program Description: 

Struct usa stores a string containing ASCII art representing the US flag. 

Class runner creates a usa object, followed by running its output operator. 


## Directory structure: 

Headers are in headers/, all other files are kept in the main directory. 


## Build pipeline: 

Run the included build.sh, which automatically does the following: 

1. Runs the Makefile by calling make

2. lints the .h files, kept within headers/

3. Lints the .cpp files in the main directory

4. Runs executable created by makefile, provided that the previous steps have all succeeded. 


## Why DevOps is import for WATonomous: 

DevOps enables everything else to work smoothly. Without DevOps, code linting wouldn't take place, thus no formatting standards or design conventions would be enforced. Code testing would be done only by the developers, so in other words it wouldn't be done. DevOps enables organizations with large numbers of users to stay on the same page and not have the codebase devolve into a complete mess (or at minimum delay the descent into madness). DevOps is the backbone of a successful team. 
