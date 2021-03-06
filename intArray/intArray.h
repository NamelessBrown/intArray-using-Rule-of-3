#pragma once

namespace Nameless
{
	class intArray
	{
	public:
		intArray(unsigned size);
		intArray(const intArray& in);
		intArray(intArray&& in);
		intArray& operator=(const intArray& in);
		intArray& operator=(intArray&& in);

		int& operator[](unsigned index);
		const int& operator[](unsigned index) const;

		void Set(unsigned index, int newNumber);

		const unsigned Size() const;

		~intArray();
	private:
		unsigned m_size = 0;
		int* m_array = nullptr;
	};
}

