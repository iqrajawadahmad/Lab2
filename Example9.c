#include<stdio.h>
#include<string.h>
struct Books{
    char title[50];
    char author [50];
    int book_id;
};
int main(){
    struct Books mybook;
    strcpy(mybook.author,"William Shakespeare");
    strcpy(mybook.title,"Hamlet");
    mybook.book_id=1;
    printf("Author:%s\n",mybook.author);
    printf("Title:%s\n",mybook.title);
    printf("Book ID:%d\n",mybook.book_id);
    
    return 0;
} 