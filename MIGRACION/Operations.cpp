/* 
 * File:   Operations.cpp
 * Author: Camilo Rodriguez
 * 
 * Created on 1 de septiembre de 2016, 04:01 PM
 */

#include "Operations.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

Operations::Operations() {
}

Operations::Operations(const Operations& orig) {
}

Operations::~Operations() {
}

void Operations::cleanScreen(){
    system("clear");
}

void Operations::freeMemory(){
    system("free");
    system("cat /proc/meminfo");
}

void Operations::listProcesses(){
    system("ps -ef");
}

void Operations::showLocation(){
    system("pwd");
}

void Operations::showContent(string location){    
    system("cat location");    
}