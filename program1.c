#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("\n enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf(" %d is a palindrome number ");    
else    
printf("%d is not a palindrome");   
return 0;  
}   

















































































