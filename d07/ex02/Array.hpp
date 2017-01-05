// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 17:23:52 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/14 17:23:54 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <stdexcept>

template< typename T = int>
class Array
{

public:

	Array<T>(): _array( NULL ), _size( 0 ) {};

	Array<T>( unsigned int n ): _size( n ) {

		if ( _size == 0 )
			_array = NULL;
		else
			_array = new T[n];
	};

	Array<T>( Array<T> const & src ): _array( NULL ), _size( 0 ) {

		*this = src;
	};

	~Array<T>() {};

	unsigned int	size() const {
		return ( this->_size );
	};

	Array<T> &	operator=( Array<T> const & rhs ) {
		if ( this != &rhs ) {
			delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; ++i )
				this->_array[i] = rhs._array[i];
		}
		return *this;
	};

	T &	operator[]( unsigned int num ) {
		if ( num < this->_size )
			return ( this->_array[num] );
		else
			throw std::range_error("class Array: Out of bound!");
	};

private:
	T*				_array;
	unsigned int	_size;
};