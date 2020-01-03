#ifndef __LIST_H
#define  __LIST_H

#include"list.h"
template<class T>  class set
{
	public:
		set()
		{
		};
		
		virtual int add(const T& val);
		
		int length();
		
		bool find(const T& val);
		
		private:
			list<T> item;		
};

template<class T>   int set<T>  :: add(const T& val)
{
	if(item.find(val))
	return ;
	item.put(val);
}

template<class  T> int set<T>  :: length() 
{
	return item.length();
}


template<class T> bool set<T> :: find(const T &val)
{
	return item.find(val);
}

#endif
