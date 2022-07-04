#include<stdio.h>
int main()
{
float p=90;
if(p>=80)
    {
    printf("Dist.");
}
else if(p>=60)
    {
    printf("First");
}
else if(p>=45)
    {
    printf("Second");
}
else if(p>=35)
    {
    printf("Third");
}
else {
    printf("Fail");
}

return 0;
}
