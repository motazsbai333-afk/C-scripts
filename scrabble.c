#include<stdio.h>
#include<cs50.h>
#include<string.h>
void upper(string ch){
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='a' && ch[i]<='z') ch[i]=ch[i]-32;
    }
}
int main(){
    int x,y;
    x=0;
    y=0;
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    upper(p1);
    upper(p2);
    for(int i=0;i<strlen(p1);i++){
        switch(p1[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'S':
            case 'R':
            case 'T':
            case 'U':
                x++; break;
            case 'D':
            case 'G':
                x=x+2;break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                x=x+3;break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                x=x+4;break;
            case 'K':
                x=x+5;break;
            case 'J':
            case 'X':
                x=x+8;break;
            case 'Q':
            case 'Z':
                x=x+10;break;
            default: break;
        }
    }
    for(int i=0;i<strlen(p2);i++){
        switch(p2[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'S':
            case 'O':
            case 'R':
            case 'T':
            case 'U':
                y++; break;
            case 'D':
            case 'G':
                y=y+2;break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                y=y+3;break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                y=y+4;break;
            case 'K':
                y=y+5;break;
            case 'J':
            case 'X':
                y=y+8;break;
            case 'Q':
            case 'Z':
                y=y+10;break;
            default: break;
        }
    }
    if (y == x) printf("Tie!\n");
    else if (y < x) printf("Player 1 wins!\n");
    else printf("Player 2 wins!\n");
}
