#include <boost/thread.hpp> 
#include <boost/python.hpp>
#include <Vector.hpp>
#include <GameState.hpp>
#include <StrategyState.hpp>
#include "Plugin.h"

using namespace boost::python;

class StrategieEngine {
	struct GameState gameState;
	struct StrategyState strategyState;
	
	void updatePosition();
	private:
		boost::thread updateThread;
		PyObject* arrayToTuple(long array[]);
	public:
		StrategieEngine();
		~StrategieEngine();
		void setGameState(struct GameState data);
		struct StrategyState getState();
};
