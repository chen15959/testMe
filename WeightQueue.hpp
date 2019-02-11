#ifndef WeightQueue_hpp
#define WeightQueue_hpp

//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//#include <string.h>

//#include <vector>
//#include <list>
#include <map>


class WeightQueue
{
public:
	WeightQueue();
	virtual ~WeightQueue();
	
	WeightQueue(const WeightQueue &);
	WeightQueue & operator=(const WeightQueue &);
	
private:
	void copy(const WeightQueue &);
	void free();
	
public:
	long	top();
	void	push(long value, long weight = 1);
	void	pop();



	inline	
	unsigned long	size() const
	{
		return _data.size();
	}
	
	inline
	bool			empty() const
	{
		return size() == 0;
	}
	
	void			clear()
	{
		_data.clear();
	}
	
	
	
	
private:
	std::map<long, long>	_data;
	long					_top;
//	int						_state;
	bool					_ready;
};


#endif
