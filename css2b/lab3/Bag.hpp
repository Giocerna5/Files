#ifndef BAG_HPP
#define BAG_HPP

#include <iostream>
#include <cassert> 
#include <cstdlib>

using namespace std;

class Bag
{
	public:
		typedef int value_type;
		typedef std::size_t size_type;
		static const size_type DEFAULT_CAPACITY = 30;
		Bag();
		Bag(const Bag& obj);
		~Bag();
		Bag& operator=(const Bag& objR);
	private:
		value_type *data;
		size_type used;
		size_type capacity;

};
#endif
