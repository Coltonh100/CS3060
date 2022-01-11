/*
Joseph Hancock
CS3060-002
Assignment 1
01/11/2021
*/


/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

#include <stdio.h>

int main(int argc, char* argv[]){
  printf("Joseph Hancock, Assignment 1, CS3060-002 Spring 2021\n");

  int num = 0;
  for(int i = 0; i < argc; i++){
    printf("Argument #%d: %s\n", i, argv[i]);
    num = i;
  }
  printf("Number of string arguments printed: %d\n", num+1);

  return 0;
}
