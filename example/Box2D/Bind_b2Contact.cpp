#include <Bind_Box2D.h>

void register_type_b2ContactRegister(sol::state& state)
{
	state.new_usertype<b2ContactRegister>("b2ContactRegister"
	// fields
		,"primary"
		,&b2ContactRegister::primary
	// methods
	// constructors
    );
}
void register_type_b2ContactEdge(sol::state& state)
{
	state.new_usertype<b2ContactEdge>("b2ContactEdge"
	// fields
		,"other"
		,&b2ContactEdge::other
		,"contact"
		,&b2ContactEdge::contact
		,"prev"
		,&b2ContactEdge::prev
		,"next"
		,&b2ContactEdge::next
	// methods
	// constructors
    );
}
