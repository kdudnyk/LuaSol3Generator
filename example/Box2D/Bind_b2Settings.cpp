#include <Bind_Box2D.h>

void register_type_b2Version(sol::state& state)
{
	state.new_usertype<b2Version>("b2Version"
	// fields
		,"major"
		,&b2Version::major
		,"minor"
		,&b2Version::minor
		,"revision"
		,&b2Version::revision
	// methods
	// constructors
    );
}
