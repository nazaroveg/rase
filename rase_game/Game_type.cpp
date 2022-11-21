#include "Game_type.h"


Game_type::Game_type::Game_type(std::string type)
{
	ground_air = type;

}

Game_type_API std::string Game_type::Game_type::rp() const
{
	return  std::string(ground_air);
}

 




