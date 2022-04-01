#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c;

    printf("Informe os coeficientes da equacao:\n");
    scanf("%f, %f, %f", &a, &b, &c);

float delta, x1, x2;

    delta=(pow(b, 2)-4*a*c);

    if(delta<0)
        {
        printf("Essa equacao nao possui raizes reais\n");
        }
    else{
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;

            printf("As Raizes da equacao sao:\n");
            printf("X = %f\n", x1);
            printf("X' = %f\n", x2);
        }
    getch();
return 0;
}
