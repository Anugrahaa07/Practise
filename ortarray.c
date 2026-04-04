#include<stdio.h>
#include<string.h>
int main(){
    char s[50][50],temp[50];
    int i,j,n;

    printf("Enter the number of values you want too enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(s[j],s[j+1])>0){
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",s[i]);
    }
    return 0;
}