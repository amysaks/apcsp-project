#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
  int SIZE,j;
  char name[50];
  char names[SIZE][50];
  char input[256];
 
printf("How many names would you like to enter\n");
scanf("%d",&SIZE);

for (int i = 0; i < SIZE; i++){
  printf("Input Name %d\n", i+1);
  scanf("%s", name);
  strcpy(names[i], name);
}
printf("Random Baby Name \n");
j = (rand() % SIZE+1);
printf("%s\n",names[j]);
 
  return 0;
}
