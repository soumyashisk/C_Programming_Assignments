#include <stdio.h>
int main()
{
  int arr[10], search, found = 0;
  printf("Enter 10 elements of the array:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d", &search);
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == search)
    {
      printf("Element %d found at index %d.\n", search, i);
      found = 1;
      break;
    }
  }
  if (!found)
  {
    printf("Element %d not found in the array.\n", search);
  }
}