#include <stdio.h>
#include <string.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    
    char a[n];

    scanf("%s", a);
    int length = strlen(a);

    int summation = 0;
    for (int i = 0; i < length; i++)
    {
        
        int digit = a[i];
        int number = digit - 48;
        summation += number;
    }

    printf("%d", summation);

    
}