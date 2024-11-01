#include <stdio.h>
int main()
{
  int arr1[10], arr2[10], merged[20];
  printf("Enter 10 elements for the first array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter 10 elements for the second array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr2[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    merged[i] = arr1[i];
    merged[i + 10] = arr2[i];
  }
  printf("Merged array:\n");
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", merged[i]);
  }
}