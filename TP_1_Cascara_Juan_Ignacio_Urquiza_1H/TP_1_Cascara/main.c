#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <math.h>



int main()
{
    char seguir='s';
    int opcion=0;
    float numA;
    float numB;
    int flagA=0;
    int flagB=0;


    while(seguir=='s')
    {
        //CREO UN SISTEMA DE BANDERAS QUE REPRESENTA LAS DIVERSAS POSIBILIDADES DE INGRESO//
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

                limitOpcion(opcion,9,1);


                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese numero A: ");
                        scanf("%f", &numA);
                        flagA=1;
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%f", &numB);
                        flagB=1;
                        system("cls");
                        break;
                    case 9:
                        //EL PROGRAMA CAMBIA EL VALOR DE LAS BANDERAS PARA SALIR DE CUALQUIER BUCLE POSIBLE Y DEL BUCLE PRINCIPAL//
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
                printf("1- Ingresar 1er operando (A= %f)\n",numA);
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

                limitOpcion(opcion,9,1);

                switch(opcion)
                {
                    //AL CARGAR CADA VARIABLE SE LIBERA LA BANDERA, INCLUYO LAS OPERACIONES DENTRO DEL DEFAULT PARA EVITAR SU USO INADECUADO//
                    //SE PERMITE SOBREESCRIBIR LA VARIABLE A, ESTABLECER LA VARIABLE B, REALIZAR EL FACTORIAL A Y SALIR DEL SISTEMA//
                    case 1:
                        system("cls");
                        printf("ingrese el numero A: ");
                        scanf("%f", &numA);
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%f", &numB);
                        flagB=1;
                        system("cls");
                        break;
                    case 7:
                        system("cls");
                        funcionFactorial(numA);
                        break;
                    case 9:
                        seguir = 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;
                    default:
                        //MENSAJE DE ERROR ANTES DE ESTABLECER LA VARIABLE//
                        printf("\nAntes de comenzar debe ingresar los valores de interes\n");
                        getche();
                        system("cls");
                        break;
                }
        }



        while(flagA==0 && flagB==1)
        {
                system("cls");
                printf("1- Ingresar 1er operando (A=X)\n");
                printf("2- Ingresar 2do operando (B= %f)\n",numB);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);

                limitOpcion(opcion,9,1);

                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese el numero A: ");
                        scanf("%f", &numA);
                        flagA=1;
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%f", &numB);
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
        {//AQUI SE VERIFICA LA CARGA EFECTIVA DE LAS VARIABLES Y SE HABILITAN TODAS LAS OPERACIONES//
                system("cls");
                printf("1- Ingresar 1er operando (A= %f)\n",numA);
                printf("2- Ingresar 2do operando (B= %f)\n",numB);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingresar opcion: ");
                scanf("%d",&opcion);

                limitOpcion(opcion,9,1);

                switch(opcion)
                {
                    case 1:
                        system("cls");
                        printf("ingrese numero A: ");
                        scanf("%f", &numA);
                        flagA=1;
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        printf("ingrese el numero B: ");
                        scanf("%f", &numB);
                        flagB=1;
                        system("cls");
                        break;

                    case 3:
                        system("cls");
                        funcionSuma(numA,numB);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 4:
                        system("cls");
                        funcionResta(numA,numB);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 5:
                        system("cls");
                        funcionDivision(numA,numB);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 6:
                        system("cls");
                        funcionMultiplicacion(numA,numB);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 7:
                        system("cls");
                        funcionFactorial(numA);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 8:
                        system("cls");
                        funcionSuma(numA,numB);
                        funcionResta(numA,numB);
                        funcionMultiplicacion(numA,numB);
                        funcionDivision(numA,numB);
                        funcionFactorial(numA);
                        printf("\npresiones una tecla para seguir...\n");
                        getche();
                        system("cls");
                        break;
                    case 9:
                        seguir = 'n';
                        flagA=2;
                        flagB=2;
                        printf("usted ha salido del sistema...");
                        break;
                }
        }



    }
    return 0;
}
