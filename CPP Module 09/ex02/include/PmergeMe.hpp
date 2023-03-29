/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:00:06 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/29 14:21:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <exception>
#include <sstream>
#include <time.h>

enum	CONTAINER
{
	vector = 0,
	deque = 1
};

class	NotIntegerException : public std::exception
{
	public:
		NotIntegerException( const std::string & );
		virtual ~NotIntegerException( void ) throw();
		const	char	*what( void ) const throw();
	private:
		std::string msg;
};

template < typename Container >

class	PmergeMe
{
	public:
		PmergeMe( char **av )
		{
			int nbr;
			for ( size_t i = 1; av[i]; i++ )
			{
				std::string tmp(av[i]);
				std::istringstream iss(tmp);
				while ( iss >> nbr )
				{
					_sequence.push_back(nbr);
					if ( iss.peek() == ' ' )
						iss.ignore();
				}
				if ( !iss.eof() )
					throw( NotIntegerException("all sequence must be integer numbers") );
			}
			_sequenceBefore = _sequence;
			start = clock();
			_sequence = sort(_sequence);
			stop = clock();
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
		Container	sort( Container &_sequence )
		{
			if ( _sequence.size() <= 10 )
			{
				insertSort(_sequence);
				return (_sequence);
			}
			else
			{
				int mid = _sequence.size() / 2;
				Container tmp1( _sequence.begin(), _sequence.begin() + mid );
				Container left = sort( tmp1 );
				Container tmp2( _sequence.begin() + mid, _sequence.end() );
				Container right = sort( tmp2 );
				return ( mergeSort(left, right) );
			}
		};
		void	insertSort( Container &cnt )
		{
			for ( size_t i = 0; i < cnt.size(); i++ )
			{
				int key = cnt[i];
				int j = i - 1;
				while ( j >= 0 && cnt[j] > key )
				{
					cnt[j+1] = cnt[j];
					j -= 1;
				}
				cnt[j+1] = key;
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
			result.insert( result.end(), left.begin() + i, left.end() );
			result.insert( result.end(), right.begin() + j, right.end() );
			// stop = clock();
			return (result);
		};
		size_t	getLength( char *ptr ) const
		{
			size_t i = 0;
			while ( ptr[i] )
				i++;
			return (i);
		};
		std::pair<Container, Container>	getContainers( void ) const { return (std::make_pair(_sequenceBefore ,_sequence)); };

		void	printResults( enum CONTAINER e ) const
		{
			if ( _sequence.empty() )
			{
				std::cerr << "Error: container is empty\n";
				return ;
			}
			std::cout << "Time to process a range of " << _sequence.size() << " elements with std::";
			if ( e == vector )
				std::cout << "vector";
			else if ( e == deque )
				std::cout << "deque";
			std::cout << " : " << double(stop - start)<< " us" << std::endl;
		};
		
	private:
		Container	_sequence;
		Container	_sequenceBefore;
		clock_t		start;
		clock_t		stop;
} ;