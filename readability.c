#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

bool alpha(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int main(void){

    string text=get_string("text=");
    int w=0,l=0,s=0,i=0;
    float S=0,L=0;
    for(i=0;i<strlen(text);i++){
        if(text[i]==' ') w++;
        if(text[i]=='.'||text[i]=='!'||text[i]=='?') s++;
        if(alpha(text[i])) l++;
    }
    w++;
    L=(l*100.0)/w;
    S=(s*100.0)/w;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(index);
    if(grade<1) printf("Before Grade 1\n");
    if(grade>=16) printf("Grade 16+\n");
    else printf("Grade %i\n",grade);
}
