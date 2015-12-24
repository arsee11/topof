#ifndef OBJECTS_H
#define OBJECTS_H

#include <string>
#include <list>
#include <memory>
#include <utility>


#ifndef MODELS_H
#include "odb/models.h"
#endif

#ifndef MODLESYS_H
#include "odb/modelsys.h"
#endif

#ifndef OBJECT_H
//#include "mylib/rqh/object.h"
#endif

using namespace std;

/*typedef std::shared_ptr<Member>  member_ptr_t;
typedef struct member_list :public list< member_ptr_t >
{
	static const string name(){ return "memberlist"; }
	
} member_list_t;
*/

//typedef arsee::Object<member_list>  member_list_obj_t;

//typedef Member::session_ptr sessoin_ptr_t;

//typedef arsee::ObjectsCollection<member_list_obj_t
//> objects_t;

typedef std::shared_ptr<Job> job_ptr_t;

#endif /*OBJECTS_H*/
