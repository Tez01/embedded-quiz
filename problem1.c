#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 100

// Function: findMin
// Returns minimum of the two numbers passed as argument
int findMin(int a, int b)
{
  if (a <= b) {
    return a;
  }
  else {
    return b;
  }
}

// Function getPerfectSquares
// Prints out all the largest squares formed from the dimensions passed in argument
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
  int n;
  scanf("%d", &n);
  int m;
  scanf("%d", &m);

  if (n > 0 && m > 0) {
    getPerfectSquares(n, m);
  }
}