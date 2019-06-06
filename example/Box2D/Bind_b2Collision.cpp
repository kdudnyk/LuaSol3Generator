#include <Bind_Box2D.h>

void register_type_b2ContactFeature(sol::state& state)
{
	state.new_usertype<b2ContactFeature>("b2ContactFeature"
	// fields
		,"indexA"
		,&b2ContactFeature::indexA
		,"indexB"
		,&b2ContactFeature::indexB
		,"typeA"
		,&b2ContactFeature::typeA
		,"typeB"
		,&b2ContactFeature::typeB
	// methods
	// constructors
    );
}
void register_type_b2ManifoldPoint(sol::state& state)
{
	state.new_usertype<b2ManifoldPoint>("b2ManifoldPoint"
	// fields
		,"localPoint"
		,&b2ManifoldPoint::localPoint
		,"normalImpulse"
		,&b2ManifoldPoint::normalImpulse
		,"tangentImpulse"
		,&b2ManifoldPoint::tangentImpulse
		,"id"
		,&b2ManifoldPoint::id
	// methods
	// constructors
    );
}
void register_type_b2Manifold(sol::state& state)
{
	state.new_usertype<b2Manifold>("b2Manifold"
	// fields
		,"points"
		,&b2Manifold::points
		,"localNormal"
		,&b2Manifold::localNormal
		,"localPoint"
		,&b2Manifold::localPoint
		,"type"
		,&b2Manifold::type
		,"pointCount"
		,&b2Manifold::pointCount
	// methods
	// constructors
    );
}
void register_type_b2WorldManifold(sol::state& state)
{
	state.new_usertype<b2WorldManifold>("b2WorldManifold"
	// fields
		,"normal"
		,&b2WorldManifold::normal
		,"points"
		,&b2WorldManifold::points
		,"separations"
		,&b2WorldManifold::separations
	// methods
			,"Initialize"
			,&b2WorldManifold::Initialize
	// constructors
    );
}
void register_enum_b2PointState(sol::state& state)
{
	state.new_enum("b2PointState"
		,"b2_nullState"
		,b2PointState::b2_nullState
		,"b2_addState"
		,b2PointState::b2_addState
		,"b2_persistState"
		,b2PointState::b2_persistState
		,"b2_removeState"
		,b2PointState::b2_removeState
	);
}
void register_type_b2ClipVertex(sol::state& state)
{
	state.new_usertype<b2ClipVertex>("b2ClipVertex"
	// fields
		,"v"
		,&b2ClipVertex::v
		,"id"
		,&b2ClipVertex::id
	// methods
	// constructors
    );
}
void register_type_b2RayCastInput(sol::state& state)
{
	state.new_usertype<b2RayCastInput>("b2RayCastInput"
	// fields
		,"p1"
		,&b2RayCastInput::p1
		,"p2"
		,&b2RayCastInput::p2
		,"maxFraction"
		,&b2RayCastInput::maxFraction
	// methods
	// constructors
    );
}
void register_type_b2RayCastOutput(sol::state& state)
{
	state.new_usertype<b2RayCastOutput>("b2RayCastOutput"
	// fields
		,"normal"
		,&b2RayCastOutput::normal
		,"fraction"
		,&b2RayCastOutput::fraction
	// methods
	// constructors
    );
}
void register_type_b2AABB(sol::state& state)
{
	state.new_usertype<b2AABB>("b2AABB"
	// fields
		,"lowerBound"
		,&b2AABB::lowerBound
		,"upperBound"
		,&b2AABB::upperBound
	// methods
			,"IsValid"
			,&b2AABB::IsValid
			,"GetCenter"
			,&b2AABB::GetCenter
			,"GetExtents"
			,&b2AABB::GetExtents
			,"GetPerimeter"
			,&b2AABB::GetPerimeter
			,"Combine"
			,sol::overload(
				sol::resolve<void(const b2AABB &)>(&b2AABB::Combine)
				,
				sol::resolve<void(const b2AABB &, const b2AABB &)>(&b2AABB::Combine)
			)
			,"Contains"
			,&b2AABB::Contains
			,"RayCast"
			,&b2AABB::RayCast
	// constructors
    );
}
