/**
 * @file atmcash.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ATMCASH_H_
#define _ATMCASH_H_


int options(void);
float balanceenquiry(float Balance);
float depositcash(float Balance);
float withdrawcash(float Balance);
int exit(void);
int errormessage(void);












#endif