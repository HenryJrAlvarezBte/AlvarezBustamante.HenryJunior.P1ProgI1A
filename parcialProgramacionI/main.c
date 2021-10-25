#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 5

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}Notebook;

float precioDescuento(float* pPrecioProd);
int contarCaracteres(char cadenaChar[], char letra);
int ordenarMarcaPrecio(Notebook marcaArr[],Notebook precioF,Notebook idArr,Notebook proceArr[],int tam,int tamID, int criterio);

int main()
{
    float precioProd=1100.5;
    char palabra[20]="BienvenidBB";

    Notebook lista[TAM]=
    {
        (1000,"cuarta","intel",11250.50),
        (1000,"segunda","amd",20550.50),
        (1000,"cuarta","intel",13250.50),
        (1000,"tercera","amd",25250.50),
        (1000,"cuarta","amd",41250.50)
    };

    printf("%.2f\n\n",precioDescuento(&precioProd));

    printf("%d",contarCaracteres(palabra,'b'));
    /*
    ordenarMarcaPrecio(Notebook.marca,Notebook.precio,Notebook.id,Notebook.procesador,20,TAM,1);
    printf("      *** LISTA NOTEBOOKS ***\n\n");
    printf("ID       PROCESADOR        MARCA         PRECIO\n\n");
    for(int i=0;i<TAM;i++){
        printf("%4d          %10s            %10s             %.2f\n",Notebook.id,Notebook.procesador,Notebook.marca,Notebook.precio);
    }
    */
    return 0;
}

float precioDescuento(float* pPrecioProd){

    float precioFinal;

    precioFinal= *pPrecioProd - (*pPrecioProd * 5/100);


    return precioFinal;
}

int contarCaracteres(char cadenaChar[], char letra){
    int control;
    int contarChar=0;


    control=strlen(cadenaChar);

    for(int i=0;i<control;i++){
        cadenaChar[i]=tolower(cadenaChar[i]);
    }
    for(int i=0;i<control;i++){

        if(cadenaChar[i]==letra){
            contarChar++;
        }
    }
    return contarChar;
}

int ordenarMarcaPrecio(Notebook marcaArr[],Notebook precioF,Notebook idArr,Notebook proceArr[],int tam,int tamID, int criterio)
{
    int todoOk=0;
    char aux[tam];
    int aux1[tamID];
    float aux2[tamID];
    if(marcaArr!=NULL&&precioF>0&&tam>0&&(criterio==0||criterio==1))
    {
        if(!criterio)
        {
            for(int i=0; i<tam-1; i++)
            {
                for(int j=i+1; j<tam; j++)
                {
                    if(marcaArr[i]>marcaArr[j])
                    {
                        aux=marcaArr[i];
                        marcaArr[i]=marcaArr[j];
                        marcaArr[j]=aux;

                        aux2=precioF[i];
                        precioF[i]=precioF[j];
                        precioF[j]=aux2;

                        aux1=idArr[i];
                        idArr[i]=idArr[j];
                        idArr[j]=aux1;

                        aux=proceArr[i];
                        proceArr[i]=proceArr[j];
                        proceArr[j]=aux;

                        for(int i=0;i<tam;i++){
                                for(int j=i+1;j<tam;j++){
                                    if(marcaArr[i]==marcaArr[j]){
                                        if(!criterio)
                                        {
                                            for(int i=0; i<tam-1; i++)
                                            {
                                                for(int j=i+1; j<tam; j++)
                                                {
                                                    if(precioF[i]>precioF[j])
                                                    {
                                                        aux=precio[i];
                                                        precioF[i]=precioF[j];
                                                        precioF[j]=aux;

                                                        aux=marcaArr[i];
                                                        marcaArr[i]=marcaArr[j];
                                                        marcaArr[j]=aux;

                                                        aux1=idArr[i];
                                                        idArr[i]=idArr[j];
                                                        idArr[j]=aux1;

                                                        aux=proceArr[i];
                                                        proceArr[i]=proceArr[j];
                                                        proceArr[j]=aux;
                                                    }
                                                }
                                            }
                                        }
                                        else if(criterio)
                                        {
                                            for(int i=0; i<tam-1; i++)
                                            {
                                                for(int j=i+1; j<tam; j++)
                                                {
                                                    if(precioF[i]<precioF[j])
                                                    {
                                                        aux=precio[i];
                                                        precioF[i]=precioF[j];
                                                        precioF[j]=aux;

                                                        aux=marcaArr[i];
                                                        marcaArr[i]=marcaArr[j];
                                                        marcaArr[j]=aux;

                                                        aux1=idArr[i];
                                                        idArr[i]=idArr[j];
                                                        idArr[j]=aux1;

                                                        aux=proceArr[i];
                                                        proceArr[i]=proceArr[j];
                                                        proceArr[j]=aux;
                                                    }
                                                }
                                            }
                                        }

                                    }
                                }

                        }
                    }
                }
            }
        }
        else if(criterio)
        {
            for(int i=0; i<tam-1; i++)
            {
                for(int j=i+1; j<tam; j++)
                {
                    if(marcaArr[i]<marcaArr[j])
                    {
                        aux=marcaArr[i];
                        marcaArr[i]=marcaArr[j];
                        marcaArr[j]=aux;

                        aux2=precioF[i];
                        precioF[i]=precioF[j];
                        precioF[j]=aux2;

                        aux1=idArr[i];
                        idArr[i]=idArr[j];
                        idArr[j]=aux1;

                        aux=proceArr[i];
                        proceArr[i]=proceArr[j];
                        proceArr[j]=aux;

                        for(int i=0;i<tam;i++){
                                for(int j=i+1;j<tam;j++){
                                    if(marcaArr[i]==marcaArr[j]){
                                        if(!criterio)
                                        {
                                            for(int i=0; i<tam-1; i++)
                                            {
                                                for(int j=i+1; j<tam; j++)
                                                {
                                                    if(precioF[i]>precioF[j])
                                                    {
                                                        aux=precio[i];
                                                        precioF[i]=precioF[j];
                                                        precioF[j]=aux;

                                                        aux=marcaArr[i];
                                                        marcaArr[i]=marcaArr[j];
                                                        marcaArr[j]=aux;

                                                        aux1=idArr[i];
                                                        idArr[i]=idArr[j];
                                                        idArr[j]=aux1;

                                                        aux=proceArr[i];
                                                        proceArr[i]=proceArr[j];
                                                        proceArr[j]=aux;
                                                    }
                                                }
                                            }
                                        }
                                        else if(criterio)
                                        {
                                            for(int i=0; i<tam-1; i++)
                                            {
                                                for(int j=i+1; j<tam; j++)
                                                {
                                                    if(precioF[i]<precioF[j])
                                                    {
                                                        aux=precio[i];
                                                        precioF[i]=precioF[j];
                                                        precioF[j]=aux;

                                                        aux=marcaArr[i];
                                                        marcaArr[i]=marcaArr[j];
                                                        marcaArr[j]=aux;

                                                        aux1=idArr[i];
                                                        idArr[i]=idArr[j];
                                                        idArr[j]=aux1;

                                                        aux=proceArr[i];
                                                        proceArr[i]=proceArr[j];
                                                        proceArr[j]=aux;
                                                    }
                                                }
                                            }
                                        }

                                    }
                                }

                        }
                    }
                }
            }
        }
        todoOk=1;
    }
    return todoOk;
}
