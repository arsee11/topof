//member_logic.h

#ifndef MEMBER_LOGICS_H
#define MEMBER_LOGICS_H

#ifndef OBJECTS_H
#include "objects.h"
#endif

#ifndef LOGIC_TMPL_H
#include "mvc/logictmpl.h"
#endif


using namespace arsee;

//pack protocol
//request********************
//soruce:member_view
//tartget:member_list
//action :registry
//params:who = {Member::id}
//response*******************
//target:member_view
//action:registry
//params:code=(OK|FAILED)
//*******************response
class AddMember :
	public BaseLogicJpack<2, AddMember, string, string>
{
public:
	typedef member_list_obj_t obj_t;

	response_t* Execute(member_list_obj_t *obj, const string& name, const string& pwd);

	static const string name(){ return "registry"; }
	static const string target(){ return member_list_obj_t::name(); }
	static const string p1(){ return "name"; }
	static const string p2(){ return "pwd"; }
};

class MemberLogin:
	public BaseLogicJpack<2, MemberLogin, size_t, string>
{
public:
	typedef member_list_obj_t obj_t;

	response_t* Execute(member_list_obj_t *obj, size_t id, const string& key);

	static const string name(){ return "login"; }
	static const string target(){ return member_list_obj_t::name(); }
	static const string p1(){ return "id"; }
	static const string p2(){ return "key"; }
};


//pack protocol
//request********************
//soruce:member_view
//tartget:member_list
//action :get_member_info
//params:who = {Member::id}
//response*******************
//target:member_view
//action:get_member_info
//params:{member}
//*******************response
class MemberInfo:
	public BaseLogicJpack<1, MemberLogin, size_t>
{
public:
	typedef member_list_obj_t obj_t;

	response_t* Execute(member_list_obj_t *obj, size_t id);

	static const string name(){ return "get_member_info"; }
	static const string target(){ return member_list_obj_t::name(); }
	static const string p1(){ return "id"; }
};


#endif/*MEMBER_LOGICS_H*/
