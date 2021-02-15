#include  <stdio.h>
#include  <stdlib.h>
#include <string.h>
#define SIZE 100

//struct of textblock  and his main parameters
struct TextBlock{
int size_area;
char TEXT[SIZE];
};

int main() {
int size_of_textblock; 
system("whoami"); // name of computer user
system("w");
printf("Size of Text Block:");
scanf("%d",&size_of_textblock);
printf("Size of the block:%d \n",size_of_textblock);

// array of blocks 
struct TextBlock blocks[] = { 12 ,"SADF", 32,"DAFFD"};

//print all blocks

int n = sizeof(blocks)/sizeof(blocks[0]);

for (int i=0; i<n;i++){
    printf("Name %s : Size:%d",blocks[i]->size_area,blocks[i]->TEXT);
}

return 0;
};