#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int l[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l[i]);
    }

    int freq[5] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = l[i];
        freq[val]++;
    }

    
   
    for (int i = 0; i < 6; i++)
    {
        printf("%d -> = %d\n",i, freq[i]);
    }
}