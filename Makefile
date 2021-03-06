#
# Makefile
# Author: Zachary Crimmel
# Date: Feb 21, 2022
#
# COSC 3750, Homework 4
#
# This is a Makefile designed to compile the wycat.c file
#

CC= gcc
CFLAGS= -Wall -ggdb
RM= rm -f

.PHONY: wycat clean tidy

wycat: wycat.c
	$(CC) $(CFLAGS) wycat.c -o wycat

clean:
	${RM} wycat

tidy:
	${RM} a.out core.* wycat
