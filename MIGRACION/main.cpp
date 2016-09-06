/* 
 * File:   main.cpp
 * Author: Camilo Rodriguez
 *
 * Created on 1 de septiembre de 2016, 04:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "Operations.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int option;
    Operations operation;
    do{
        cout<<"------------- MENU DE OPCIONES ---------- \n";
        cout<<"-   1 Contenido de un archivo           - \n";
        cout<<"-   2 Localizacion actual               - \n";
        cout<<"-   3 Limpiar consola                   - \n";
        cout<<"-   4 Listar procesos                   - \n";
        cout<<"-   5 Memoria libre                     - \n";
        cout<<"-   6 Salir                             - \n";
        cout<<"----------------------------------------- \n";
        cout<<"\n"; 
        cout<<"Ingrese la opcion ";
        scanf( "%d", &option);
        switch (option){
            case 1:
                operation.showContent("/prueba.txt");
                break;
            case 2:
                cout<<"Localizacion actual ";
                operation.showLocation();                
                break;
            case 3:
                operation.cleanScreen();
                break;
            case 4:
                cout<<"Listado de procesos ";
                operation.listProcesses();
                break;
            case 5:
                cout<<"Memoria libre ";
                operation.freeMemory();                
                break;
        }    
    }while(option!=6);
    return 0;
}