#pragma once

#ifndef lib_dist
#define distance_API __declspec(dllexport)
#else
#define distance_API_API __declspec(dllimport)
#endif // !lib_dist




namespace distance
{
	class distance
	{

	protected:
		int dist;

	public:
		distance_API distance(int dist);
		distance_API virtual int di() const;

	};
}
