#include <stdio.h>
int main()
{
  char grade, name[12], lname[15];
  printf("Enter your grade:");
  scanf("%c", &grade);
  printf("The grade is: %c", grade);

  printf("\nENter your name and last name:");
  scanf("%s %s", name, lname);
  printf("Your name is: %s \t lastname is: %s", name, lname);
}