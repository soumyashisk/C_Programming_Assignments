#include <stdio.h>
int main()
{
  int arr[10];
  printf("Enter 10 elements of the array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < 10; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  printf("Maximum element: %d\n", max);
  printf("Minimum element: %d", min);
  return 0;
}