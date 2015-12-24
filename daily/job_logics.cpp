//job_logics.cpp

#include "job_logics.h"
#include "odb/models-odb.hxx"
#include "odb/dbholder.h"


////////////////////////////////////////////////////////////////////
//GetLastJobDate
/*GetLastJobDate::response_t* GetLastJobDate::Execute(jobpanel_obj_t*obj
		, const string& whose
)
{
	response_t *rsp = new response_t("response");
	rsp->add_param("code", RspCode::OK);
	cout<<"PutJob::Execute"<<endl;
	job_ptr_t job; 
	try{
		odb::transaction t(DbConnPool::instance().get()->begin());
		t.tracer(stderr_tracer);
		odb::query<job> query_t;
		odb::result<job> result_t;
		
		
	}
	catch (odb::mysql::database_exception& e){
		//DbErrorHandle(e);
		return rsp;
	}

	
	rsp->append_param();
	return rsp;
}
*/

enum RspCode
{
	OK=0,
	Failed,
};

////////////////////////////////////////////////////////////////////
//PutJob
IRResponse<Jpack>* PutJob::Exec(object_list_t& objs) 
{
	typedef RResponse<Jpack> response_t;
	typedef std::shared_ptr<Job>  job_ptr_t;
	response_t *rsp = new response_t("response");
	rsp->Success();
	cout<<"PutJob::Execute"<<endl;
	for( auto i : objs)
	{
		job_ptr_t job = dynamic_pointer_cast<Job>(i);
		if( job->get_id()  == 0 )
		{
			int id = 0;	
			if(!Persist( DbConnPool::instance().get(), job, id) )
				rsp->Fail();
		}
		else
		{
			try{
				odb::transaction t(DbConnPool::instance().get()->begin());
				t.tracer(stderr_tracer);
				job_ptr_t jobn = job_ptr_t(
					DbConnPool::instance().get()->load<Job>(job->get_id())
				);
			}
			catch (odb::object_not_persistent& e){
				//DbErrorHandle(e);
				return rsp;
			}
			catch (odb::mysql::database_exception& e){
				//DbErrorHandle(e);
				return rsp;
			}
		}
	/*
		clockarea_ptr_t ca( new ClockArea(begin, end) );
		ca.AttachJob(job);
		if(!Persist( DbConnPool::instance().get(), ca) )
			rsp->add_param("code", RspCode::Failed);
	
		JobPanel jp;
		jp.date(date);
		jp.whose(whose);
		jp.AttachArea(ca);
	
		//persistent handle
		if( !Persist( DbConnPool::instance().get(),jp ) )
			rsp->add_param("code", RspCode::Failed);
	*/	
	}
	return rsp;
}




////////////////////////////////////////////////////////////////////
//GetJob
/*PutJob::response_t* GetJob::Execute(jobpanel_obj_t*obj
		, const string& fromdate
		, const string& todate
		, const string& whose
)
{
	response_t *rsp = new response_t("response");
	rsp->add_param("code", RspCode::OK);
	cout<<"PutJob::Execute"<<endl;
	try{
		typedef odb::query<job> query_t;
		typedef odb::result<job> result_t;
		
		DbConnPool::db_ptr_t db = DbConnPool::instance().get();
		odb::transaction t(db->begin());
		t.tracer(stderr_tracer);
		result_t r;
		if( !todate.empty() )
			r = result_t( db->query(query_t::date >= fromdate && query_t::date<=todate) );
		else
			r = result_t( db->query(query_t::date >= fromdate) );
		for(result_t::iterator i=r.begin(); i!=r.end(); ++i)
		{
			rsp->append<job>( *i );	
		}

	}
	catch (odb::mysql::database_exception& e){
		//DbErrorHandle(e);
		return rsp;
	}

	
	rsp->append_param();
	return rsp;
}
*/
