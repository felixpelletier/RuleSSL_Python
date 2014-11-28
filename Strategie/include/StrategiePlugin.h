#include "Plugin.h"

namespace Rule {

class StrategiePlugin : public Plugin {
	private:
	
	public:
		explicit StrategiePlugin();

    		virtual void install() override;
    		virtual void initialize() override;
    		virtual void shutdown() override;
    		virtual void uninstall() override;

		StrategiePlugin();
		~StrategiePlugin();
};

}
