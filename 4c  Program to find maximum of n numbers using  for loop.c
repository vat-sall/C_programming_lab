#include <stdio.h>
int main() {
    int n,i;
    double number,max=-999999.0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;++i)
    {
        printf("enter the number %d",i);
        scanf("%lf",&number);
        if(number>max)
        {
            max=number;  
        }
    }
    printf("maximum number is : %2lf\n",max);
}
