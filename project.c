#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
   int SIZE;
   struct name {
	char name[50];};
  struct name nameArr[SIZE];
   int i;
   char name[256];
   int num;
  float input[256];
 
printf("How many names would you like to enter\n");
fgets(input, 256, stdin);
sscanf(input, "%d", SIZE);

for (int i = 0; i < SIZE; i++){

printf("Input Name %d\n", i + 1);
fgets(input, 256, stdin);
sscanf(input, "%s", name);
strcpy(nameArr[i].name, name);
}

  int c;
 
  printf("Random Baby Name/n");
 
  for (c = 1; c < SIZE; c++) {
    i = rand() % 100 + 1;
    printf("%s\n", nameArr[i]);
  }
 
  return 0;


}
