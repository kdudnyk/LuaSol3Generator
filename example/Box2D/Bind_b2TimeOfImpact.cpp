#include <Bind_Box2D.h>

void register_type_b2TOIInput(sol::state& state)
{
	state.new_usertype<b2TOIInput>("b2TOIInput"
	// fields
		,"proxyA"
		,&b2TOIInput::proxyA
		,"proxyB"
		,&b2TOIInput::proxyB
		,"sweepA"
		,&b2TOIInput::sweepA
		,"sweepB"
		,&b2TOIInput::sweepB
		,"tMax"
		,&b2TOIInput::tMax
	// methods
	// constructors
    );
}
void register_type_b2TOIOutput(sol::state& state)
{
	state.new_usertype<b2TOIOutput>("b2TOIOutput"
	// fields
		,"state"
		,&b2TOIOutput::state
		,"t"
		,&b2TOIOutput::t
	// methods
	// constructors
    );
}
