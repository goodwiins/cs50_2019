#include <stdio.h>
#include <cs50.h>

int main(void){
    float x;
    int n;
    int p;

while(true){

     printf("how nuch change is \n");
        x = get_float();
            if(x>0)
                {
                    break;
            }
        }
    n=x*100;
    p=0;
while(n>=25)
{
    p+=1;
    n=n-25;
}
while(n>=10)
{
    n=n-10;
      p+=1;
}
while(n>=5)
    {
        n=n-5;

      p+=1;
}
printf("%d\n",p+n);

}