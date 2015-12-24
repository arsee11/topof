//job_logics.h

#ifndef JOB_LOGICS_H
#define JOB_LOGICS_H

#ifndef OBJECTS_H
#include "objects.h"
#endif

#ifndef JPACK_H 
#include "mylib/rqh/jpack.h"
#endif

#ifndef LOGIC_TMPL_H
#include "mylib/rqh/object_logic.h"
#endif


using namespace arsee;

//pack protocol
//request********************
//soruce:job_view
//tartget:jobpanel
//action :put_job
//params:=date,clocl_area, job_id
//response*******************
//target:job_view
//action:put_job
//params:code=(OK|FAILED)
//*******************response
class PutJob:
	public ObjectLogic<Jpack> 
{
public:

	IRResponse<Jpack>* Exec(object_list_t& objs) override;
	static const string name(){ return "put_job"; }

};

#endif /*JOB_LOGICS_H*/
