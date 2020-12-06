#ifndef _PLAYERCLASS_H_
#define _PLAYERCLASS_H_

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int getPlayerCount();


class Barcelona
{
	char* Name;
	char* Country;
	char* Role;
	int Age;
public:
	Barcelona();

	Barcelona(char* N, char* C, char* R, int age);
	
	char* getName();
	char* getCountry();
	char* getRole();
	int getAge();

/*	void setName(char*);
	void setCountry(char*);
	void setRole(char*);
	void setAge(int);
*/
	friend ostream & operator << (ostream &out, const Barcelona &);
	
	friend istream & operator >> (istream &in, Barcelona &);

};

	void AddPlayerDetails(Barcelona *player, int &);
	
	void DisplayPlayerDetails(Barcelona *player, int &);
	
	int sortByName(const void *,const void *);	
	
	int sortByCountry(const void *, const void*);
	
	int sortByAge(const void *, const void*);

#endif
