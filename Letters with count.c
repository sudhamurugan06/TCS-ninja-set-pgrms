#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int l=strlen(s)-1;
    char b[l];
    int k=0;
    for(int i=0;i<=l;i++){
    bool app=false;
    for(int j=0;j<i;j++){
    if(s[i]==s[j]){
    app=true;
    break;
    }
}
if(!app){
b[k++]=s[i];}
}
int c=0;ca[k];
for(int i=0;i<k;i++)
{
for(int j=0;j<=l;j++){
if(b[i]==s[j]){
c++;}}ca[i]=c;
c=0;}
for(int i=0;i<k;i++)
{printf("%c%d",b[i],ca[i]);}}
