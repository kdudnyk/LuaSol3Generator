#include <Bind_Box2D.h>

void register_type_b2CircleShape(sol::state& state)
{
	state.new_usertype<b2CircleShape>("b2CircleShape"
	// fields
		,"m_p"
		,&b2CircleShape::m_p
	// methods
			,"Clone"
			,&b2CircleShape::Clone
			,"GetChildCount"
			,&b2CircleShape::GetChildCount
			,"TestPoint"
			,&b2CircleShape::TestPoint
			,"RayCast"
			,&b2CircleShape::RayCast
			,"ComputeAABB"
			,&b2CircleShape::ComputeAABB
			,"ComputeMass"
			,&b2CircleShape::ComputeMass
			,"GetSupport"
			,&b2CircleShape::GetSupport
			,"GetSupportVertex"
			,&b2CircleShape::GetSupportVertex
			,"GetVertexCount"
			,&b2CircleShape::GetVertexCount
			,"GetVertex"
			,&b2CircleShape::GetVertex
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2CircleShape()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2Shape
	  >()
    );
}
