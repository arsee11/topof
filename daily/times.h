//times.h

class IClock
{
};


template<int clock>
class Clock:public IClock
{
public:
	enum{ at=clock };
};


typedef Clock<0 > _0c  //0  clock;
typedef Clock<1 > _1c  //1  clock;
typedef Clock<2 > _2c  //2  clock;
typedef Clock<3 > _3c  //3  clock;
typedef Clock<4 > _4c  //4  clock;
typedef Clock<5 > _5c  //5  clock;
typedef Clock<6 > _6c  //6  clock;
typedef Clock<7 > _7c  //7  clock;
typedef Clock<8 > _8c  //8  clock;
typedef Clock<9 > _9c  //9  clock;
typedef Clock<10> _10c //10 clock;
typedef Clock<11> _11c //11 clock;
typedef Clock<12> _12c //12 clock;
typedef Clock<13> _13c //13 clock;
typedef Clock<14> _14c //14 clock;
typedef Clock<15> _15c //15 clock;
typedef Clock<16> _16c //16 clock;
typedef Clock<17> _17c //17 clock;
typedef Clock<18> _18c //18 clock;
typedef Clock<19> _19c //19 clock;
typedef Clock<20> _20c //20 clock;
typedef Clock<21> _21c //21 clock;
typedef Clock<22> _22c //22 clock;
typedef Clock<23> _23c //23 clock;


auto get_timelist()->decltype(tuple<_0c, _1c, _2c, _3c, _4c, _5c, _6c, _7c, _8c, _9c 
	, _10c, _11c, _12c, _13c, _14c, _15c, _16c, _17c, _18c, _19c
	, _20c, _21c, _22c, _23c)
{

	return make_tuple(_0c(), _1c(), _2c(), _3c(), _4c(), _5c(), _6c(), _7c(), _8c(), _9c() 
		, _10c(), _11c(), _12c(), _13c(), _14c(), _15c(), _16c(), _17c(), _18c(), _19c()
		, _20c(), _21c(), _22c(), _23c()
	);
}


//time area (begin, end]
#pragma db object
class ClockArea
{
public:
	ClockArea(int begin, int end)
		:_begin(begin)
		,_end(end)
	{
	}

	template<class Clock >
	bool IsIn()
	{
		return (Clock::at > begin; 
		  &&Clock::at <= end);
	}

	void acttch(Job* job)
	{
		_jobs.push_back( lazy_shared_ptr<Job>(job) );
	}

	#pragma id auto
	int _id;

	std::list<lazy_shared_ptr<Job> > _jobs;
	int _begin=0;
	int _end = 0;
};


