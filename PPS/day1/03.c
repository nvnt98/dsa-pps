#include<stdio.h>
int main(){
    printf("enter the character: ");
    char letter;
    scanf("%c",&letter);
    int lowercase=(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u');
    int uppercase=(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U');
    if(lowercase||uppercase){
        printf("%c is avowel",letter);
    }
    else{
        printf("%c is a consonant",letter);
    }
    return 0;
}