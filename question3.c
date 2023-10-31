#include<stdio.h>
int main(){
    char firststr[]="hello";
    char secondstr[]="hello";
    for (int i=0;i<5;i++){
        if (firststr[i]==secondstr[i]){
            printf("Strings are same");
        }
        else{
            printf("Strings are not same");
        }
        return 0;
    }
}