/**
 * @file atmcash.h
 * @author Gurram Manikanta
 * @brief it describe about functions which are declare in this file
 *  and its implementation are declare on another file so i include this library to that library
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ATMCASH_H_
#define _ATMCASH_H_


int options(void);
float balance_enquiry(float Balance);
float deposit_cash(float Balance,float deposit);
float cash_withdraw(float Balance,float Withdraw);
int exitmenu(void);
int errormessage(void);

#endif