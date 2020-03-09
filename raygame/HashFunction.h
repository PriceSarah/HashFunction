#pragma once
#include <functional>
namespace HashFunction
{
	typedef std::function< unsigned int(const char*, unsigned int)> HashFunc;

	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);


	//Hash function by Brian Kernighan and Dennis Richie
	unsigned int BKDRHash(const char* data, unsigned int length);

	unsigned int colorHash(const char* data, unsigned int length);

	unsigned int randomHash(const char* data, unsigned int length);

	// a helper to access a default hash function
	static HashFunc defaultHash = randomHash;
};

