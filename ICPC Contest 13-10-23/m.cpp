#include <stdio.h>
int main()
{
    int T, i;
    int o = 0;
    int b = 0;
    int r = 0;
    int w = 0;

    scanf("%d", &T);
    while (T--)
    {
        char S[60];
        scanf("%s", S);

        for (i = 0; S[i]!='\0'; ++i)
            if (S[i] == 'w')
            {
                w++;
                b++;
            }
            else
            {
                r += S[i] - '0';
                b++;
            }

        if (b == 6)
        {
            o++;
            b = 0;
        }
        printf("%d.%d Over (s) %d Run(s) %d Wicket(s).\n", o, b, r, w);
    }

    

    return 0;
}