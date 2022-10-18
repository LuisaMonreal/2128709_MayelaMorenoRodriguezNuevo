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
//al compilar tuve errores de me salia en advertiencias que mis variables no estaban indicializadas 
//para indicializar string es el vacio string variable=" " cuando es Char variable []
//volvi a tener mi error al imprimir igua que en primer avance al usar el getline no me imprimia el primer caracter 
struct mefisto
{
    string nombre=" ", descripcion=" ", genero=" ", clasificacion=" ";
    int  numart=0, n=0, anio=0;
    //n=numero de serie
    float preciou=0, iva=0, total=0;
};

//tuve el error de declarar mefisto me eliminaba los datos previos la voy a declarar como variable global
mefisto compras[3];

int main()
{
    
    int opc, buscar;
        do {
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
                          printf("ingrese Numero de art \n");
                          scanf_s("%d", &compras[i].numart);
                      } while (compras[i].numart == compras[i - 1].numart || compras[i].numart == compras[i - 2].numart);

                      //Datos
                      //volvi a tener el error de que se comia la primer letraaa a causa del gline


                      printf("ingrese el nombre\n");
                      cin.ignore();
                      getline(cin, compras[i].nombre);

                      printf("ingrese el descripcion\n");
                      //cin.ignore();
                      getline(cin, compras[i].descripcion);

                      printf("ingrese el genero\n");
                      //cin.ignore();
                      getline(cin, compras[i].genero);

                      printf("ingrese el casificacion\n");
                      //cin.ignore();
                      getline(cin, compras[i].clasificacion);

                      printf("ingrese el a%co de lanzamiento\n",164);
                      scanf_s("%d", & compras[i].anio);
                      //no me deja ingresar el año me marca error

                      //gastos
                      printf("ingrese el subtotal \n");
                      scanf_s("%f", &compras[i].preciou);
                      compras[i].iva = compras[i].preciou * .16;
                      compras[i].total = compras[i].preciou + compras[i].iva;

                      system("cls"); //tengo duda si poner return y cls
                      //return() ya no se pone porque esta dentro de un do while
                  }
                break;
              case 2://midificar articulo
                break;
              case 3://eliminar
                break;
              case 4://lista de articulos

                  //usamos otro switch

                  //tengo problema en mi lista de arrticulos ya que solo me aparece un articulo y no los 3

                  int opc2;
                  printf("1.-Numero de articulo\n2.-Lista vigente\n");
                  scanf_s("%d", &opc2);
                  if (opc2 == 1)
                  {
                      printf("ingrese el numero de articulo");
                      scanf_s("%d", &buscar);
                      //imprimirlista
                      for (int i = 0; i < 3; i++)
                      {
                          if (buscar == compras[i].numart)
                          {
                              printf("Codigo de barras:%d \n", compras[i].n);

                              printf("Numero de articulo:%d \n", compras[i].numart);

                              printf("nombre:%s \n",compras[i].nombre.c_str());
                              
                              
                              printf("Descripcion:%s \n",compras[i].descripcion.c_str());
                       

                              printf("genero: %s \n",compras[i].genero.c_str());
                             
                              printf("casificacion: %s \n",compras[i].clasificacion.c_str());

                              printf("a%co de lanzamiento %d \n", compras[i].anio,164);
                              
                              //gastos
                              printf("precio unitario:%f  \n",compras[i].preciou);

                              printf("iva: %f \n", compras[i].iva);

                              printf("total %f \n", compras[i].total);
                              
                          }
                      }
                  }
                  else
                      {
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
                  }
                  return main();

                break;
              case 5://limpiar pantalla
                  system("cls"); //la diferencia del clean es que este se usa en web y cls en visual
                  return main();
                break;
              case 6://Salir
                  printf("\t ***Gracias por consultar la_casa_de_mefisto***\n");
                break;

              default:
                cout << "\t***POR FAVOR INGRESE UNA OPCION VALIDA***\n:";
                return main();
            }

        }
    while(opc != 5);
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
