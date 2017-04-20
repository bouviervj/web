#include <service_module_context.h>
#include <jsonxx.h>
#include <string>

namespace web {

	CREATE_RECORDED_SERVICE(service_module_context,"/module_context")

	int service_module_context::execute(http_context* iContext , std::string& ioResult){

		std::cout << " Execute service_module_context method." << std::endl ; 

		ioResult = "{\"Test\"}";

		return 0;

	}

}

