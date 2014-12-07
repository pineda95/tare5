
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{

    return grafo[inicio][destino]; //retornado  el valor de la arista
}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
    if(profundidad<0)//entonces cuando  sea menor que cero se detiene
        return false;

    for(int i=0; i<5;i++)//corremos el inicio
    {
    if(grafo[i][destino]==infinito)//miramos si la pocision del grafo es igual a sin camino
        {
         if(existeCamino(grafo,i,destino,profundidad-1))//usando  recursividad para ver si hay camino
            {
                return true;
            }
        }
    }


}

int main ()
{
    evaluar();

    return 1;
}
