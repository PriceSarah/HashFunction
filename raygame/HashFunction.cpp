#include "HashFunction.h"


namespace HashFunction {

	// implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; ++i)
			hash += data[i];
		return hash;
	}	//Hash function by Brian Kernighan and Dennis Richie
	unsigned int BKDRHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for(unsigned int i = 0; i < length; i++)
		{

			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	//Hash function by Brian Kernighan and Dennis Richie
	unsigned int colorHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{

			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xFFFFFF);
	}

	unsigned int randomHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 54654654 / 13) + data[i + 3] * length;
		}

		return (hash & 0xFFFFFF);
	}

}