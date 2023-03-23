/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:00:06 by codespace         #+#    #+#             */
/*   Updated: 2023/03/23 12:26:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

template < typename Container >

class	PmergeMe
{
	public:
		PmergeMe( char *av )
		{
			Container copy(av, av + getLength(av) );
			_sequence = copy;
			sort(_sequence);
		};
		PmergeMe( const PmergeMe &copy )
		{
			_sequence = copy._sequence;
		};
		PmergeMe	&operator=( const PmergeMe &copy )
		{
			if ( this != &copy )
				_sequence = copy._sequence;
			return (*this);
		};
		~PmergeMe( void )
		{
			_sequence.clear();
		};
		Container	&sort( Container &_sequence )
		{
			if ( _sequence.size() <= 1 )
				return (_sequence);
			else
			{
				int mid = _sequence.size() / 2;
				Container left = sort( Container(_sequence.begin(), _sequence.begin() + mid));
				Container right = sort( Container(_sequence.begin() + mid, _sequence.end()));
				return ( mergeSort(left, right) );
			}
		};
		void	insertSort( void )
		{
			for ( size_t i = 0; i < _sequence.size(); i++ )
			{
				int key = _sequence[i];
				int j = i - 1;
				while ( j >= 0 && _sequence[j] > key )
				{
					_sequence[j+1] = _sequence[j];
					j -= 1;
				}
				_sequence[j+1] = key;
			}
		};
		Container	mergeSort( Container &left, Container &right )
		{
			Container result;
			size_t i, j;
			i = 0;
			j = 0;
			while ( i < left.size() && j < right.size() )
			{
				if  ( left[i] <= right[j] )
				{
					result.push_back(left[i]);
					i += 1;
				}
				else
				{
					result.push_back(right[j]);
					j += 1;
				}
			}
			result.insert( left.begin() + i, left.end() );
			result.insert( right.begin() + j, right.end() );
			return (result);
		};
		size_t	getLength( char *ptr )
		{
			size_t i = 0;
			while ( ptr[i] )
				i++;
			return (i);
		};
		Container	getContainer( void ) const { return (_sequence); };
	private:
		Container	_sequence;
} ;