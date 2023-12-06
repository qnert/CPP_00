/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:39:55 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 16:23:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <algorithm>
#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
	std::cout << "Using the std::list class" << std::endl;
	std::list<int>	mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << std::endl;

	std::cout << "Using MutantStack class" << std::endl;
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	for (std::stack<int>::container_type::iterator i = mstack.begin(); i != mstack.end(); i++)
		std::cout << *i << std::endl;
	std::sort(mstack.begin(), mstack.end());
	std::cout << std::endl << "You can even use the sort function in the algorithm header now: " << std::endl;
	for (std::stack<int>::container_type::iterator i = mstack.begin(); i != mstack.end(); i++)
		std::cout << *i << std::endl;
	return 0;

}