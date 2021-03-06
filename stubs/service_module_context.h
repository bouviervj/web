#ifndef _SERVICE_MODULE_CONTEXT_H__
#define _SERVICE_MODULE_CONTEXT_H__

#include <rpc_module.h>
#include <recorded_service.h>
#include <module_context.h>

namespace web {

	class service_module_context : public module_session_service<module_context > { 

		public:

			service_module_context(const std::string& iURL) : module_session_service<module_context>(iURL) {
			}

			virtual int execute(http_context* iContext, std::string& ioResult);

			ADD_RECORDED_SERVICE(service_module_context);

	};

}

#endif
