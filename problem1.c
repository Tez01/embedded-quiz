#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 100

int findMin(int a, int b)
{
  if (a <= b) {
    return a;
  }
  else {
    return b;
  }
}

int findMax(int a, int b)
{
  if (a >= b) {
    return a;
  }
  else {
    return b;
  }
}

void getPerfectSquares(int remainingWidth, int remainingHeight, char *output[])
{
  int i = 0;
  while ((remainingHeight > 0) && (remainingWidth > 0)) {
    // Find min between current height and width
    int minValue = findMin(remainingHeight, remainingWidth);

    // Cut across minValue and equal to minValue and save new square in string
    char newSquare[MAX_STRING_LENGTH];
    snprintf(newSquare, MAX_STRING_LENGTH, "%dx%d", minValue, minValue);
    output[i] = newSquare;
    // update remaining Height and width
    // If min was width, update height
    if (minValue == remainingWidth) {
      remainingHeight -= minValue;
    }
    else {
      // else update width
      remainingWidth -= minValue;
    }

    i++;
  }

  return;
}

void main()
{
  int n = 1000;
  int m = 10;

  int maxValue = findMax(n, m);

  // Output array
  char *output[maxValue];
  getPerfectSquares(n, m, output);
  printf("%s\n\r", output[0]);
}