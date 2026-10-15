#include <stdio.h>
int main(){
    int tree[7] = {50, 30, 70};
    int height = 0;

    if (tree[0] != 0)
        height = 1;
    if (tree[1] != 0 || tree[2] != 0)
        height = 2;

}
