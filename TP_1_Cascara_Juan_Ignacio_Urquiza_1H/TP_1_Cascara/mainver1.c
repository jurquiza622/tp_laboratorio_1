#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>



int main()
{
    char seguir='s';
    int opcion=0;
    int numA;
    int numB;
    int resultado;
    int flagA=0;
    int flagB=0;

    while(seguir=='s')
    {

        while(flagA==0 && flagB==0)
            {

                printf("1- Ingresar 1er operando (A=x)\n");
                printf("2- Ingresar 2do operando (B=y)\n");
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);



                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese numero A: ");
                        scanf("%d", &numA);
                        flagA=1;
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%d", &numB);
                        flagB=1;
                        system("cls");
                        break;
                    case 9:
                        seguir= 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;

                    default:
                        printf("\nAntes de comenzar debe ingresar los valores de interes\n");
                        getche();
                        system("cls");
                        break;
                }
            }

        while(flagA==1 && flagB==0)
        {
                system("cls");
                printf("1- Ingresar 1er operando (A= %d)\n",numA);
                printf("2- Ingresar 2do operando (B=y)\n");
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);
                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese el numero A: ");
                        scanf("%d", &numA);
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%d", &numB);
                        flagB=1;
                        system("cls");
                        break;
                   case 9:
                        seguir = 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;
                    default:
                        printf("\nAntes de comenzar debe ingresar los valores de interes\n");
                        getche();
                        system("cls");
                        break;
                }
        }


        while(flagA==1 && flagB==1)
        {
                system("cls");
                printf("1- Ingresar 1er operando (A= %d)\n",numA);
                printf("2- Ingresar 2do operando (B= %d)\n",numB);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);

                while(opcion==5 && numB==0)
                {
                    system("cls");
                    printf("\nerror, no es posible dividir por cero, por favor elija otra opcion o cambie el valor de B\n");
                    printf("1- Ingresar 1er operando (A= %d)\n", numA);
                    printf("2- Ingresar 2do operando (B= %d)\n", numB);
                    printf("3- Calcular la suma (A+B)\n");
                    printf("4- Calcular la resta (A-B)\n");
                    printf("5- Calcular la division (A/B)\n");
                    printf("6- Calcular la multiplicacion (A*B)\n");
                    printf("7- Calcular el factorial (A!)\n");
                    printf("8- Calcular todas las operacione\n");
                    printf("9- Salir\n");
                    printf("ingresar opcion: ");
                    scanf("%d",&opcion);

                }
                while(opcion==7 && numA<0)
                {
                    system("cls");
                    printf("\n\nerror, la operacion factorial solo esta definida para numeros enteros positivos, por favor selecciones otra operacion o cambie el valor de A\n\n");
                    printf("1- Ingresar 1er operando (A= %d)\n", numA);
                    printf("2- Ingresar 2do operando (B= %d)\n", numB);
                    printf("3- Calcular la suma (A+B)\n");
                    printf("4- Calcular la resta (A-B)\n");
                    printf("5- Calcular la division (A/B)\n");
                    printf("6- Calcular la multiplicacion (A*B)\n");
                    printf("7- Calcular el factorial (A!)\n");
                    printf("8- Calcular todas las operacione\n");
                    printf("9- Salir\n");
                    printf("ingresar opcion: ");
                    scanf("%d",&opcion);

                }
                switch(opcion)
                {

                    case 3:
                        system("cls");
                        resultado=funcionSuma(numA,numB);
                        printf("el resultado de la suma es: %d\n",resultado);

                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        seguir = 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;
                }
        }
        while(flagA==0 && flagB==1)
        {
                system("cls");
                printf("1- Ingresar 1er operando (A=X)\n");
                printf("2- Ingresar 2do operando (B= %d)\n",numB);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);

                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese el numero A: ");
                        scanf("%d", &numA);
                        flagA=1;
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%d", &numB);
                        system("cls");
                        break;
                   case 9:
                        seguir = 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;
                    default:
                        printf("\nAntes de comenzar debe ingresar los valores de interes\n");
                        getche();
                        system("cls");
                        break;
                }

        }





    }
    return 0;
}
