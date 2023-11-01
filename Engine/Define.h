#pragma once

#define DECLARE_SINGLE(classname)			\
private:									\
	classname() { }							\
public:										\
	static classname* GetInsance()			\
	{										\
		static classname s_instace;			\
		return &s_instance;					\
	}										

#define GET_SINGLE(classname)	classname::GetInstance()