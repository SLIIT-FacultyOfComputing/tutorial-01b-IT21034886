/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int x;
  int y;
  float avg;

  printf ("Enter Mark 01 : ");
  scanf ("%d", &x);
  printf ("Enter Mark 02 : ");
  scanf ("%d", &y);

  avg = ((x+y)/2);
  
  printf ("Average Of Marks : %.2f", avg);

  return 0;
}

