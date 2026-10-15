#include <stdio.h>
 main(){
    int tree[3]={10,20,30},i;
    for(i=0;i<3;i++){
        printf("Root = %d\n",tree[i]);
        printf("Left = %d\n",tree[2*i + 1]);
        printf("Right = %d\n",tree[2*i + 2]);
    }
    return 0;
}
