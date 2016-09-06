/* 
 * File:   Operations.h
 * Author: Camilo Rodriguez
 *
 * Created on 1 de septiembre de 2016, 04:01 PM
 */

#ifndef OPERATIONS_H
#define	OPERATIONS_H
#include <string>
#include <iostream>
using namespace std;
class Operations {
public:
    Operations();
    Operations(const Operations& orig);
    virtual ~Operations();    
    void showContent(string location);
    void showLocation();
    void cleanScreen();
    void listProcesses();
    void freeMemory();    
private:    
};

#endif	/* OPERATIONS_H */

