#include <stdio.h>
int test(int b[],int begin,int finish){
    int max = b[begin];
    for(int i = begin;i<finish;i++)
        if(b[i] > max)
            max = b[i];
    return max;
}
int main(void) {
    int a,b[100],sum=0,fo,ba;
    scanf("%i",&a);
    for(int i = 0;i < a;i++)
        scanf("%i",&b[i]);
    for(int i = 1;i<a;i++) {
        fo = test(b,0,i),ba = test(b,i,a);
        if(fo > b[i] && ba > b[i])
            sum += (fo>ba?ba:fo) - b[i];
    }
    printf("%i\n",sum);
}