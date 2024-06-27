#include<stdio.h>
int sadness ( int l[], int r )
{
    for ( int a = 0; a <= r / 2; a++ )
        if ( l[a] != l[r - 1 - a])
            return 1;
    return 0;
}
int main()
{
    int n = 10, t[] = {1, 9, 82, 7, 911, 91, 7, 82, 9, 1};
    if (!sadness ( t, n ))
        printf (" the array is palindrome");
    else
        printf (" this array ain' no palindrome");
    return 0;
}
