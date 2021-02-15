#include  <stdio.h>
#include  <stdlib.h>
#include <string.h>
#define SIZE 1000

//struct of textblock  and his main parameters
struct TextBlock{
int size_area;
char TEXT[ ];
};
int main() {
int size_of_textblock; 
system("whoami"); // name of computer user
system("w");
printf("Size of Text Block:");
scanf("%d",&size_of_textblock);
printf("Size of the block:%d \n",size_of_textblock);

struct TextBlock obj;
obj.size_area = 0;
return 0;
};