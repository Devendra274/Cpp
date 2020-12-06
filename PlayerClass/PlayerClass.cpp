#include"PlayerClass.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

Barcelona::Barcelona():Name(NULL), Country(NULL), Role(NULL), Age(15)
{
	Name = new char[30];
	Country = new char[30];
	Role = new char[15];
}

Barcelona::Barcelona(char* N, char* C, char* R, int age)
{
	Name = new char[30];
	strcpy(Name, N);
	
	Country = new char[30];
	strcpy(Country, C);
	
	Role = new char[15];
	strcpy(Role, R);
	
	this->Age = age;
}

char* Barcelona::getName()
{
	return Name;
}

char* Barcelona::getCountry()
{
	return Country;
}

char* Barcelona::getRole()
{
	return Role;
}

int Barcelona::getAge()
{
	return Age;
}
/*
void Barcelona::setName(char* N)
{
	strcpy(Name,N);
}

void Barcelona::setCountry(char* C)
{
	strcpy(Country,C);
}

void Barcelona::setRole(char* R)
{
	strcpy(Role,R);
}

void Barcelona::setAge(int age)
{
	Age = age;
}
*/

int getPlayerCount()
{
	int count;
	std::cout<<"\nEnter your Required Player in a Team:: ";
	std::cin>> count;

	return count;
}

//template<size_t N>
void AddPlayerDetails(Barcelona *player, int &N)
{
	for(int i=0; i<N; ++i)
	{
		std::cout<<"\nEnter Player's NAME, AGE, Country and Role:: ";
		cin>>player[i];
	}
}

istream& operator >> (istream &in, Barcelona &player)
{
	std::cout<<"\nEnter Player's Name:: ";
	in>>player.Name;
	
	std::cout<<"\nEnter Player's Country:: ";
	in>>player.Country;
	
	std::cout<<"\nEnter Player's Role:: ";
	in>>player.Role;
	
	std::cout<<"\nEnter Player's Age:: ";
	in>>player.Age;

	return in;
}

//template<size_t N>
void DisplayPlayerDetails(Barcelona *player, int &N)
{
	for(int i=0; i<N; ++i)
	{
		cout<<player[i];
	}
}

ostream& operator << (ostream &out, const Barcelona &player)
{
	out<<"\nPlayer Name     :: "<<player.Name;
	out<<"\nPlayer Age      :: "<<player.Age;
	out<<"\nPlayer Country  :: "<<player.Country;
	out<<"\nPlayer Position :: "<<player.Role<<"\n";
	
	return out;
}



int sortByName(const void *p1, const void*p2)
{
	char* name_1 = ((Barcelona*)p1)->getName();
	char* name_2 = ((Barcelona*)p2)->getName();
	
	return strcmp(name_1, name_2);
}

int sortByCountry(const void *p1, const void*p2)
{
	char* country_1 = ((Barcelona*)p1)->getCountry();
	char* country_2 = ((Barcelona*)p2)->getCountry();
	
	return strcmp(country_1, country_2);

}

int sortByAge(const void *p1, const void*p2)
{
	int age_1 = ((Barcelona*)p1)->getAge();
	int age_2 = ((Barcelona*)p2)->getAge();
	
	return age_1 - age_2;
}
