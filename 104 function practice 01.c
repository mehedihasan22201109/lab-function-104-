#include <stdio.h>
int Getmax(int a,int b){
if (a>b)
{
    return a;
}
else
{
    return b;
}
}
int main()
{
    printf("%d\n",Getmax(5,10));
    printf("%d\n",Getmax(15,10));
    printf("%d\n",Getmax(20,10));
    printf("%d\n",Getmax(50,10));
    int a,b;
    scanf ("%d%d",&a,&b);
    printf ("%d\n",Getmax(a,b));

}
