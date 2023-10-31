#include<stdio.h>
struct Distance{
    int inch;
    int feet;
};
int main(){
    struct Distance d1,d2,sum;
    printf("Enter the first distance (feet and inch with space): ");
    scanf("%d %d", &d1.feet, &d1.inch);
    printf("Enter the second distance (feet and inch with space): ");
    scanf("%d %d", &d2.feet, &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet += 1;
    printf("Sum of distances: %d feet %d inch\n", sum.feet, sum.inch);
    return 0;
    }
}