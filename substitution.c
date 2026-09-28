#include <cs50.h>
#include <stdio.h>
#include <string.h>

string upper(string ch)
{
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='a' && ch[i]<='z') ch[i]=ch[i]-32;
    }
    return ch;
}

int dupli(char a, int x, string key)
{
    string ch;
    ch=upper(key);
    for(int i=0;i<x;i++)
    {
        if (ch[i]==a)
            return 1;
    }
    return 0;
}

int verif(string key)
{
    if(strlen(key)!=26) return 0;
    for(int i=0;i<strlen(key);i++)
    {
        if(dupli(key[i],i,key)==1) return 0;
        if(!((key[i]>='a' && key[i]<='z') || (key[i]>='A' && key[i]<='Z'))) return 0;
    }
    return 1;
}

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key=argv[1];
    if(verif(key)==0)
    {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    upper(key);

    string plain=get_string("plaintext:  ");

    printf("ciphertext: ");
    for(int i=0;i<strlen(plain);i++)
    {
        char c=plain[i];
        if(c>='A' && c<='Z')
        {
            int pos=c-'A';
            printf("%c",key[pos]);
        }
        else if(c>='a' && c<='z')
        {
            int pos=c-'a';
            char mapped=key[pos];
            if (mapped>='A' && mapped<='Z') mapped=mapped+32;
            printf("%c",mapped);
        }
        else
        {
            printf("%c",c);
        }
    }
    printf("\n");
    return 0;
}
