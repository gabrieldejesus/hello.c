#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // get name for user
  string name = get_string("What is your name?\n");

  // say message with hello and name for user
  printf("Hello, %s\n", name);
}
