#include<stdio.h>

int main(){
    int h;
    printf("Moi ban nhap h : ");
    scanf("%d",&h);
    for(int i = 1 ; i <= h ; i++){
        for(int j = 1 ; j <= 2*h - 1 ; j++){
            if(j >= h - i + 1 && j <= h + i - 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}