#include <stdio.h>
int main()
{
  int n;
  float sum = 0, average;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  average = sum / n;
  printf("Sum of the elements: %.2f\n", sum);
  printf("Average of the elements: %.2f\n", average);
}