/*
 * tempIterator.h
 *
 *  Created on: 2014/1/21
 *      Author: AdamChen
 */

#ifndef TEMPITERATOR_H_
#define TEMPITERATOR_H_

//interface class
template<class T> class Iterator {
public:
	virtual int valid() const = 0;
	virtual T next() = 0;
	virtual ~Iterator() {}

};

//Array_iterator class
template<class T> class Array_iterator : public Iterator<T> {
public:
	Array_iterator(T* p, int c):data(p), len(c) {}
	int valid() const {return len > 0;}
	T next()
	{
		--len;
		return *data++;
	}

private:
	T* data;
	int len;
};
/******************************************************
//concrete class
template<class T> class Iterator {
public:
	Iterator(T* p, int c): data(p), len(c) {}

	int valid() const { return len > 0;}
	T next()
	{
		--len;
		return *data++;
	}


private:
	T* data;
	int len;
};
******************************************************/
#endif /* TEMPITERATOR_H_ */
