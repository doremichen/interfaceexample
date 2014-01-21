/*
 * Reader.h
 *
 *  Created on: 2014/1/21
 *      Author: AdamChen
 */

#ifndef READER_H_
#define READER_H_
#include <istream>

using namespace std;

template<class T> class Reader {
public:
	Reader(istream& is): i(is), status(0) { advance();}
	int valid() const { return status;}
	T next()
	{
		T result = data;
		advance();
		return result;
	}

private:
	istream& i;
	int status;
	T data;

	void advance()
	{
		i >> data;
		status = i != 0;
	}
};


#endif /* READER_H_ */
