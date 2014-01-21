/*
 * Int_iterator.h
 *
 *  Created on: 2014/1/21
 *      Author: AdamChen
 */

#ifndef INT_ITERATOR_H_
#define INT_ITERATOR_H_

class Int_iterator {
public:
	Int_iterator(int* p, int c):data(p), len(c){ }
//	~Int_iterator();

	int valid() const { return len > 0;}
	int next() {
		--len;
		return *data++;
	}

//	Int_iterator(const Int_iterator&);
//	Int_iterator& operator=(const Int_iterator&);

private:
	int* data;
	int len;
};


#endif /* INT_ITERATOR_H_ */
