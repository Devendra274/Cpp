/*
Create Player class with data members::
name
age
country

Implement followings::
- Default constructor
- Parameterized constructor
- Function to Sort Array of Player objects 
(implement as global, sorting should be one name and age. Use qsort library function to sort)
- overload >> operator for for data input
- overload << operator for data display

USE Separate header and implementation files

- In main function create array of player objects and pass it to Sort function and print sorted 
player list
*/


#include"PlayerClass.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int player_count = getPlayerCount();

	Barcelona *players_data = new Barcelona[player_count];
	
	AddPlayerDetails(players_data, player_count);

	DisplayPlayerDetails(players_data, player_count);
	
	int choice=0;
	do
	{
		std::cout<<"\nEnter\n1.Sort By Name. \n2.Sort By Age \n3. Sort BY Country \n0.EXIT ";
		std::cin>>choice;
		switch(choice)
		{
			case 1: qsort(players_data, player_count, sizeof(Barcelona), sortByName);
				std::cout<<"\nSorted List of Players By Name is as Follows:: ";
				DisplayPlayerDetails(players_data, player_count);
				break;
			
			case 2: qsort(players_data, player_count, sizeof(Barcelona), sortByAge);
				std::cout<<"\nSorted List of Players By Age is as Follows:: ";
				DisplayPlayerDetails(players_data, player_count);
				break;
			
			case 3: qsort(players_data, player_count, sizeof(Barcelona), sortByCountry);
				std::cout<<"\nSorted List of Players By Country is as Follows:: ";
				DisplayPlayerDetails(players_data, player_count);
				break;
			
			case 0: std::cout<<"\n -----------------TERMINATING-------------";
				break;
		}
	}while(choice);

	return 0;
}
