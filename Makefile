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
	$(CC) $(CFLAGS) wycat.c -o wycat

wycat: wycat.c
	$(CC) $(CFLAGS) -c wycat.c

clean:
	${RM} wycat

tidy:
	${RM} a.out core.* wycat
