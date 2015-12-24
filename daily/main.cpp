#if defined(_MSC_VER)
#pragma comment(lib, "../../bin/mvclibd")
#pragma comment(lib, "../../bin/jsonlibd")
#endif

#include "mylib/rqh/server.h"
#include "controls.h"
#include "mylib/class_info.h"

DEF_CLASS_NAME(Job);

typedef UdpServer<Jpack
//	,login_dispth
	,put_job_dispth
//	,get_jobs_dispth
> svr_t;


struct StdoutLoger
{
	void add(const char* msg,const char*file_name, int file_line)
	{
		cout<<"|"<<file_name<<":"<<file_line<<"|"<<msg<<endl;
	}
};

int main(int argc, char **argv)
{

	net::SockInit();
	svr_t svr(11112);
	StdoutLoger loger;
	
	while (true)
	{
		if( !svr.Run(loger) )
			break;
	}

	net::SockUninit();
	return 0;

}

