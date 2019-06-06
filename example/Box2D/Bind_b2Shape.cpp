#include <Bind_Box2D.h>

void register_type_b2MassData(sol::state& state)
{
	state.new_usertype<b2MassData>("b2MassData"
	// fields
		,"mass"
		,&b2MassData::mass
		,"center"
		,&b2MassData::center
		,"I"
		,&b2MassData::I
	// methods
	// constructors
    );
}
