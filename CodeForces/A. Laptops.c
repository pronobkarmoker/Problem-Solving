#include<stdio.h>

int main(){
    int t,m,n;

    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%d",&m);
        scanf("%d",&n);
        if(m<n){
            printf("Happy Alex");;
            return 0;
        }
    }
    printf("Poor Alex");
 
    return 0;
    
}