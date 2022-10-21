// nuevo intento1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <cstring>
#include <stdlib.h>


using namespace std;

struct mefisto
{
    string nombre = " ", descripcion = " ", genero = " ", clasificacion = " ";
    int  numart = 0, n = 0, anio = 0;
    //n=numero de serie
    float preciou = 0, iva = 0, total = 0;
};

//tuve el error de declarar mefisto me eliminaba los datos previos la voy a declarar como variable global
mefisto compras[3];

int main()
{
    //opc general menu/ opc2 clasificacion/ opc3 genero/opc4 genero1.1/opc5/opc6lista de articulos
    int opc, buscar, opc2, opc3, opc4, opc5, opc6;
    do {
        system("cls");
        printf("\t***MEFISTO SHOP***\n");
        printf("\t***SELECCIONE UNA OPCION***\n");
        printf("1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n");
        scanf_s("%d", &opc);

        switch (opc)
        {
        case 1://agregar articulo
            for (int i = 0; i < 3; i++)
            {

                compras[i].numart = 1010001 + i;
                printf("Numart:%d \n", compras[i].numart);
                int salida = 1;
                do
                {
                    //no me imprime el prjmer digito
                    printf("ingrese Numero de art \n");
                    scanf_s("%d", &compras[i].numart);
                } while (compras[i].numart == compras[i - 1].numart || compras[i].numart == compras[i - 2].numart);

                //Datos              

                printf("ingrese el nombre\n");
                cin.ignore();
                getline(cin, compras[i].nombre);

                printf("ingrese el descripcion\n");
                //cin.ignore();
                getline(cin, compras[i].descripcion);


                //uso de otro switch
                printf("Escoga la clasificacion:\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos +18\n");
                scanf_s("%d", &opc2);
                switch (opc2)
                {
                case 1:
                    compras[i].clasificacion = "Todos";
                    //system("pause");
                    break;
                case 2:
                    compras[i].clasificacion = "Adolescentes";
                    //system("pause");
                    break;
                case 3:
                    compras[i].clasificacion = "Maduro";
                    //system("pause");
                    break;
                case 4:
                    compras[i].clasificacion = "Adultos +18";
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
                    compras[i].genero = "Accion";
                    //system("pause");
                    break;
                case 2:
                    compras[i].genero = "Arcade";
                    //system("pause");
                    break;
                case 3:
                    compras[i].genero = "Estrategia";
                    //system("pause");
                    break;
                case 4:
                    compras[i].genero = "Simulacion";
                    //system("pause");
                    break;
                case 5:
                    compras[i].genero = "Deportivo";
                    //system("pause");
                    break;
                default:
                    printf("ingrese una opcion Valida");
                    break;

                }

                printf("ingrese el a%co de lanzamiento:\n", 164);
                scanf_s("%d", &compras[i].anio);

                //gastos
                printf("ingrese el subtotal \n");
                scanf_s("%f", &compras[i].preciou);
                compras[i].iva = compras[i].preciou * .16;
                compras[i].total = compras[i].preciou + compras[i].iva;//precio total
                system("pause");
                system("cls");
            }
            break;
        case 2://midificar articulo
            break;
        case 3://eliminar

            break;
        case 4://lista de articulos usando do while
            do {
                system("cls");
                printf("1.-Numero de articulo\n 2.-Lista vigente\n 3.-Lista por Genero\n 4.-Lista por Clasificacion\n5.-Salir\n");
                scanf_s("%d", &opc6);
                system("cls");
                switch (opc6)
                {
                case 1: //Numero de ariculo
                    printf("ingrese el numero de articulo\n");
                    scanf_s("%d", &buscar);
                    //imprimirlista
                    for (int i = 0; i < 3; i++)
                    {
                        if (buscar == compras[i].numart)
                        {
                            printf("Codigo de barras:%d \n", compras[i].n);
                            printf("Numero de articulo:%d \n", compras[i].numart);
                            printf("nombre:%s \n", compras[i].nombre.c_str());
                            printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                            printf("genero: %s \n", compras[i].genero.c_str());
                            printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                            printf("a%co de lanzamiento %d \n", compras[i].anio, 164);
                            //gastos
                            printf("precio unitario:%f  \n", compras[i].preciou);
                            printf("iva: %f \n", compras[i].iva);
                            printf("total %f \n", compras[i].total);

                        }
                    }
                    system("pause");
                    break;

                case 2://listas vigentes
                    for (int i = 0; i < 3; i++)
                    {
                        if (compras[i].numart != 0)
                        {
                            printf("Codigo de barras:%d \n", compras[i].n);
                            printf("Numero de articulo:%d \n", compras[i].numart);
                            printf("nombre:%s \n", compras[i].nombre.c_str());
                            printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                            printf("genero: %s \n", compras[i].genero.c_str());
                            printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                            //gastos
                            printf("precio unitario:%f  \n", compras[i].preciou);
                            printf("iva: %f \n", compras[i].iva);
                            printf("total %f \n", compras[i].total);

                        }
                    }
                    system("pause");
                    break;

                case 3://Genero
                    printf("Escoga el genero:\n 1.-Accion\n 2.-Arcade\n 3.-Estrategia\n 4.-Simulacion\n 5.-Deportivo\n");
                    scanf_s("%d", &opc4);
                    for (int i = 0; i < 3; i++)
                    {
                        switch (opc4)
                        {
                        case 1:
                            if (compras[i].genero == "Accion")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);

                            }
                            system("pause");
                            break;
                        case 2:
                            if (compras[i].genero == "Arcade")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 3:
                            if (compras[i].genero == "Estrategia")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 4:
                            if (compras[i].genero == "Simulacion")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 5:
                            if (compras[i].genero == "Deportivo")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
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

                case 4://clasificacion
                    printf("Escoga la clasificacion:\n 1.-Todos\n 2.-Adolescentes\n 3.-Maduro +17\n 4.-Adultos +18\n");
                    scanf_s("%d", &opc5);
                    for (int i = 0; i < 3; i++)
                    {
                        switch (opc5)
                        {
                        case 1://todos
                            if (compras[i].clasificacion == "Todos")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 2://Adolecentes
                            if (compras[i].clasificacion == "Adolecentes")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 3://maduros
                            if (compras[i].clasificacion == "Maduro")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);
                            }
                            system("pause");
                            break;
                        case 4://Adultos
                            if (compras[i].clasificacion == "Adultos")
                            {
                                printf("Codigo de barras:%d \n", compras[i].n);
                                printf("Numero de articulo:%d \n", compras[i].numart);
                                printf("nombre:%s \n", compras[i].nombre.c_str());
                                printf("Descripcion:%s \n", compras[i].descripcion.c_str());
                                printf("genero: %s \n", compras[i].genero.c_str());
                                printf("casificacion: %s \n", compras[i].clasificacion.c_str());
                                //gastos
                                printf("precio unitario:%f  \n", compras[i].preciou);
                                printf("iva: %f \n", compras[i].iva);
                                printf("total %f \n", compras[i].total);

                            }
                            system("pause");
                            break;

                        default:
                            printf("La opcion no existe \n");
                            //system("pause");
                            break;
                        }
                    }
                    //system("pause");
                    break;
                case 5:
                    printf("Saliendo... \n");
                    system("pause");
                    break;

                }

            } while (opc6 != 5);
            //system("cls");
            break;

        case 5://limpiar pantalla
            system("cls"); //la diferencia del clean es que este se usa en web y cls en visual
            return main();
            break;

        case 6://Salir
            printf("\t ***Gracias por consultar la_casa_de_mefisto***\n");
            system("pause");
            break;

        default:
            cout << "\t***POR FAVOR INGRESE UNA OPCION VALIDA***\n:";
            return main();
        }

    } while (opc != 5);
    system("pause");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
