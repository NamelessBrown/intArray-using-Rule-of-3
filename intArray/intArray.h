#pragma once

namespace Nameless
{
	class intArray
	{
	public:
		intArray(unsigned size);

		int& operator[](int index);

		~intArray();
	private:
		unsigned m_size;
		int* m_array = nullptr;
	};
}

