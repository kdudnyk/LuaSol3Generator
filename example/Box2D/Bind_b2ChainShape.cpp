#include <Bind_Box2D.h>

void register_type_b2ChainShape(sol::state& state)
{
	state.new_usertype<b2ChainShape>("b2ChainShape"
	// fields
		,"m_vertices"
		,&b2ChainShape::m_vertices
		,"m_count"
		,&b2ChainShape::m_count
		,"m_prevVertex"
		,&b2ChainShape::m_prevVertex
		,"m_nextVertex"
		,&b2ChainShape::m_nextVertex
		,"m_hasPrevVertex"
		,&b2ChainShape::m_hasPrevVertex
		,"m_hasNextVertex"
		,&b2ChainShape::m_hasNextVertex
	// methods
			,"Clear"
			,&b2ChainShape::Clear
			,"CreateLoop"
			,&b2ChainShape::CreateLoop
			,"CreateChain"
			,&b2ChainShape::CreateChain
			,"SetPrevVertex"
			,&b2ChainShape::SetPrevVertex
			,"SetNextVertex"
			,&b2ChainShape::SetNextVertex
			,"Clone"
			,&b2ChainShape::Clone
			,"GetChildCount"
			,&b2ChainShape::GetChildCount
			,"GetChildEdge"
			,&b2ChainShape::GetChildEdge
			,"TestPoint"
			,&b2ChainShape::TestPoint
			,"RayCast"
			,&b2ChainShape::RayCast
			,"ComputeAABB"
			,&b2ChainShape::ComputeAABB
			,"ComputeMass"
			,&b2ChainShape::ComputeMass
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2ChainShape()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2Shape
	  >()
    );
}
