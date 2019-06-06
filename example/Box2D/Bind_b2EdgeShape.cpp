#include <Bind_Box2D.h>

void register_type_b2EdgeShape(sol::state& state)
{
	state.new_usertype<b2EdgeShape>("b2EdgeShape"
	// fields
		,"m_vertex1"
		,&b2EdgeShape::m_vertex1
		,"m_vertex2"
		,&b2EdgeShape::m_vertex2
		,"m_vertex0"
		,&b2EdgeShape::m_vertex0
		,"m_vertex3"
		,&b2EdgeShape::m_vertex3
		,"m_hasVertex0"
		,&b2EdgeShape::m_hasVertex0
		,"m_hasVertex3"
		,&b2EdgeShape::m_hasVertex3
	// methods
			,"Set"
			,&b2EdgeShape::Set
			,"Clone"
			,&b2EdgeShape::Clone
			,"GetChildCount"
			,&b2EdgeShape::GetChildCount
			,"TestPoint"
			,&b2EdgeShape::TestPoint
			,"RayCast"
			,&b2EdgeShape::RayCast
			,"ComputeAABB"
			,&b2EdgeShape::ComputeAABB
			,"ComputeMass"
			,&b2EdgeShape::ComputeMass
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2EdgeShape()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2Shape
	  >()
    );
}
