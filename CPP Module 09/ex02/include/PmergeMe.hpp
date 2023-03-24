/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:00:06 by codespace         #+#    #+#             */
/*   Updated: 2023/03/24 12:19:05 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <exception>
#include <time.h>

enum	CONTAINER
{
	vector = 0,
	deque = 1
};

class	NotIntegerException : public std::exception
{
	public:
		NotIntegerException( void );
		virtual ~NotIntegerException( void ) throw() {};
		const	char	*what( void ) const throw();
	private:
		std::string msg;
};

template < typename Container >

class	PmergeMe
{
	public:
		PmergeMe( char *av )
		{
			size_t len = getLength(av);
			size_t i = 0;
			std::string tmp;
			while ( i < len )
			{
				if ( !(av[i] >= '0' && av[i] <= '9') && av[i] != ' ' )
					throw( excp.what() );
				if ( av[i] == ' ' )
				{
					tmp = "";
					i++;
				}
				else if ( av[i] != ' ' && av[i + 1] && av[i + 1] != ' ' )
				{
					std::cout << "string before: " << tmp << std::endl;
					tmp += av[i];
					std::cout << "string after1: " << tmp << std::endl;
					tmp += av[i + 1];
					if ( av[i + 1] == ' ' )
						std::cout << "hello\n";
					std::cout << "string after2: " << tmp << " i + 1: " << av[i + 1] << std::endl;
					i++;
				}
				else if ( !tmp.empty() )
				{
					std::cout << "string: " << tmp << std::endl;
					if ( av[i] == ' ' )
						tmp += av[i];					
					const char *ptr = tmp.c_str();
					_sequence.push_back(atoi(ptr));
					i++;
				}
				else
				{
					_sequence.push_back(av[i] - '0');
					i++;
				}
			}
			_sequenceBefore = _sequence;
			start = clock();
			_sequence = sort(_sequence);
			// stop = clock();
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
			if ( _sequence.size() <= 1 )
				return (_sequence);
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
			result.insert( result.end(), left.begin() + i, left.end() );
			result.insert( result.end(), right.begin() + j, right.end() );
			stop = clock();
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
			// std::cout << "Before:  ";
			// for ( size_t i = 0; i < _sequenceBefore.size(); i++ )
			// 	std::cout << _sequenceBefore[i] << " ";
			// std::cout << std::endl;
			// std::cout << "After:   ";
			// for ( size_t i = 0; i < _sequence.size(); i++ )
			// 	std::cout << _sequence[i] << " ";
			// std::cout << std::endl;
			std::cout << "Time to process a range of " << _sequence.size() << " elements with std::";
			if ( e == vector )
				std::cout << "vector";
			else if ( e == deque )
				std::cout << "deque";
			std::cout << " : " << double(stop - start) / CLOCKS_PER_SEC << " us" << std::endl;
		};
		
	private:
		Container	_sequence;
		Container	_sequenceBefore;
		NotIntegerException	excp;
		clock_t		start;
		clock_t		stop;
} ;