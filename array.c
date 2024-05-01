#include<stdio.h>
int main(){
 int x = {100,200,300,400};
 int length = sizeof(x);
 for(int i=0;i<length;i++){
    printf("%d", x[i]);
 }
}
