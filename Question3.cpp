#include <stdio.h>
#include <iostream>

int findMax(int number[],int from, int to){
int i,max=number[from];
for(i=from;i<to;i++)
{
if(max<number[i])
max=number[i];
}
return max;
}

int main()
{
const int N = 10;
int number[]= {10,15,0,-25,19,20,25,30,45,20};
printf("Greatest number in first half : %d\n",findMax(number,0,N/2));
printf("Greatest number in second half :%d",findMax(number,N/2,N));
return 0;
}