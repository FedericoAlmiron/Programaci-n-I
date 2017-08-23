#include <stdio.h>
#include <stdlib.h>

int suma(int num1,int num2);
int main()
{
    int num1, num2, rta;
    /*printf("Ingrese un numero: "); Si usamos la funcion pedirNumero borramos esto.
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);*/
    num1=pedirNumero();
    num2=pedirNumero();

    rta= suma(num1,num2);
    printf("El resultado de la suma es %d", rta);
    return 0;
}

int suma(int num1, int num2)
{
    int resp;
    resp=num1+num2;
    return resp;
}

int pedirNumero()
{
    int num;
    printf("Ingrese un numero");
    scanf("%d", &num);

    return num;
}

