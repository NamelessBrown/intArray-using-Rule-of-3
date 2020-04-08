#include "intArray.h"

Nameless::intArray::intArray(unsigned size)
	:m_size(size), m_array(new int[size])
{
}

Nameless::intArray::intArray(const intArray& in)
{
	m_size = in.m_size;
	m_array = new int[m_size];

	for (unsigned i = 0; i < m_size; i++)
	{
		m_array[i] = in.m_array[i];
	}
}

Nameless::intArray Nameless::intArray::operator=(const intArray& in)
{
	auto temp = new int[in.m_size]; //make a temp arr

	for (unsigned i = 0; i < in.m_size; i++) //assign it values
	{
		temp[i] = in.m_array[i];
	}

	m_size = in.m_size; //sets the size of the newly made arr for the class

	delete m_array;
	m_array = temp;

	return *this;
}

int& Nameless::intArray::operator[](unsigned index)
{
	if (index > m_size || index < 0)
		throw("Invaild size index");

	return m_array[index];
}

const int& Nameless::intArray::operator[](unsigned index) const
{
	if (index > m_size || index < 0)
		throw("Invaild size index");

	return m_array[index];
}

Nameless::intArray::~intArray()
{
	delete[] m_array;
	m_array = nullptr;
}
