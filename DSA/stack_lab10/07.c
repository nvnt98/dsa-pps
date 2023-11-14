#include<stdio.h>
#include<string.h>
#define max_size 100
char stack[max_size];
int top=-1;
void push(char data){
    if(top==max_size-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top]=data;
}
char pop(){
    if(top==-1){
        printf("Empty Stack\n");
        return ' ';
    }
    char data=stack[top];
    top--;
    return data;
}
int is_matching_pair(char char1, char char2){
    if(char1=='('&&char2==')'){
        return 1;
    }
    
    else{
        return 0;
    }
}
int is_balanced(char* text){
    int i;
    for(i=0;i<strlen(text);i++){
        if(text[i]=='('){
            push(text[i]);
        }
        else if(text[i]==')'){
            if(top==-1){
                return 0;
            }
            else if (!is_matching_pair(pop(),text[i])){
                return 0;
            }
        }
    }
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char text[max_size];
    printf("Input An Expression in parentheses: ");
    scanf("%s",text);
    if(is_balanced(text)){
        printf("The Expression is balanced.\n");
    }
    else{
        printf("The Expression is not balanced.\n");

    }
    return 0;
}