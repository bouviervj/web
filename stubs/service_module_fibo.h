#ifndef _SERVICE_MODULE_FIBO_H__
#define _SERVICE_MODULE_FIBO_H__

#include <rpc_module.h>
#include <recorded_service.h>
#include <module_fibo.h>

namespace web {

	class service_module_fibo : public module_service<module_fibo > { 

		public:

			service_module_fibo(const std::string& iURL) : module_service<module_fibo>(iURL) {
			}

			virtual int execute(http_context* iContext, std::string& ioResult);

			ADD_RECORDED_SERVICE(service_module_fibo);

	};

}

#endif
