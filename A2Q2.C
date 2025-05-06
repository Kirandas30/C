#include <stdio.h>
void Display();
int main()
{
    double tot_bakingtime = 0;
    char Type;
    Display();
    scanf("%c", &Type);
    int M;
    scanf("%d", &M);
    int D;
    scanf("%d", &D);
    if (Type == 'W')
    {
        tot_bakingtime += 15.0 + 60.0 + 18.0 + 20.0 + (2.0 / 60);
        if (M == 0)
        {
            printf("Baking Time: %.2f ", tot_bakingtime);
        }
        else if (M == 1)
        {
            if (D == 0)
            {
                tot_bakingtime += 75 + (50.0 / 100 * 45) + 45 + 30;
                printf("Baking Time: %.2f", tot_bakingtime);
            }
            else
            {
                tot_bakingtime += 75 + 45 + 30;
                printf("Baking Time: %.2f", tot_bakingtime);
            }
        }
    }
    else if (Type == 'S')
    {
        tot_bakingtime += 20 + 60 + 33 + 20 + (2.0 / 60);
        if (M == 0)
        {
            printf("Baking Time: %.2f", tot_bakingtime);
        }
        else if (M == 1)
        {
            if (D == 0)
            {
                tot_bakingtime += 75 + (50.0 / 100 * 35) + 35 + 30;
                printf("Baking Time: %.2f", tot_bakingtime);
            }
            else
            {
                tot_bakingtime += 75 + 35 + 30;
                printf("Baking Time: %.2f", tot_bakingtime);
            }
        }
    }

    return 0;
}
void Display()
{
    printf("Enter the Type of bread W for White and S for Sweet: ");
    printf("Enter wheather the Baking is manual(0/1): ");
    printf("Enter if the Loaf size is double (0/1): ");
}