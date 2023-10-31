#include <stdio.h>
int main(){
    int len ,count;
    printf("Enter length of array:");
    scanf("%d",&len);
    int array[len];
    for (int i=0;i<len;i++){
        printf("Enter element number #%d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("The unique elements of array:\n");
    for (int i=0;i<len;i++){
        count=0;
        for (int j=0;j<len;j++)
            if(array[i]==array[j])
                count++;
        if (count==1)
        printf("%d\n",array[i]);
    }
    return 0; 
}