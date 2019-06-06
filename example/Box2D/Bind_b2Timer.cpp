#include <Bind_Box2D.h>

void register_type_b2Timer(sol::state& state)
{
	state.new_usertype<b2Timer>("b2Timer"
	// fields
	// methods
			,"Reset"
			,&b2Timer::Reset
			,"GetMilliseconds"
			,&b2Timer::GetMilliseconds
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Timer()
		>()
    );
}
