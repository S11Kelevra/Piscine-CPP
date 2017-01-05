// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:51:46 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 18:28:28 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"
#include <iostream>

Squad::Squad( void )
{
	_list = NULL;
	_nb = 0;
}

Squad::Squad( Squad const & src )
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = _list;
	tmp2 = src._list;
	_list = NULL;
	while (tmp2)
	{
		if (_list == NULL)
		{
			_list = new(t_list);
			_list->instance = tmp2->instance;
			_list->next = NULL;
		}
		else
		{
			tmp = _list;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->instance = tmp2->instance;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
	this->_nb = src._nb;
}

Squad::~Squad( void )
{
	t_list	*tmp;

	while (_list)
	{
		tmp = _list;
		delete _list->instance;
		_list = _list->next;
		delete tmp;
	}
}

int		Squad::getCount( void ) const
{
	return _nb;
}

int		Squad::push( ISpaceMarine* sm )
{
	t_list	*tmp;

	if (sm == NULL)
		return (_nb);
	if (_list == NULL)
	{
		_list = new(t_list);
		_list->instance = sm;
		_list->next = NULL;
	}
	else
	{
		tmp = _list;
		while (tmp->next)
		{
			if (tmp->instance == sm)
				return (_nb);
			tmp = tmp->next;
		}
		tmp->next = new(t_list);
		tmp->next->instance = sm;
		tmp->next->next = NULL;
	}
	_nb++;
	return (_nb);
}

ISpaceMarine*	Squad::getUnit( int index ) const
{
	t_list	*tmp;

	tmp = _list;
	while (index != 0 && tmp)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp->instance);
}

Squad&  Squad::operator=(Squad const & rhs)
{
    t_list  *tmp;

    tmp= _list;
    while (tmp)
    {
		delete tmp->instance;
    }
    if (this != &rhs)
		_nb = rhs._nb;

	t_list	*tmp2;

	tmp = _list;
	tmp2 = rhs._list;
	_list = NULL;
	while (tmp2)
	{
		if (_list == NULL)
		{
			_list = new(t_list);
			_list->instance = tmp2->instance;
			_list->next = NULL;
		}
		else
		{
			tmp = _list;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_list);
			tmp->next->instance = tmp2->instance;
			tmp->next->next = NULL;
		}
		tmp2 = tmp2->next;
	}
//	this->_nb = src._nb;
    return *this;
}
