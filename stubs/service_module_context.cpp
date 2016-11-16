#include <service_module_context.h>
#include <jsonxx.h>
#include <string>

namespace web {

	CREATE_RECORDED_SERVICE(service_module_context,"/module_context")

	int service_module_context::execute(const std::string& iFunction, const std::vector<std::string>& iArgs, std::string& ioResult){

		std::cout << " Execute service_module_context method." << std::endl ; 

		ioResult = "{\"Test\"}";

		return 0;

	}

}

