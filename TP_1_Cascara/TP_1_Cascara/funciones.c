
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "funciones.h"
#include <math.h>


void funcionSuma (float numA, float numB)
{
    float suma;
    suma=numA+numB;
    printf("el resultado de la suma es: %f\n",suma);
    getche();

}

void funcionResta(float numA, float numB)
{
    float resta;
    resta=numA-numB;
    printf("el resultado de la resta es: %f\n",resta);
    getche();

}
void funcionMultiplicacion(float numA, float numB)
{
    float multiplicacion;
    multiplicacion=numA*numB;
    printf("el resultado de la division es: %f",multiplicacion);
    getche();

}
void funcionDivision(float numA, float numB)
{
    float division;
    if(numB==0)
    {
        system("cls");
        printf("no esta definida la division por 0");
    }else{
    fflush( stdin );
    division=numA/numB;
    printf("el resultado de la division es: %f",division);
    }
}
void funcionFactorial (float numA)
{
    long long int acumuladorFactorial=1;
    int i;
    int auxiliarNumA;

    auxiliarNumA=numA;

    if(numA<0)
        {
            printf("NO ESTA DEFINIDA EL FACTORIAL DE NUMERO NEGATIVOS!\n");
            printf("Presione un tecla para seguir...");
        }else
            {
                if(numA==0)
                {
                    printf("El valor del factorial es:1");
                    printf("Presione un tecla para seguir...");
                }else
                    {
                        if(numA-auxiliarNumA!=0)
                        {
                            printf("NO ESTA DEFINIDO EL FACTORIAL DE NUMERO DECIMALES!\n");
                            printf("Presione un tecla para seguir...");
                        }else
                            {

                                    for(i=1;i<=numA;i++)
                                    {
                                       acumuladorFactorial=acumuladorFactorial*i;
                                    }
                                    printf("\nel valor del factorial es: %d\n",acumuladorFactorial);
                            }
                    }
            }
    getche();
}

void limitOpcion (int opcion,int opcionSuperior,int opcionInferior)
{
    while(opcion<opcionInferior || opcion>opcionSuperior)
    {

        printf("Ingrese una opcion entre %d y %d ",opcionInferior, opcionSuperior);
        break;
    }

}
