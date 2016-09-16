#include<stdlib.h>
int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
int main()
{
    int * pt = arr;
    printf("0x%p\n",&arr[0]);
    printf("0x%p\n",&pt);
    printf("0x%p\n",pt);
    printf("%d\n",(*pt));
    printf("%d\n",*pt + 3);
    printf("%d\n",pt[3]);
    printf("0x%p\n",&*pt);
    printf("0x%p\n",*&pt);
    printf("%d\n",*(pt+3));
    printf("%d\n",*pt++);
    printf("%d\n",*(pt++));
    printf("%d\n",(*pt)++);
    printf("%d\n",++(*pt));


    return 0;
}
