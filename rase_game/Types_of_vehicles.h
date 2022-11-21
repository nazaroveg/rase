#pragma once
#include <string>


#ifndef lib_Game_vehicles
#define Types_of_vehicles_API __declspec(dllexport)
#else
#define Types_of_vehicles_API __declspec(dllimport)
#endif // !lib_Game_vehicles



namespace Types_of_vehicles
{
	class Types_of_vehicles
	{
	protected:
		std::string TOV;


	public:
		Types_of_vehicles_API Types_of_vehicles(std::string TOV);
		Types_of_vehicles_API std::string to();
		
	};





}