#include "Types_of_vehicles.h"


Types_of_vehicles::Types_of_vehicles::Types_of_vehicles(std::string TOV)
{
	this->TOV = TOV;
}

Types_of_vehicles_API std::string Types_of_vehicles::Types_of_vehicles::to()
{
	return  std::string(TOV);
}



