#include <stdio.h>
main(){

int tree[3]={5,2,3},i;
for(i = 0;i < 3;i++){
    printf("Node = %d\n",tree[i]);
    if(2*i + 1 < 3){
        printf("Left = %d\n",tree[2*i + 1]);
    }
     if(2*i + 2 < 3){
        printf("Right = %d\n",tree[2*i + 2]);
     }
     printf("\n");
}
return 0;
}
