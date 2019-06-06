#include <Bind_Box2D.h>

void register_type_b2PolygonShape(sol::state& state)
{
	state.new_usertype<b2PolygonShape>("b2PolygonShape"
	// fields
		,"m_centroid"
		,&b2PolygonShape::m_centroid
		,"m_vertices"
		,&b2PolygonShape::m_vertices
		,"m_normals"
		,&b2PolygonShape::m_normals
		,"m_count"
		,&b2PolygonShape::m_count
	// methods
			,"Clone"
			,&b2PolygonShape::Clone
			,"GetChildCount"
			,&b2PolygonShape::GetChildCount
			,"Set"
			,&b2PolygonShape::Set
			,"SetAsBox"
			,sol::overload(
				sol::resolve<void(float32, float32)>(&b2PolygonShape::SetAsBox)
				,
				sol::resolve<void(float32, float32, const b2Vec2 &, float32)>(&b2PolygonShape::SetAsBox)
			)
			,"TestPoint"
			,&b2PolygonShape::TestPoint
			,"RayCast"
			,&b2PolygonShape::RayCast
			,"ComputeAABB"
			,&b2PolygonShape::ComputeAABB
			,"ComputeMass"
			,&b2PolygonShape::ComputeMass
			,"GetVertexCount"
			,&b2PolygonShape::GetVertexCount
			,"GetVertex"
			,&b2PolygonShape::GetVertex
			,"Validate"
			,&b2PolygonShape::Validate
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2PolygonShape()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2Shape
	  >()
    );
}
