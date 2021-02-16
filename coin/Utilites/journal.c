#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
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
int gtk_start(){

    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *btn = gtk_button_new_with_label("Close");
    gtk_container_add(GTK_CONTAINER (win),btn);
    gtk_widget_show_all (win);
    gtk_main();

    return 0;
}

int main() {
    
int size_of_textblock;
char choice; 
//system("whoami"); // name of computer user
//system("w");


//generate block
struct Block block;
printf("Enter name : ");
scanf("%s", block.Name);
printf("Enter size\n Amount: ");
scanf("%d", &block.text.size_area);
printf("Text: ");
scanf("%s", &block.text.TEXT);
//work with file 
FILE *f;
f = fopen("journal.txt","a");
fputs(block.Name,f);
fputs("|",f);
fputs("\n",f);
fclose(f);

printf("Launch GTK  VERSION: ?");
scanf("%c",&choice);
if(choice=='y'){
    gtk_start();
}
else{
    printf("EXIT");
}
return 0;
};