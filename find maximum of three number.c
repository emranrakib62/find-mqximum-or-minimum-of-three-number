#include<stdio.h>
int main()
{
    float a,b,c,s,avg;
    printf("enter the three number:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c);
    avg=(a+b+c)/3;
    if(b<a&&c<a){

        printf("%f is big\n ",a);
    }else if(a<b&&c<b){
    printf("%f is big\n",b);
    }else {
    printf("%f is big\n",c);
    }


     if(b<a&&b<a){

        printf("%f is smal \n",b);
    }else if(a<b&&a<c){
    printf("%f is smal\n",a);
    }else {
    printf("%f is smal\n",c);

    }
  printf("sum=%f\n",s);
  printf("avg=%f\n",avg);

}
