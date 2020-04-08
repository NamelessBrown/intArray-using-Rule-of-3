#pragma once

namespace Nameless
{
	class intArray
	{
	public:
		intArray(unsigned size);

		~intArray();
	private:
		unsigned m_size;
		int* m_array = nullptr;
	};
}

