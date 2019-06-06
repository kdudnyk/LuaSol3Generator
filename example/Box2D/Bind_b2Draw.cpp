#include <Bind_Box2D.h>

void register_type_b2Color(sol::state& state)
{
	state.new_usertype<b2Color>("b2Color"
	// fields
		,"r"
		,&b2Color::r
		,"g"
		,&b2Color::g
		,"b"
		,&b2Color::b
		,"a"
		,&b2Color::a
	// methods
			,"Set"
			,&b2Color::Set
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Color()
			,
			b2Color(float32, float32, float32, float32)
		>()
    );
}
