/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDynamicStack.h
 * Author: rohit
 *
 * Created on 3 March, 2019, 1:17 PM
 */

#ifndef CDYNAMICSTCK_H
#define CDYNAMICSTCK_H

//each stack item has an int value, a float value, and a character value
typedef struct item{
    int   nVal;
    float fVal;
    char  cVal;
    
}ITEM;

class CDynamicStack {
public:
    CDynamicStack();
    CDynamicStack(const CDynamicStack& orig);
    virtual ~CDynamicStack();
private:

};

#endif /* CDYNAMICSTCK_H */

