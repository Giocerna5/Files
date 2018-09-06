#include "Bag.hpp"

Bag::Bag()
{
	capacity = DEFAULT_CAPACITY;
	data = new value_type[capacity];
	used = 0;
}

Bag::Bag(const Bag& obj)
{
	capacity = obj.capacity;
	used = obj.used;
	data = new value_type[capacity];
	copy(obj.data, obj.data + obj.used, data);	
}

Bag& Bag::operator=(const Bag& objR)
{
	if(&objR == this)
		return *this;
	else
		{
			if(capacity != objR.capacity)
			{
				delete[] data;
				capacity = objR.capacity;
				data = new value_type[capacity];
			}
			used = objR.used;
			copy(objR.data, objR.data + objR.used, data);
			return *this;
		}

}
Bag::~Bag()
{
	delete[] data;
}

