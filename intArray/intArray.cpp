#include "intArray.h"

Nameless::intArray::intArray(unsigned size)
	:m_size(size), m_array(new int[size])
{
}

int& Nameless::intArray::operator[](int index)
{
	if (index > m_size || index < 0)
		throw("Invaild size index");

	return m_array[index];
}

Nameless::intArray::~intArray()
{
	delete[] m_array;
}
