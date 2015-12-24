#pragma once

#ifndef CONTROLS_H
#define CONTROLS_H

#ifndef RQH_H
#include "mylib/rqh/rqh.h"
#endif



#ifndef JOB_LOGICS_H
#include "job_logics.h"
#endif

#ifndef JPACK_H
#include "mylib/rqh/jpack.h"
#endif


using namespace arsee;



//typedef typename MvcTrait<Jpack, objects_t, MemberLogin>::dispth_t member_login_dispth;
typedef typename RqhTrait<Jpack, PutJob>::dispth_t put_job_dispth;
//typedef typename MvcTrait<Jpack, objects_t, GetJobs>::dispth_t get_jobs_dispth;



#endif /*CONTROLS_H*/
