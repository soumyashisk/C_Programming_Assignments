#include <stdio.h>
int main()
{
  float sum = 0, average;
  int arr[10];
  printf("Enter 10 elements of the array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  average = sum / 10;
  printf("Sum of the elements: %.2f\n", sum);
  printf("Average of the elements: %.2f", average);
}