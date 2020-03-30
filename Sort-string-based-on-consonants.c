int main(){
int n;
scanf("%d\n",&n);
char s[n][100];
int a[n],c=0;
for(int i=0;i<n;i++){

    scanf("%s ",s[i]);
    
}
    for(int i=0;i<n;i++){
    int c=0;
    for(int j=0;j<strlen(s[i]);j++){
        if(s[i][j]!='a'&&s[i][j]!='A'&&s[i][j]!='e'&&s[i][j]!='E'&&s[i][j]!='i'&&s[i][j]!='I'&&s[i][j]!='o'&&s[i][j]!='O'&&s[i][j]!='u'&&s[i][j]!='U'){
            c++;
        }
    }
    a[i]=c;
}

for(int i=0;i<50;i++){
    for(int j=0;j<n;j++){
        if(i==a[j])
    {
    printf("%s\n",s[j]);
}
}
}
}
