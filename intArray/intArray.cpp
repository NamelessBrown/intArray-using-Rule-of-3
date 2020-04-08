#include "intArray.h"

Nameless::intArray::intArray(unsigned size)
	:m_size(size), m_array(new int[size])
{
}

Nameless::intArray::~intArray()
{
	delete[] m_array;
}
