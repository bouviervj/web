#include <service_module_fibo.h>
#include <jsonxx.h>
#include <string>

namespace web {

	CREATE_RECORDED_SERVICE(service_module_fibo,"/module_fibo")

	int service_module_fibo::execute(http_context* iContext, std::string& ioResult){

		std::cout << " Execute service_module_fibo method." << std::endl ; 

		ioResult = "{\"Test\"}";

		return 0;

	}


}

