#include "distance.h"


distance::distance::distance(int dist)
{
	this -> dist = dist;
}

distance_API int distance::distance::di() const
{
	return dist;
}