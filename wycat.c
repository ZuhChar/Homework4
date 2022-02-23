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
#include <unistd.h>

int main(int argc, char **argv){
    char buffer[4096];
    if(argc == 1){
        fread(buffer, sizeof(buffer) + 1, 1, stdin);
        fwrite(buffer, sizeof(buffer) + 1, 1, stdout);
        return 0;
    }
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "-") == 0){
            fread(buffer, sizeof(buffer) + 1, 1, stdin);
            fwrite(buffer, sizeof(buffer) + 1, 1, stdout);
        }
        FILE *fp = fopen(argv[i], "rw");
        if(fp == NULL){
            printf("You's a dumb bitch")
        }
        fread(buffer, sizeof(buffer) + 1, 1, fp);
        fwrite(buffer, sizeof(buffer) + 1, 1, stdout);
        fclose(fp);
    }
    return 0;
}

