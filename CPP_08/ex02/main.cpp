/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:39:55 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 15:35:05 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
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
	MutantStack<int>::iterator it_m = mstack.begin();
	MutantStack<int>::iterator ite_m = mstack.end();
	++it_m;
	--it_m;
	while (it_m != ite_m)
	{
	std::cout << *it_m << std::endl;
	++it_m;
	}
	std::stack<int> s(mstack);
	return 0;

}