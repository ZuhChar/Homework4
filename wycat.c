/*
* wycat.c
* Author: Zachary Crimmel
* Date: Feb 21, 2022
*
* COSC 3750, Homework 4
*
* This is a simple version of the cat utility. It is designed to print the contents of a file or read and write standard input if no arguments are given or if a '-' is given.
*
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
    char buffer[4096];
    if(argc == 1){

        return 0;
    }
    for(int i = 1; i < argc; i++){
        if(argv[i] == "-"){

        }
        FILE *fp = fopen(argv[i], "rw");
        fread(&buffer, sizeof (char), 4096, fp);
        fwrite(stdout, sizeof (char), 4096, &buffer);
        fclose(fp);
    }
    return 0;
}