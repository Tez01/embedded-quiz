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

void getPerfectSquares(int remainingWidth, int remainingHeight)
{
  while ((remainingHeight > 0) && (remainingWidth > 0)) {
    // Find min between current height and width
    int minValue = findMin(remainingHeight, remainingWidth);

    // Cut across minValue and equal to minValue and save new square in string
    printf("%dx%d\n\r", minValue, minValue);

    // update remaining Height and width
    // If min was width, update height
    if (minValue == remainingWidth) {
      remainingHeight -= minValue;
    }
    else {
      // else update width
      remainingWidth -= minValue;
    }
  }

  return;
}

void main()
{
  int n = 123;
  int m = 10;

  // Output array
  getPerfectSquares(n, m);
}