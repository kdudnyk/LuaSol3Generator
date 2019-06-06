#include <Bind_Box2D.h>

void register_type_b2ContactFilter(sol::state& state)
{
	state.new_usertype<b2ContactFilter>("b2ContactFilter"
	// fields
	// methods
			,"ShouldCollide"
			,&b2ContactFilter::ShouldCollide
	// constructors
    );
}
void register_type_b2ContactImpulse(sol::state& state)
{
	state.new_usertype<b2ContactImpulse>("b2ContactImpulse"
	// fields
		,"normalImpulses"
		,&b2ContactImpulse::normalImpulses
		,"tangentImpulses"
		,&b2ContactImpulse::tangentImpulses
		,"count"
		,&b2ContactImpulse::count
	// methods
	// constructors
    );
}
void register_type_b2ContactListener(sol::state& state)
{
	state.new_usertype<b2ContactListener>("b2ContactListener"
	// fields
	// methods
			,"BeginContact"
			,&b2ContactListener::BeginContact
			,"EndContact"
			,&b2ContactListener::EndContact
			,"PreSolve"
			,&b2ContactListener::PreSolve
			,"PostSolve"
			,&b2ContactListener::PostSolve
	// constructors
    );
}
