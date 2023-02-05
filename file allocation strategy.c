#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void recursivePart(int pages[]){
    int st, len, k, c, j;
    printf("Enter the index of the starting block and its length: ");
    scanf("%d%d", &st, &len);
    k = len;
    if (pages[st] == 0){
        for (j = st; j < (st + k); j++){
            if (pages[j] == 0){
                pages[j] = 1;
                printf("%d------>%d\n", j, pages[j]);
            }
            else {
                printf("The block %d is already allocated \n", j);
                k++;
            }
        }
    }
    else
        printf("The block %d is already allocated \n", st);
    printf("Do you want to enter more files? \n");
    printf("Enter 1 for Yes, Enter 0 for No: ");
    scanf("%d", &c);
    if (c==1)
        recursivePart(pages);
    else
        exit(0);
    return;
}
int main(){
    int pages[50],i, p, a;
    for ( i = 0; i < 50; i++)
        pages[i] = 0;
    printf("Enter the number of blocks already allocated: ");
    scanf("%d", &p);
    printf("Enter the blocks already allocated: ");
    for (i = 0; i < p; i++){
        scanf("%d", &a);
        pages[a] = 1;
    }
    recursivePart(pages);
    getch();
    return 0;
}


OUTPUT:
Enter the number of blocks already allocated: 4
Enter the blocks already allocated: 3
5
7
9
Enter the index of the starting block and its length: 1
6
1------>1
2------>1
The block 3 is already allocated
4------>1
The block 5 is already allocated
6------>1
The block 7 is already allocated
8------>1
The block 9 is already allocated
10------>1
Do you want to enter more files?
Enter 1 for Yes, Enter 0 for No: NO
