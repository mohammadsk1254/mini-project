/** 
* @file Functionalities.h
* Train Ticket Reservation Application with the functionalities.
*
*/
#ifndef __FUNCTIONALITIES_H__
#define __FUNCTIONALITIES_H__

void reservation(void);							//main reservation function
void viewdetails(void);							//view details of all the trains
void printticket(char name[],int,int,float);	//print ticket
void specifictrain(int);						//print data related to specific train
float charge(int,int);							//charge automatically w.r.t number of seats and train
void login();
#endif
