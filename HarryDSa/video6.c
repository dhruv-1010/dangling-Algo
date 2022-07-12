//Array
//how to implement in our way lesgoooooo
#include <stdio.h>
#include <stdlib.h>
int main(){
    int*a;
    a=(int*)malloc(4*sizeof(int));
    int size;
    size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",size);
    int *b=(int*)malloc(8*sizeof(int));
    b=a;
    size=sizeof(b)/sizeof(b[0]);
    printf("%d",size);
    return 0;

}
//notes
//implementing dynamic arrays are now the real cool
//learning the C memory structure helps
//malloc is good
//we cannot change size of static arrays;
//ADT in next lectures implementing array as our own Abstract Data Type
//.get .set .insert .delete .add all of these are we going implement