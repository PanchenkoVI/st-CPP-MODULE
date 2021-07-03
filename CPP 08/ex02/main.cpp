/*
* Created: 2021/04/05
*/

#include "mutantstack.hpp"

#include <string>
#include <list>
#include <iostream>

int		main(void)
{
	{
		std::cout << GREEN << "\t\t<===|TEST_1|===>" << END << std::endl;
		std::cout << GREEN << "#==========> |ITERATOR|" << END << std::endl;
		MutantStack<int> mstack;
		std::list<int> lt;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(17);
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(17);
		std::cout << "BEFORE SIZE = " << mstack.size() << " LIST= " << lt.size() << std::endl;
		std::cout << "TOP = " << mstack.top() << " LIST = " << lt.back() << std::endl;
		mstack.pop();
		lt.pop_back();
		std::cout << "AFTER POP. SIZE = " << mstack.size() << " LIST = " << lt.size() << std::endl;
		mstack.push(4);
		mstack.push(5);
		mstack.push(737);
		lt.push_back(4);
		lt.push_back(5);
		lt.push_back(737);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::list<int>::iterator it1 = lt.begin();
		std::list<int>::iterator ite1 = lt.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		++it1;
		--it1;
		while (it1 != ite1)
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;

		std::stack<int> s(mstack);
		std::cout << GREEN << "#==========>" << END << std::endl;
	}
	{
		std::cout << GREEN << "\t\t<===|TEST_2|===>" << END << std::endl;
		MutantStack<int> mstack;
		std::list<int> lt;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(17);
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(17);
		std::cout << "BEFORE SIZE = " << mstack.size() << " LIST= " << lt.size() << std::endl;
		std::cout << "TOP = " << mstack.top() << " LIST = " << lt.back() << std::endl;
		mstack.pop();
		lt.pop_back();
		std::cout << "AFTER POP. SIZE = " << mstack.size() << " LIST = " << lt.size() << std::endl;
		std::cout << GREEN << "#==========> |CONST_ITERATOR|" << END << std::endl;
		MutantStack<int>::const_iterator itc = mstack.cbegin();
		MutantStack<int>::const_iterator itce = mstack.cend();
		std::list<int>::const_iterator itc1 = lt.cbegin();
		std::list<int>::const_iterator itce1 = lt.cend();
		++itc;
		--itc;
		++itc1;
		--itc1;
		while(itc != itce)
		{
			std::cout << *itc << " ";
			++itc;
		}
		std::cout << std::endl;
		while(itc1 != itce1)
		{
			std::cout << *itc1 << " ";
			++itc1;
		}
		std::cout << std::endl;
		std::cout << GREEN << "#==========> |REVERSE_ITERATOR|" << END << std::endl;
		MutantStack<int>::reverse_iterator itr = mstack.rbegin();
		MutantStack<int>::reverse_iterator itre = mstack.rend();
		std::list<int>::reverse_iterator itr1 = lt.rbegin();
		std::list<int>::reverse_iterator itre1 = lt.rend();
		++itr;
		--itr;
		++itr1;
		--itr1;
		while(itr != itre)
		{
			std::cout << *itr << " ";
			++itr;
		}
		std::cout << std::endl;
		while(itr1 != itre1)
		{
			std::cout << *itr1 << " ";
			++itr1;
		}
		std::cout << std::endl;
		std::cout << GREEN << "#==========> |CONST_REVERSE_ITERATOR|" << END << std::endl;
		MutantStack<int>::const_reverse_iterator itcr = mstack.crbegin();
		MutantStack<int>::const_reverse_iterator itcre = mstack.crend();
		std::list<int>::const_reverse_iterator itcr1 = lt.crbegin();
		std::list<int>::const_reverse_iterator itcre1 = lt.crend();
		while(itcr != itcre)
		{
			std::cout << *itcr << " ";
			++itcr;
		}
		std::cout << std::endl;
		while(itcr1 != itcre1)
		{
			std::cout << *itcr1 << " ";
			++itcr1;
		}
		std::cout << std::endl;
		std::cout << GREEN << "#==========>" << END << std::endl;	
	}
	{
		std::cout << GREEN << "\t\t<===|TEST_3|===>" << END << std::endl;
		std::cout << GREEN << "#==========> |ITERATOR|" << END << std::endl;
		MutantStack<std::string> mstack;
		std::stack<std::string> sds;
		std::list<std::string> lt;
		mstack.push("A");
		mstack.push("B");
		lt.push_back("A");
		lt.push_back("B");
		std::cout << "BEFORE SIZE = " << mstack.size() << " LIST= " << lt.size() << std::endl;
		std::cout << "TOP = " << mstack.top() << " LIST = " << lt.back() << std::endl;
		mstack.pop();
		lt.pop_back();
		std::cout << "AFTER POP. SIZE = " << mstack.size() << " LIST = " << lt.size() << std::endl;
		mstack.push("C");
		mstack.push("D");
		mstack.push("E");
		mstack.push(" ");
		lt.push_back("C");
		lt.push_back("D");
		lt.push_back("E");
		lt.push_back(" ");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		MutantStack<std::string>::iterator it1 = mstack.begin();
		MutantStack<std::string>::iterator ite1 = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		while (it1 != ite1)
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;
	}
	{
		std::cout << GREEN << "\t\t<===|TEST_4|===>" << END << std::endl;
		std::cout << GREEN << "\t\t<===|DOUBLE|===>" << END << std::endl;
		std::cout << GREEN << "#==========> |ITERATOR|" << END << std::endl;
		MutantStack<double> mstack;
		std::list<double> lt;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(17);
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(17);
		std::cout << "BEFORE SIZE = " << mstack.size() << " LIST= " << lt.size() << std::endl;
		std::cout << "TOP = " << mstack.top() << " LIST = " << lt.back() << std::endl;
		mstack.pop();
		lt.pop_back();
		std::cout << "AFTER POP. SIZE = " << mstack.size() << " LIST = " << lt.size() << std::endl;
		mstack.push(4);
		mstack.push(5);
		mstack.push(737);
		lt.push_back(4);
		lt.push_back(5);
		lt.push_back(737);
		MutantStack<double>::iterator it = mstack.begin();
		MutantStack<double>::iterator ite = mstack.end();
		std::list<double>::iterator it1 = lt.begin();
		std::list<double>::iterator ite1 = lt.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		++it1;
		--it1;
		while (it1 != ite1)
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;
		std::cout << GREEN << "#==========>" << END << std::endl;
	}
	{
		std::cout << GREEN << "\t\t<===|TEST_5|===>" << END << std::endl;
		std::cout << GREEN << "\t\t<===|FLOAT |===>" << END << std::endl;
		std::cout << GREEN << "#==========> |ITERATOR|" << END << std::endl;
		MutantStack<float> mstack;
		std::list<float> lt;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(17);
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(17);
		std::cout << "BEFORE SIZE = " << mstack.size() << " LIST= " << lt.size() << std::endl;
		std::cout << "TOP = " << mstack.top() << " LIST = " << lt.back() << std::endl;
		mstack.pop();
		lt.pop_back();
		std::cout << "AFTER POP. SIZE = " << mstack.size() << " LIST = " << lt.size() << std::endl;
		mstack.push(4);
		mstack.push(5);
		mstack.push(737);
		lt.push_back(4);
		lt.push_back(5);
		lt.push_back(737);
		MutantStack<float>::iterator it = mstack.begin();
		MutantStack<float>::iterator ite = mstack.end();
		std::list<float>::iterator it1 = lt.begin();
		std::list<float>::iterator ite1 = lt.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		++it1;
		--it1;
		while (it1 != ite1)
		{
			std::cout << *it1 << " ";
			++it1;
		}
		std::cout << std::endl;
		std::cout << GREEN << "#==========>" << END << std::endl;
	}
	std::cout << GREEN << "\t\t<===|______|===>" << END << std::endl;
	return (0);	
}