#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

//struct of textblock  and his main parameters
struct TextBlock{
int size_area;
char TEXT[SIZE];
};

// full text Block
struct Block
{    
    char Name[SIZE];
    /* data */
    struct TextBlock text;
    
};

int main() {
    
int size_of_textblock; 
system("whoami"); // name of computer user
system("w");

//generate block
struct Block block;
printf("Enter name : ");
scanf("%s", block.Name);
printf("Enter size\n Amount: ");
scanf("%d", &block.text.size_area);
printf("Text: ");
scanf("%s", &block.text.TEXT);

return 0;
};