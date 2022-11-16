// Mefisto shop proyecto final.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <cstring>
#include <stdlib.h>//new delete punteros
#include <fstream>//archivos
using namespace std;

void alta();
void eliminar();
void lista();
void modificar();
void archivos();

int* item,serie, * lanzamiento, registro;
int n,desicion;
string* nombre, * descripcion, * caracteristicas, * genero, * clasificacion;
float* subtotal, * iva, * total;

int main()
{
    int opc;
    system("cls");
    printf("\t***MEFISTO SHOP***\n");
    printf("\t***SELECCIONE UNA OPCION***\n");
    printf("1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n");
    scanf_s("%d", &opc);
    switch (opc)
    {
    case 1://agregar articulo
        alta();
        system("pause");
        return main();
        break;
    case 2: //modficar artículo
        //system("pause");
        modificar();
        return main();
        break;
    case 3://eliminar
        //system("pause");
        eliminar();
        return main();
        break;
    case 4://lista de articulos
        lista();
        system("pause");
        return main();
        break;
    case 5://limpiar pantalla
        system("cls"); //la diferencia del clean es que este se usa en web y cls en visual
        return main();
        break;
    case 6://salir
        archivos();
        exit(1);
        break;
    default:
        printf("intente denuevo... \n");
        return main();
        break;
    }
    system("pause");
}
void alta()
{
    
    printf("***\t ingresa el num registros que desea dar de alta***\t \n");
    scanf_s("%d", &registro);


    //uso de arreglos
    nombre = new string[registro];
    descripcion = new string[registro];
    genero = new string[registro];
    clasificacion = new string[registro];
    caracteristicas = new string[registro];//aun falta agregarlo en todos lugares
    item = new int[registro];
    lanzamiento = new int[registro];
    subtotal = new float[registro];
    iva = new float[registro];
    total = new float[registro];

    for (int i = 0; i <registro; i++)//cambiar
    {

        serie = 101+ i;//a´qui me marca error mi programa no supe de cual de las dos fimas usarla ste es el que estabv usando en estructuras porque el de arerglos no me pasaba helmi;:C
        printf("Numero de serie:%d \n", serie);
        int salida = 1;
        do
        {
            
            printf("ingrese item \n");
            scanf_s("%d", &item[i]);
        } while (item[i] == item[i - 1] || item[i] == item[i - 2]);
   
        printf(" ingrese el nombre del articulo: \n");
        cin.ignore();
        getline(cin, nombre[i]);
        
        printf("Ingrese las caracteristicas del articulo:\n");
        //cin.ignore();
        getline(cin, caracteristicas[i]);

        printf("ingrese el descripcion\n");
        //cin.ignore();
        getline(cin, descripcion[i]);


        //switch de la clasificacion y el genero
        int opc2,opc3;
        printf("Escoga la clasificacion:\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos +18\n");
        scanf_s("%d", &opc2);
        switch (opc2)
        {
           
        case 1:
            clasificacion[i] = "Todos";
            //system("pause");
            break;
        case 2:
            clasificacion[i] = "Adolescentes";
            //system("pause");
            break;
        case 3:
            clasificacion[i] = "Maduro";
            //system("pause");
            break;
        case 4:
            clasificacion[i] = "Adultos +18";
            //system("pause");
            break;
        default:
            printf("ingrese una opcion Valida");
            break;
        }
        printf("Escoga el genero:\n 1.-Accion\n 2.-Arcade\n 3.-Estrategia\n 4.-Simulacion\n 5.-Deportivo\n");
        scanf_s("%d", &opc3);
        switch (opc3)
        {
        case 1:
            genero[i] = "Accion";
            //system("pause");
            break;
        case 2:
            genero[i] = "Arcade";
            //system("pause");
            break;
        case 3:
            genero[i] = "Estrategia";
            //system("pause");
            break;
        case 4:
            genero[i] = "Simulacion";
            //system("pause");
            break;
        case 5:
            genero[i] = "Deportivo";
            //system("pause");
            break;
        default:
            printf("ingrese una opcion Valida");
            break;

        }

        printf("ingrese el a%co de lanzamiento:\n",164);//utilizarlo con el ASCII
        scanf_s("%d", &lanzamiento[i]);

        // gastos
        printf("ingrese el subtotal \n");
        scanf_s("%f", &subtotal[i]);
        iva[i] = subtotal[i] * .16;
        total[i] = subtotal[i] + iva[i];
        //system("pause");
        system("cls");

        //Preguntar si quiere dar de alta más registros
        //no me deja agregar un codigo me truena al decir que si
        /*if ((registro - 1) == i)
        {
            printf("Desea dar de alta otro registro\n");
            scanf_s("%d", &desicion);
            if (desicion == 1)
            {
                registro = registro + 1;
            }
        }*/
    }



}
void eliminar()
{

    //aqui no se que variable poner para que se elimine mi articulo porque al poner item solo iguala el item a 0 trate de poner serie pero no lo he compilado aun :c perdon ya uba paraa la escuela
    system("pause");
    int eliminar;
    printf("Ingrese el item del articulo a eliminar\n");
    scanf_s("%d", &eliminar);

    for (int i = 0; i < registro; i++)
    {
        if (eliminar == item[i])
        {
            item[i] = 0;
            printf("Eliminado... \n");
            system("pause");
        }
    }
}
void lista()
{
    int op2, buscar, opc4, opc5,bus;
    do
    {
        system("cls");

        printf("1.-Lista por Clasificacion\n 2.-Lista por Genero\n 3.-buscar por item\n 4.-Stock total\n 5.-Salir\n");
        scanf_s("%d", &op2);
        switch (op2)
        {
        case 1://clasificacion
            printf("Escoga la clasificacion:\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos +18\n");
            scanf_s("%d", &opc5);
            for (int i = 0; i < registro; i++)
            {
                switch (opc5)
                {
                case 1://todos
                    if (clasificacion[i] == "Todos")
                    {
                        if(item[i]!=0)
                        {
                      printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n", 164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    }
                    system("pause");
                    break;
                case 2://Adolecentes
                    if (clasificacion[i] == "Adolecentes")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    system("pause");
                    break;
                case 3://maduros
                    if (clasificacion[i] == "Maduro")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    system("pause");
                    break;
                case 4://Adultos
                    if (clasificacion[i] == "Adultos")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);

                    }
                }
            }


            break;
        case 2://genero
            printf("Escoga el genero:\n 1.-Accion\n 2.-Arcade\n 3.-Estrategia\n 4.-Simulacion\n 5.-Deportivo\n");
            scanf_s("%d", &opc4);
            for (int i = 0; i < registro; i++)
            {
                switch (opc4)
                {
               
                case 1:
                    if (genero[i] == "Accion")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);

                    }
                    system("pause");
                    break;
                case 2:
                    if (genero[i] == "Arcade")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    //system("pause");
                    break;
                case 3:
                    if (genero[i] == "Estrategia")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    system("pause");
                    break;
                case 4:
                    if (genero[i] == "Simulacion")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    system("pause");
                    break;
                case 5:
                    if (genero[i] == "Deportivo")
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                    }
                    system("pause");
                    break;
                default:
                    printf("La opcion no existe \n");
                    //system("pause");
                    break;
                }
            }


            break;
        case 3://item

            printf("ingrese el numero de articulo\n");
            scanf_s("%d", &buscar);
            //imprimir lista
            for (int i = 0; i < registro; i++)
            {
                if (buscar == item[i])
                {

                    printf("Numero de articulo:%d \n", item[i]);
                    printf("nombre:%s \n", nombre[i].c_str());
                    printf("Descripcion:%s \n", descripcion[i].c_str());
                    printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                    printf("genero: %s \n", genero[i].c_str());
                    printf("casificacion: %s \n", clasificacion[i].c_str());
                    printf("a%co de lanzamiento \n", 164, lanzamiento[i]);
                    //gastos
                    printf("subtotal:%f  \n", subtotal[i]);
                    printf("iva: %f \n", iva[i]);
                    printf("total %f \n", total[i]);

                }
            }
            /*for (int i = 0; i < registro; i++)
            {
                if (item[i] == buscar)
                {
                    if (item[i] != 0)
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n", 164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                        //lo estamos hacienod en el meisto shopppppppp

                    }
                }
            }*/
            system("pause");
            break;
        case 4://stock total
            for (int i = 0; i < registro; i++)
            {
                if (item != 0)
                {
                    printf("Numero de articulo:%d \n", item[i]);
                    printf("nombre:%s \n", nombre[i].c_str());
                    printf("Descripcion:%s \n", descripcion[i].c_str());
                    printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                    printf("genero: %s \n", genero[i].c_str());
                    printf("casificacion: %s \n", clasificacion[i].c_str());
                    printf("a%co de lanzamiento \n",164, lanzamiento[i]);
                    //gastos
                    printf("subtotal:%f  \n", subtotal[i]);
                    printf("iva: %f \n", iva[i]);
                    printf("total %f \n", total[i]);

                }
            }
           /* for (int i = 0; i < registro; i++)
            {
                if (item[i] == buscar)
                {
                    if (item[i] != 0)
                    {
                        printf("Numero de articulo:%d \n", item[i]);
                        printf("nombre:%s \n", nombre[i].c_str());
                        printf("Descripcion:%s \n", descripcion[i].c_str());
                        printf("Caracteristicas:%s\n", caracteristicas[i].c_str());
                        printf("genero: %s \n", genero[i].c_str());
                        printf("casificacion: %s \n", clasificacion[i].c_str());
                        printf("a%co de lanzamiento \n", 164, lanzamiento[i]);
                        //gastos
                        printf("subtotal:%f  \n", subtotal[i]);
                        printf("iva: %f \n", iva[i]);
                        printf("total %f \n", total[i]);
                        //lo estamos hacienod en el meisto shopppppppp

                    }
                }
            }*/
            
            
            system("pause");
            break;
        case 5:
            break;
        default:
            printf("ingrese una opcion Valida");
            break;

        }//fin del switch
    } while (op2 != 5);
   

    //return main();
}//fin del void
void modificar()
{
    int busqueda,opcion4,opc6,opc7;

    printf("Ingrese el item del articulo:\n");
    scanf_s("%d", &busqueda);

    printf("Opcion a modificar:\n 1.Nombre\n 2.-Fecha de lanzamiento \n 3.-Clasificacion\n 4-Genero\n 5.-Caracteristicas\n 6.-Descripcion\n 7.-Precio\n 8.-Salir\n");
    scanf_s("%d", &opcion4);
    switch (opcion4)
     {
   case 1: //Nombre      
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("Ingrese el nombre del articulo:\n");
                cin.ignore();
                getline(cin, nombre[i]);

            }
        }
        break;
    case 2: //Fecha       
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("Ingrese el a%o de lanzamiento:\n", 164);
                scanf_s("%d", &lanzamiento[i]);

            }
        }
        break;
    case 3: //Clasificacion         
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("ingrese la clasificacion correcta:\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos unicamente +18\n");
                scanf_s("%d", &opc6);
                switch (opc6)
                {
                case 1:
                    clasificacion[i] = "Todos";
                    //system("pause");
                    break;
                case 2:
                    clasificacion[i] = "Adolescentes";
                    //system("pause");
                    break;
                case 3:
                    clasificacion[i] = "Maduro";
                    //system("pause");
                    break;
                case 4:
                    clasificacion[i] = "Adultos +18";
                    //system("pause");
                    break;
                default:
                    printf("ingrese una opcion Valida");
                    break; 

                }
            }
        }
        break;
    case 4://genero
       
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("ingrese el genero correcto:\n 1.-Accion\n 2.-Arcade\n 3.-Estrategia\n 4.-Simulacion\n 5.-Deportivo\n");
                scanf_s("%d", &opc7);
                switch (opc7)
                {
                case 1:
                    genero[i] = "Accion";
                    //system("pause");
                    break;
                case 2:
                    genero[i] = "Arcade";
                    //system("pause");
                    break;
                case 3:
                    genero[i] = "Estrategia";
                    //system("pause");
                    break;
                case 4:
                    genero[i] = "Simulacion";
                    //system("pause");
                    break;
                case 5:
                    genero[i] = "Deportivo";
                    //system("pause");
                    break;
                default:
                    printf("ingrese una opcion Valida");
                    break;
                }
            }
        }
        break;
    case 5://caracteristicas
       
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("ingrese la caracteristicas correctas:\n");
                scanf_s("%s", &caracteristicas[i]);
            }
        }
        break;

    case 6://descripcion
        
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("ingrese la clasificacion correcta:\n");
                scanf_s("%s", &descripcion[i]);
            }
        }
        break;
    case 7://precio
      
        for (int i = 0; i < registro; i++)
        {
            if (busqueda == item[i])
            {
                printf("ingrese la clasificacion correcta:\n");
                scanf_s("%s", &subtotal[i]);
            }
        }
        break;
    case 8://salir
        exit(1);
        break;
    default:
        printf("ingrese una opcion Valida");
        break;

    }
}
void archivos()
{
    ofstream archivo; //clase ofstream para leer archivos
    string nombrearchivo;

    nombrearchivo = "LISTA-ARTICULOS.txt";

    archivo.open(nombrearchivo.c_str(), ios::out);

    if (archivo.fail())
    {
        printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
        system("pause");
        exit(1);
    }
    archivo << "NUMERO DE ARTICULO" << "\t";
    archivo << "NOMBRE" << "\t";
    archivo << "DESCRIPCION" << "\t";
    archivo << "CARACTERISTICAS" << "\t";
    archivo << "CLASIFICACION" << "\t";
    archivo << "GENERO" << "\t";
    archivo << "FECHA DE LANZAMIENTO" << "\t";
    archivo << "SUBTOTAL" << "\t";
    archivo << "IVA" << "\t";
    archivo << "TOTAL" << "\n";
    for (int i = 0; i < registro; i++)
    {
        archivo << item[i] << "\t";
        archivo << nombre[i] << "\t";
        archivo << descripcion[i] << "\t";
        archivo << caracteristicas[i] << "\t";
        archivo << clasificacion[i] << "\t";
        archivo << genero[i] << "\t";
        archivo << lanzamiento[i] << "\t";
        archivo << subtotal[i] << "\t";
        archivo << iva[i] << "\t";
        archivo << total[i] << "\t" << "\n";
    }
    archivo.close();
}
