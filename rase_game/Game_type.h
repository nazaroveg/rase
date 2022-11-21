#pragma once
#include <string>


#ifndef lib_Game_type
#define Game_type_API __declspec(dllexport)
#else
#define Game_type_API __declspec(dllimport)
#endif // !lib_Game_type


namespace Game_type
{

	class Game_type
	{
		
	protected:
		
		std::string ground_air;
		 

	public:
		Game_type_API Game_type(std::string type);
		Game_type_API virtual std::string rp() const;

	
		
	};
}
