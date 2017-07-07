// -------------------------------------------------------------------------
//    @FileName      	:   NFIHttpClientModule.h
//    @Author           :   LvSheng.Huang
//    @Date             :   2017-07-07
//    @Module           :   NFIHttpClientModule
//
// -------------------------------------------------------------------------

#ifndef NFI_HTTP_CLIENT_MODULE_H
#define NFI_HTTP_CLIENT_MODULE_H

#include "NFComm/NFPluginModule/NFIModule.h"
#include "NFComm/NFNetPlugin/NFIHttpServer.h"

class NFIHttpClientModule
	: public NFIModule
{
public:
	virtual ~NFIHttpClientModule() {};
	/*
	bool PerformGet(const std::string& strUri, const std::string& strUserData,
		BaseType* pBase,
		void (BaseType::*handleRecieve)(const int state_code, const std::string& strRespData, const std::string& strUserData))
	{
		HTTP_RESP_FUNCTOR_PTR pd(new HTTP_RESP_FUNCTOR(std::bind(handleRecieve, pBase, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3)));
		return PerformGet(strUri, strUserData, pd);
	}

	template<typename BaseType>
	bool PerformPost(const std::string& strUri, const std::string& strUserData, const std::string& strPostData,
		BaseType* pBase,
		void (BaseType::*handleRecieve)(const int state_code, const std::string& strRespData, const std::string& strUserData))
	{
		HTTP_RESP_FUNCTOR_PTR pd(new HTTP_RESP_FUNCTOR(std::bind(handleRecieve, pBase, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3)));
		return PerformPost(strUri, strUserData, strPostData, pd);
	}
	*/
};

#endif
