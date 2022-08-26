#include"stdio.h"
#include"string.h"
void catkhoantrang(char a[]){
    int i=0;
    for(i=0;i<100;i++){
        if(a[i]==' '){
            a[i]= a[i+1];
        }
    }
}
int len(char a[]){
    int x=0;
    while (a[x]!='\0')
    {
        x++;
    }
    return x;

    
    return x;
}
int main(){
    char a[]="nguyen thanh phat";
    // catkhoantrang(a);
    // printf("%s",a);
    printf("%d",len(a));
    printf("%d",strlen(a));
    return 0;
}