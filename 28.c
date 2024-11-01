#include <stdio.h>
int main()
{
  int arr[10];
  printf("Enter 10 elements of the array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10 / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[10 - i - 1];
    arr[10 - i - 1] = temp;
  }
  printf("Reversed array:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
}