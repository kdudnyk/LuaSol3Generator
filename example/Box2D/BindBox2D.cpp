#include <BindBox2D.h>

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
	);
}
void register_type_b2Vec2(sol::state& state)
{
	state.new_usertype<b2Vec2>("b2Vec2"
	// fields
		,"x"
		,&b2Vec2::x
		,"y"
		,&b2Vec2::y
	// methods
			,"SetZero"
			,&b2Vec2::SetZero
			,"Set"
			,&b2Vec2::Set
			,"Length"
			,&b2Vec2::Length
			,"LengthSquared"
			,&b2Vec2::LengthSquared
			,"Normalize"
			,&b2Vec2::Normalize
			,"IsValid"
			,&b2Vec2::IsValid
			,"Skew"
			,&b2Vec2::Skew
	);
}
void register_type_b2Vec3(sol::state& state)
{
	state.new_usertype<b2Vec3>("b2Vec3"
	// fields
		,"x"
		,&b2Vec3::x
		,"y"
		,&b2Vec3::y
		,"z"
		,&b2Vec3::z
	// methods
			,"SetZero"
			,&b2Vec3::SetZero
			,"Set"
			,&b2Vec3::Set
	);
}
void register_type_b2Mat22(sol::state& state)
{
	state.new_usertype<b2Mat22>("b2Mat22"
	// fields
		,"ex"
		,&b2Mat22::ex
		,"ey"
		,&b2Mat22::ey
	// methods
			,"Set"
			,&b2Mat22::Set
			,"SetIdentity"
			,&b2Mat22::SetIdentity
			,"SetZero"
			,&b2Mat22::SetZero
			,"GetInverse"
			,&b2Mat22::GetInverse
			,"Solve"
			,&b2Mat22::Solve
	);
}
void register_type_b2Mat33(sol::state& state)
{
	state.new_usertype<b2Mat33>("b2Mat33"
	// fields
		,"ex"
		,&b2Mat33::ex
		,"ey"
		,&b2Mat33::ey
		,"ez"
		,&b2Mat33::ez
	// methods
			,"SetZero"
			,&b2Mat33::SetZero
			,"Solve33"
			,&b2Mat33::Solve33
			,"Solve22"
			,&b2Mat33::Solve22
			,"GetInverse22"
			,&b2Mat33::GetInverse22
			,"GetSymInverse33"
			,&b2Mat33::GetSymInverse33
	);
}
void register_type_b2Rot(sol::state& state)
{
	state.new_usertype<b2Rot>("b2Rot"
	// fields
		,"s"
		,&b2Rot::s
		,"c"
		,&b2Rot::c
	// methods
			,"Set"
			,&b2Rot::Set
			,"SetIdentity"
			,&b2Rot::SetIdentity
			,"GetAngle"
			,&b2Rot::GetAngle
			,"GetXAxis"
			,&b2Rot::GetXAxis
			,"GetYAxis"
			,&b2Rot::GetYAxis
	);
}
void register_type_b2Transform(sol::state& state)
{
	state.new_usertype<b2Transform>("b2Transform"
	// fields
		,"p"
		,&b2Transform::p
		,"q"
		,&b2Transform::q
	// methods
			,"SetIdentity"
			,&b2Transform::SetIdentity
			,"Set"
			,&b2Transform::Set
	);
}
void register_type_b2Sweep(sol::state& state)
{
	state.new_usertype<b2Sweep>("b2Sweep"
	// fields
		,"localCenter"
		,&b2Sweep::localCenter
		,"c0"
		,&b2Sweep::c0
		,"c"
		,&b2Sweep::c
		,"a0"
		,&b2Sweep::a0
		,"a"
		,&b2Sweep::a
		,"alpha0"
		,&b2Sweep::alpha0
	// methods
			,"GetTransform"
			,&b2Sweep::GetTransform
			,"Advance"
			,&b2Sweep::Advance
			,"Normalize"
			,&b2Sweep::Normalize
	);
}
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
	);
}
void register_type_b2Draw(sol::state& state)
{
	state.new_usertype<b2Draw>("b2Draw"
	// fields
	// methods
			,"SetFlags"
			,&b2Draw::SetFlags
			,"GetFlags"
			,&b2Draw::GetFlags
			,"AppendFlags"
			,&b2Draw::AppendFlags
			,"ClearFlags"
			,&b2Draw::ClearFlags
			,"DrawPolygon"
			,&b2Draw::DrawPolygon
			,"DrawSolidPolygon"
			,&b2Draw::DrawSolidPolygon
			,"DrawCircle"
			,&b2Draw::DrawCircle
			,"DrawSolidCircle"
			,&b2Draw::DrawSolidCircle
			,"DrawSegment"
			,&b2Draw::DrawSegment
			,"DrawTransform"
			,&b2Draw::DrawTransform
	);
}
void register_type_b2Timer(sol::state& state)
{
	state.new_usertype<b2Timer>("b2Timer"
	// fields
	// methods
			,"Reset"
			,&b2Timer::Reset
			,"GetMilliseconds"
			,&b2Timer::GetMilliseconds
	);
}
void register_type_b2BlockAllocator(sol::state& state)
{
	state.new_usertype<b2BlockAllocator>("b2BlockAllocator"
	// fields
	// methods
			,"Allocate"
			,&b2BlockAllocator::Allocate
			,"Free"
			,&b2BlockAllocator::Free
			,"Clear"
			,&b2BlockAllocator::Clear
	);
}
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
	);
}
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
	);
}
void register_type_b2Shape(sol::state& state)
{
	state.new_usertype<b2Shape>("b2Shape"
	// fields
		,"m_type"
		,&b2Shape::m_type
		,"m_radius"
		,&b2Shape::m_radius
	// methods
			,"Clone"
			,&b2Shape::Clone
			,"GetType"
			,&b2Shape::GetType
			,"GetChildCount"
			,&b2Shape::GetChildCount
			,"TestPoint"
			,&b2Shape::TestPoint
			,"RayCast"
			,&b2Shape::RayCast
			,"ComputeAABB"
			,&b2Shape::ComputeAABB
			,"ComputeMass"
			,&b2Shape::ComputeMass
	);
}
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
	);
}
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
	);
}
void register_type_b2ChainShape(sol::state& state)
{
	state.new_usertype<b2ChainShape>("b2ChainShape"
	// fields
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
	);
}
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
	);
}
void register_type_b2TreeNode(sol::state& state)
{
	state.new_usertype<b2TreeNode>("b2TreeNode"
	// fields
		,"aabb"
		,&b2TreeNode::aabb
		,"child1"
		,&b2TreeNode::child1
		,"child2"
		,&b2TreeNode::child2
		,"height"
		,&b2TreeNode::height
	// methods
			,"IsLeaf"
			,&b2TreeNode::IsLeaf
	);
}
void register_type_b2DynamicTree(sol::state& state)
{
	state.new_usertype<b2DynamicTree>("b2DynamicTree"
	// fields
	// methods
			,"CreateProxy"
			,&b2DynamicTree::CreateProxy
			,"DestroyProxy"
			,&b2DynamicTree::DestroyProxy
			,"MoveProxy"
			,&b2DynamicTree::MoveProxy
			,"GetUserData"
			,&b2DynamicTree::GetUserData
			,"GetFatAABB"
			,&b2DynamicTree::GetFatAABB
			,"Validate"
			,&b2DynamicTree::Validate
			,"GetHeight"
			,&b2DynamicTree::GetHeight
			,"GetMaxBalance"
			,&b2DynamicTree::GetMaxBalance
			,"GetAreaRatio"
			,&b2DynamicTree::GetAreaRatio
			,"RebuildBottomUp"
			,&b2DynamicTree::RebuildBottomUp
			,"ShiftOrigin"
			,&b2DynamicTree::ShiftOrigin
	);
}
void register_type_b2Pair(sol::state& state)
{
	state.new_usertype<b2Pair>("b2Pair"
	// fields
		,"proxyIdA"
		,&b2Pair::proxyIdA
		,"proxyIdB"
		,&b2Pair::proxyIdB
	// methods
	);
}
void register_type_b2BroadPhase(sol::state& state)
{
	state.new_usertype<b2BroadPhase>("b2BroadPhase"
	// fields
	// methods
			,"CreateProxy"
			,&b2BroadPhase::CreateProxy
			,"DestroyProxy"
			,&b2BroadPhase::DestroyProxy
			,"MoveProxy"
			,&b2BroadPhase::MoveProxy
			,"TouchProxy"
			,&b2BroadPhase::TouchProxy
			,"GetFatAABB"
			,&b2BroadPhase::GetFatAABB
			,"GetUserData"
			,&b2BroadPhase::GetUserData
			,"TestOverlap"
			,&b2BroadPhase::TestOverlap
			,"GetProxyCount"
			,&b2BroadPhase::GetProxyCount
			,"GetTreeHeight"
			,&b2BroadPhase::GetTreeHeight
			,"GetTreeBalance"
			,&b2BroadPhase::GetTreeBalance
			,"GetTreeQuality"
			,&b2BroadPhase::GetTreeQuality
			,"ShiftOrigin"
			,&b2BroadPhase::ShiftOrigin
	);
}
void register_type_b2DistanceProxy(sol::state& state)
{
	state.new_usertype<b2DistanceProxy>("b2DistanceProxy"
	// fields
		,"m_buffer"
		,&b2DistanceProxy::m_buffer
		,"m_count"
		,&b2DistanceProxy::m_count
		,"m_radius"
		,&b2DistanceProxy::m_radius
	// methods
			,"Set"
			,&b2DistanceProxy::Set
			,"GetSupport"
			,&b2DistanceProxy::GetSupport
			,"GetSupportVertex"
			,&b2DistanceProxy::GetSupportVertex
			,"GetVertexCount"
			,&b2DistanceProxy::GetVertexCount
			,"GetVertex"
			,&b2DistanceProxy::GetVertex
	);
}
void register_type_b2SimplexCache(sol::state& state)
{
	state.new_usertype<b2SimplexCache>("b2SimplexCache"
	// fields
		,"metric"
		,&b2SimplexCache::metric
		,"count"
		,&b2SimplexCache::count
		,"indexA"
		,&b2SimplexCache::indexA
		,"indexB"
		,&b2SimplexCache::indexB
	// methods
	);
}
void register_type_b2DistanceInput(sol::state& state)
{
	state.new_usertype<b2DistanceInput>("b2DistanceInput"
	// fields
		,"proxyA"
		,&b2DistanceInput::proxyA
		,"proxyB"
		,&b2DistanceInput::proxyB
		,"transformA"
		,&b2DistanceInput::transformA
		,"transformB"
		,&b2DistanceInput::transformB
		,"useRadii"
		,&b2DistanceInput::useRadii
	// methods
	);
}
void register_type_b2DistanceOutput(sol::state& state)
{
	state.new_usertype<b2DistanceOutput>("b2DistanceOutput"
	// fields
		,"pointA"
		,&b2DistanceOutput::pointA
		,"pointB"
		,&b2DistanceOutput::pointB
		,"distance"
		,&b2DistanceOutput::distance
		,"iterations"
		,&b2DistanceOutput::iterations
	// methods
	);
}
void register_type_b2TOIInput(sol::state& state)
{
	state.new_usertype<b2TOIInput>("b2TOIInput"
	// fields
		,"proxyA"
		,&b2TOIInput::proxyA
		,"proxyB"
		,&b2TOIInput::proxyB
		,"sweepA"
		,&b2TOIInput::sweepA
		,"sweepB"
		,&b2TOIInput::sweepB
		,"tMax"
		,&b2TOIInput::tMax
	// methods
	);
}
void register_type_b2TOIOutput(sol::state& state)
{
	state.new_usertype<b2TOIOutput>("b2TOIOutput"
	// fields
		,"state"
		,&b2TOIOutput::state
		,"t"
		,&b2TOIOutput::t
	// methods
	);
}
void register_enum_b2BodyType(sol::state& state)
{
	state.new_enum("b2BodyType"
		,"b2_staticBody"
		,b2BodyType::b2_staticBody
		,"b2_kinematicBody"
		,b2BodyType::b2_kinematicBody
		,"b2_dynamicBody"
		,b2BodyType::b2_dynamicBody
	);
}
void register_type_b2BodyDef(sol::state& state)
{
	state.new_usertype<b2BodyDef>("b2BodyDef"
	// fields
		,"type"
		,&b2BodyDef::type
		,"position"
		,&b2BodyDef::position
		,"angle"
		,&b2BodyDef::angle
		,"linearVelocity"
		,&b2BodyDef::linearVelocity
		,"angularVelocity"
		,&b2BodyDef::angularVelocity
		,"linearDamping"
		,&b2BodyDef::linearDamping
		,"angularDamping"
		,&b2BodyDef::angularDamping
		,"allowSleep"
		,&b2BodyDef::allowSleep
		,"awake"
		,&b2BodyDef::awake
		,"fixedRotation"
		,&b2BodyDef::fixedRotation
		,"bullet"
		,&b2BodyDef::bullet
		,"active"
		,&b2BodyDef::active
		,"gravityScale"
		,&b2BodyDef::gravityScale
	// methods
	);
}
void register_type_b2Body(sol::state& state)
{
	state.new_usertype<b2Body>("b2Body"
	// fields
	// methods
			,"CreateFixture"
			,sol::overload(
				sol::resolve<b2Fixture *(const b2FixtureDef *)>(&b2Body::CreateFixture)
				,
				sol::resolve<b2Fixture *(const b2Shape *, float32)>(&b2Body::CreateFixture)
			)
			,"DestroyFixture"
			,&b2Body::DestroyFixture
			,"SetTransform"
			,&b2Body::SetTransform
			,"GetTransform"
			,&b2Body::GetTransform
			,"GetPosition"
			,&b2Body::GetPosition
			,"GetAngle"
			,&b2Body::GetAngle
			,"GetWorldCenter"
			,&b2Body::GetWorldCenter
			,"GetLocalCenter"
			,&b2Body::GetLocalCenter
			,"SetLinearVelocity"
			,&b2Body::SetLinearVelocity
			,"GetLinearVelocity"
			,&b2Body::GetLinearVelocity
			,"SetAngularVelocity"
			,&b2Body::SetAngularVelocity
			,"GetAngularVelocity"
			,&b2Body::GetAngularVelocity
			,"ApplyForce"
			,&b2Body::ApplyForce
			,"ApplyForceToCenter"
			,&b2Body::ApplyForceToCenter
			,"ApplyTorque"
			,&b2Body::ApplyTorque
			,"ApplyLinearImpulse"
			,&b2Body::ApplyLinearImpulse
			,"ApplyAngularImpulse"
			,&b2Body::ApplyAngularImpulse
			,"GetMass"
			,&b2Body::GetMass
			,"GetInertia"
			,&b2Body::GetInertia
			,"GetMassData"
			,&b2Body::GetMassData
			,"SetMassData"
			,&b2Body::SetMassData
			,"ResetMassData"
			,&b2Body::ResetMassData
			,"GetWorldPoint"
			,&b2Body::GetWorldPoint
			,"GetWorldVector"
			,&b2Body::GetWorldVector
			,"GetLocalPoint"
			,&b2Body::GetLocalPoint
			,"GetLocalVector"
			,&b2Body::GetLocalVector
			,"GetLinearVelocityFromWorldPoint"
			,&b2Body::GetLinearVelocityFromWorldPoint
			,"GetLinearVelocityFromLocalPoint"
			,&b2Body::GetLinearVelocityFromLocalPoint
			,"GetLinearDamping"
			,&b2Body::GetLinearDamping
			,"SetLinearDamping"
			,&b2Body::SetLinearDamping
			,"GetAngularDamping"
			,&b2Body::GetAngularDamping
			,"SetAngularDamping"
			,&b2Body::SetAngularDamping
			,"GetGravityScale"
			,&b2Body::GetGravityScale
			,"SetGravityScale"
			,&b2Body::SetGravityScale
			,"SetType"
			,&b2Body::SetType
			,"GetType"
			,&b2Body::GetType
			,"SetBullet"
			,&b2Body::SetBullet
			,"IsBullet"
			,&b2Body::IsBullet
			,"SetSleepingAllowed"
			,&b2Body::SetSleepingAllowed
			,"IsSleepingAllowed"
			,&b2Body::IsSleepingAllowed
			,"SetAwake"
			,&b2Body::SetAwake
			,"IsAwake"
			,&b2Body::IsAwake
			,"SetActive"
			,&b2Body::SetActive
			,"IsActive"
			,&b2Body::IsActive
			,"SetFixedRotation"
			,&b2Body::SetFixedRotation
			,"IsFixedRotation"
			,&b2Body::IsFixedRotation
			,"GetFixtureList"
			,sol::overload(
				sol::resolve<b2Fixture *()>(&b2Body::GetFixtureList)
				,
				sol::resolve<const b2Fixture *()const>(&b2Body::GetFixtureList)
			)
			,"GetJointList"
			,sol::overload(
				sol::resolve<b2JointEdge *()>(&b2Body::GetJointList)
				,
				sol::resolve<const b2JointEdge *()const>(&b2Body::GetJointList)
			)
			,"GetContactList"
			,sol::overload(
				sol::resolve<b2ContactEdge *()>(&b2Body::GetContactList)
				,
				sol::resolve<const b2ContactEdge *()const>(&b2Body::GetContactList)
			)
			,"GetNext"
			,sol::overload(
				sol::resolve<b2Body *()>(&b2Body::GetNext)
				,
				sol::resolve<const b2Body *()const>(&b2Body::GetNext)
			)
			,"GetUserData"
			,&b2Body::GetUserData
			,"SetUserData"
			,&b2Body::SetUserData
			,"GetWorld"
			,sol::overload(
				sol::resolve<b2World *()>(&b2Body::GetWorld)
				,
				sol::resolve<const b2World *()const>(&b2Body::GetWorld)
			)
			,"Dump"
			,&b2Body::Dump
	);
}
void register_type_b2Filter(sol::state& state)
{
	state.new_usertype<b2Filter>("b2Filter"
	// fields
		,"categoryBits"
		,&b2Filter::categoryBits
		,"maskBits"
		,&b2Filter::maskBits
		,"groupIndex"
		,&b2Filter::groupIndex
	// methods
	);
}
void register_type_b2FixtureDef(sol::state& state)
{
	state.new_usertype<b2FixtureDef>("b2FixtureDef"
	// fields
		,"friction"
		,&b2FixtureDef::friction
		,"restitution"
		,&b2FixtureDef::restitution
		,"density"
		,&b2FixtureDef::density
		,"isSensor"
		,&b2FixtureDef::isSensor
		,"filter"
		,&b2FixtureDef::filter
	// methods
	);
}
void register_type_b2FixtureProxy(sol::state& state)
{
	state.new_usertype<b2FixtureProxy>("b2FixtureProxy"
	// fields
		,"aabb"
		,&b2FixtureProxy::aabb
		,"childIndex"
		,&b2FixtureProxy::childIndex
		,"proxyId"
		,&b2FixtureProxy::proxyId
	// methods
	);
}
void register_type_b2Fixture(sol::state& state)
{
	state.new_usertype<b2Fixture>("b2Fixture"
	// fields
	// methods
			,"GetType"
			,&b2Fixture::GetType
			,"GetShape"
			,sol::overload(
				sol::resolve<b2Shape *()>(&b2Fixture::GetShape)
				,
				sol::resolve<const b2Shape *()const>(&b2Fixture::GetShape)
			)
			,"SetSensor"
			,&b2Fixture::SetSensor
			,"IsSensor"
			,&b2Fixture::IsSensor
			,"SetFilterData"
			,&b2Fixture::SetFilterData
			,"GetFilterData"
			,&b2Fixture::GetFilterData
			,"Refilter"
			,&b2Fixture::Refilter
			,"GetBody"
			,sol::overload(
				sol::resolve<b2Body *()>(&b2Fixture::GetBody)
				,
				sol::resolve<const b2Body *()const>(&b2Fixture::GetBody)
			)
			,"GetNext"
			,sol::overload(
				sol::resolve<b2Fixture *()>(&b2Fixture::GetNext)
				,
				sol::resolve<const b2Fixture *()const>(&b2Fixture::GetNext)
			)
			,"GetUserData"
			,&b2Fixture::GetUserData
			,"SetUserData"
			,&b2Fixture::SetUserData
			,"TestPoint"
			,&b2Fixture::TestPoint
			,"RayCast"
			,&b2Fixture::RayCast
			,"GetMassData"
			,&b2Fixture::GetMassData
			,"SetDensity"
			,&b2Fixture::SetDensity
			,"GetDensity"
			,&b2Fixture::GetDensity
			,"GetFriction"
			,&b2Fixture::GetFriction
			,"SetFriction"
			,&b2Fixture::SetFriction
			,"GetRestitution"
			,&b2Fixture::GetRestitution
			,"SetRestitution"
			,&b2Fixture::SetRestitution
			,"GetAABB"
			,&b2Fixture::GetAABB
			,"Dump"
			,&b2Fixture::Dump
	);
}
void register_type_b2DestructionListener(sol::state& state)
{
	state.new_usertype<b2DestructionListener>("b2DestructionListener"
	// fields
	// methods
			,"SayGoodbye"
			,sol::overload(
				sol::resolve<void(b2Joint *)>(&b2DestructionListener::SayGoodbye)
				,
				sol::resolve<void(b2Fixture *)>(&b2DestructionListener::SayGoodbye)
			)
	);
}
void register_type_b2ContactFilter(sol::state& state)
{
	state.new_usertype<b2ContactFilter>("b2ContactFilter"
	// fields
	// methods
			,"ShouldCollide"
			,&b2ContactFilter::ShouldCollide
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
	);
}
void register_type_b2QueryCallback(sol::state& state)
{
	state.new_usertype<b2QueryCallback>("b2QueryCallback"
	// fields
	// methods
			,"ReportFixture"
			,&b2QueryCallback::ReportFixture
	);
}
void register_type_b2RayCastCallback(sol::state& state)
{
	state.new_usertype<b2RayCastCallback>("b2RayCastCallback"
	// fields
	// methods
			,"ReportFixture"
			,&b2RayCastCallback::ReportFixture
	);
}
void register_type_b2Profile(sol::state& state)
{
	state.new_usertype<b2Profile>("b2Profile"
	// fields
		,"step"
		,&b2Profile::step
		,"collide"
		,&b2Profile::collide
		,"solve"
		,&b2Profile::solve
		,"solveInit"
		,&b2Profile::solveInit
		,"solveVelocity"
		,&b2Profile::solveVelocity
		,"solvePosition"
		,&b2Profile::solvePosition
		,"broadphase"
		,&b2Profile::broadphase
		,"solveTOI"
		,&b2Profile::solveTOI
	// methods
	);
}
void register_type_b2TimeStep(sol::state& state)
{
	state.new_usertype<b2TimeStep>("b2TimeStep"
	// fields
		,"dt"
		,&b2TimeStep::dt
		,"inv_dt"
		,&b2TimeStep::inv_dt
		,"dtRatio"
		,&b2TimeStep::dtRatio
		,"velocityIterations"
		,&b2TimeStep::velocityIterations
		,"positionIterations"
		,&b2TimeStep::positionIterations
		,"warmStarting"
		,&b2TimeStep::warmStarting
	// methods
	);
}
void register_type_b2Position(sol::state& state)
{
	state.new_usertype<b2Position>("b2Position"
	// fields
		,"c"
		,&b2Position::c
		,"a"
		,&b2Position::a
	// methods
	);
}
void register_type_b2Velocity(sol::state& state)
{
	state.new_usertype<b2Velocity>("b2Velocity"
	// fields
		,"v"
		,&b2Velocity::v
		,"w"
		,&b2Velocity::w
	// methods
	);
}
void register_type_b2SolverData(sol::state& state)
{
	state.new_usertype<b2SolverData>("b2SolverData"
	// fields
		,"step"
		,&b2SolverData::step
	// methods
	);
}
void register_type_b2StackEntry(sol::state& state)
{
	state.new_usertype<b2StackEntry>("b2StackEntry"
	// fields
		,"size"
		,&b2StackEntry::size
		,"usedMalloc"
		,&b2StackEntry::usedMalloc
	// methods
	);
}
void register_type_b2StackAllocator(sol::state& state)
{
	state.new_usertype<b2StackAllocator>("b2StackAllocator"
	// fields
	// methods
			,"Allocate"
			,&b2StackAllocator::Allocate
			,"Free"
			,&b2StackAllocator::Free
			,"GetMaxAllocation"
			,&b2StackAllocator::GetMaxAllocation
	);
}
void register_type_b2ContactManager(sol::state& state)
{
	state.new_usertype<b2ContactManager>("b2ContactManager"
	// fields
		,"m_broadPhase"
		,&b2ContactManager::m_broadPhase
		,"m_contactCount"
		,&b2ContactManager::m_contactCount
	// methods
			,"AddPair"
			,&b2ContactManager::AddPair
			,"FindNewContacts"
			,&b2ContactManager::FindNewContacts
			,"Destroy"
			,&b2ContactManager::Destroy
			,"Collide"
			,&b2ContactManager::Collide
	);
}
void register_type_b2World(sol::state& state)
{
	state.new_usertype<b2World>("b2World"
	// fields
	// methods
			,"SetDestructionListener"
			,&b2World::SetDestructionListener
			,"SetContactFilter"
			,&b2World::SetContactFilter
			,"SetContactListener"
			,&b2World::SetContactListener
			,"SetDebugDraw"
			,&b2World::SetDebugDraw
			,"CreateBody"
			,&b2World::CreateBody
			,"DestroyBody"
			,&b2World::DestroyBody
			,"CreateJoint"
			,&b2World::CreateJoint
			,"DestroyJoint"
			,&b2World::DestroyJoint
			,"Step"
			,&b2World::Step
			,"ClearForces"
			,&b2World::ClearForces
			,"DrawDebugData"
			,&b2World::DrawDebugData
			,"QueryAABB"
			,&b2World::QueryAABB
			,"RayCast"
			,&b2World::RayCast
			,"GetBodyList"
			,sol::overload(
				sol::resolve<b2Body *()>(&b2World::GetBodyList)
				,
				sol::resolve<const b2Body *()const>(&b2World::GetBodyList)
			)
			,"GetJointList"
			,sol::overload(
				sol::resolve<b2Joint *()>(&b2World::GetJointList)
				,
				sol::resolve<const b2Joint *()const>(&b2World::GetJointList)
			)
			,"GetContactList"
			,sol::overload(
				sol::resolve<b2Contact *()>(&b2World::GetContactList)
				,
				sol::resolve<const b2Contact *()const>(&b2World::GetContactList)
			)
			,"SetAllowSleeping"
			,&b2World::SetAllowSleeping
			,"GetAllowSleeping"
			,&b2World::GetAllowSleeping
			,"SetWarmStarting"
			,&b2World::SetWarmStarting
			,"GetWarmStarting"
			,&b2World::GetWarmStarting
			,"SetContinuousPhysics"
			,&b2World::SetContinuousPhysics
			,"GetContinuousPhysics"
			,&b2World::GetContinuousPhysics
			,"SetSubStepping"
			,&b2World::SetSubStepping
			,"GetSubStepping"
			,&b2World::GetSubStepping
			,"GetProxyCount"
			,&b2World::GetProxyCount
			,"GetBodyCount"
			,&b2World::GetBodyCount
			,"GetJointCount"
			,&b2World::GetJointCount
			,"GetContactCount"
			,&b2World::GetContactCount
			,"GetTreeHeight"
			,&b2World::GetTreeHeight
			,"GetTreeBalance"
			,&b2World::GetTreeBalance
			,"GetTreeQuality"
			,&b2World::GetTreeQuality
			,"SetGravity"
			,&b2World::SetGravity
			,"GetGravity"
			,&b2World::GetGravity
			,"IsLocked"
			,&b2World::IsLocked
			,"SetAutoClearForces"
			,&b2World::SetAutoClearForces
			,"GetAutoClearForces"
			,&b2World::GetAutoClearForces
			,"ShiftOrigin"
			,&b2World::ShiftOrigin
			,"GetContactManager"
			,&b2World::GetContactManager
			,"GetProfile"
			,&b2World::GetProfile
			,"Dump"
			,&b2World::Dump
	);
}
void register_type_b2ContactRegister(sol::state& state)
{
	state.new_usertype<b2ContactRegister>("b2ContactRegister"
	// fields
		,"primary"
		,&b2ContactRegister::primary
	// methods
	);
}
void register_type_b2ContactEdge(sol::state& state)
{
	state.new_usertype<b2ContactEdge>("b2ContactEdge"
	// fields
	// methods
	);
}
void register_type_b2Contact(sol::state& state)
{
	state.new_usertype<b2Contact>("b2Contact"
	// fields
	// methods
			,"GetManifold"
			,sol::overload(
				sol::resolve<b2Manifold *()>(&b2Contact::GetManifold)
				,
				sol::resolve<const b2Manifold *()const>(&b2Contact::GetManifold)
			)
			,"GetWorldManifold"
			,&b2Contact::GetWorldManifold
			,"IsTouching"
			,&b2Contact::IsTouching
			,"SetEnabled"
			,&b2Contact::SetEnabled
			,"IsEnabled"
			,&b2Contact::IsEnabled
			,"GetNext"
			,sol::overload(
				sol::resolve<b2Contact *()>(&b2Contact::GetNext)
				,
				sol::resolve<const b2Contact *()const>(&b2Contact::GetNext)
			)
			,"GetFixtureA"
			,sol::overload(
				sol::resolve<b2Fixture *()>(&b2Contact::GetFixtureA)
				,
				sol::resolve<const b2Fixture *()const>(&b2Contact::GetFixtureA)
			)
			,"GetChildIndexA"
			,&b2Contact::GetChildIndexA
			,"GetFixtureB"
			,sol::overload(
				sol::resolve<b2Fixture *()>(&b2Contact::GetFixtureB)
				,
				sol::resolve<const b2Fixture *()const>(&b2Contact::GetFixtureB)
			)
			,"GetChildIndexB"
			,&b2Contact::GetChildIndexB
			,"SetFriction"
			,&b2Contact::SetFriction
			,"GetFriction"
			,&b2Contact::GetFriction
			,"ResetFriction"
			,&b2Contact::ResetFriction
			,"SetRestitution"
			,&b2Contact::SetRestitution
			,"GetRestitution"
			,&b2Contact::GetRestitution
			,"ResetRestitution"
			,&b2Contact::ResetRestitution
			,"SetTangentSpeed"
			,&b2Contact::SetTangentSpeed
			,"GetTangentSpeed"
			,&b2Contact::GetTangentSpeed
			,"Evaluate"
			,&b2Contact::Evaluate
	);
}
void register_enum_b2JointType(sol::state& state)
{
	state.new_enum("b2JointType"
		,"e_unknownJoint"
		,b2JointType::e_unknownJoint
		,"e_revoluteJoint"
		,b2JointType::e_revoluteJoint
		,"e_prismaticJoint"
		,b2JointType::e_prismaticJoint
		,"e_distanceJoint"
		,b2JointType::e_distanceJoint
		,"e_pulleyJoint"
		,b2JointType::e_pulleyJoint
		,"e_mouseJoint"
		,b2JointType::e_mouseJoint
		,"e_gearJoint"
		,b2JointType::e_gearJoint
		,"e_wheelJoint"
		,b2JointType::e_wheelJoint
		,"e_weldJoint"
		,b2JointType::e_weldJoint
		,"e_frictionJoint"
		,b2JointType::e_frictionJoint
		,"e_ropeJoint"
		,b2JointType::e_ropeJoint
		,"e_motorJoint"
		,b2JointType::e_motorJoint
	);
}
void register_enum_b2LimitState(sol::state& state)
{
	state.new_enum("b2LimitState"
		,"e_inactiveLimit"
		,b2LimitState::e_inactiveLimit
		,"e_atLowerLimit"
		,b2LimitState::e_atLowerLimit
		,"e_atUpperLimit"
		,b2LimitState::e_atUpperLimit
		,"e_equalLimits"
		,b2LimitState::e_equalLimits
	);
}
void register_type_b2Jacobian(sol::state& state)
{
	state.new_usertype<b2Jacobian>("b2Jacobian"
	// fields
		,"linear"
		,&b2Jacobian::linear
		,"angularA"
		,&b2Jacobian::angularA
		,"angularB"
		,&b2Jacobian::angularB
	// methods
	);
}
void register_type_b2JointEdge(sol::state& state)
{
	state.new_usertype<b2JointEdge>("b2JointEdge"
	// fields
	// methods
	);
}
void register_type_b2JointDef(sol::state& state)
{
	state.new_usertype<b2JointDef>("b2JointDef"
	// fields
		,"type"
		,&b2JointDef::type
		,"collideConnected"
		,&b2JointDef::collideConnected
	// methods
	);
}
void register_type_b2Joint(sol::state& state)
{
	state.new_usertype<b2Joint>("b2Joint"
	// fields
	// methods
			,"GetType"
			,&b2Joint::GetType
			,"GetBodyA"
			,&b2Joint::GetBodyA
			,"GetBodyB"
			,&b2Joint::GetBodyB
			,"GetAnchorA"
			,&b2Joint::GetAnchorA
			,"GetAnchorB"
			,&b2Joint::GetAnchorB
			,"GetReactionForce"
			,&b2Joint::GetReactionForce
			,"GetReactionTorque"
			,&b2Joint::GetReactionTorque
			,"GetNext"
			,sol::overload(
				sol::resolve<b2Joint *()>(&b2Joint::GetNext)
				,
				sol::resolve<const b2Joint *()const>(&b2Joint::GetNext)
			)
			,"GetUserData"
			,&b2Joint::GetUserData
			,"SetUserData"
			,&b2Joint::SetUserData
			,"IsActive"
			,&b2Joint::IsActive
			,"GetCollideConnected"
			,&b2Joint::GetCollideConnected
			,"Dump"
			,&b2Joint::Dump
			,"ShiftOrigin"
			,&b2Joint::ShiftOrigin
	);
}
void register_type_b2DistanceJointDef(sol::state& state)
{
	state.new_usertype<b2DistanceJointDef>("b2DistanceJointDef"
	// fields
		,"localAnchorA"
		,&b2DistanceJointDef::localAnchorA
		,"localAnchorB"
		,&b2DistanceJointDef::localAnchorB
		,"length"
		,&b2DistanceJointDef::length
		,"frequencyHz"
		,&b2DistanceJointDef::frequencyHz
		,"dampingRatio"
		,&b2DistanceJointDef::dampingRatio
	// methods
			,"Initialize"
			,&b2DistanceJointDef::Initialize
	);
}
void register_type_b2DistanceJoint(sol::state& state)
{
	state.new_usertype<b2DistanceJoint>("b2DistanceJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2DistanceJoint::GetAnchorA
			,"GetAnchorB"
			,&b2DistanceJoint::GetAnchorB
			,"GetReactionForce"
			,&b2DistanceJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2DistanceJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2DistanceJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2DistanceJoint::GetLocalAnchorB
			,"SetLength"
			,&b2DistanceJoint::SetLength
			,"GetLength"
			,&b2DistanceJoint::GetLength
			,"SetFrequency"
			,&b2DistanceJoint::SetFrequency
			,"GetFrequency"
			,&b2DistanceJoint::GetFrequency
			,"SetDampingRatio"
			,&b2DistanceJoint::SetDampingRatio
			,"GetDampingRatio"
			,&b2DistanceJoint::GetDampingRatio
			,"Dump"
			,&b2DistanceJoint::Dump
	);
}
void register_type_b2FrictionJointDef(sol::state& state)
{
	state.new_usertype<b2FrictionJointDef>("b2FrictionJointDef"
	// fields
		,"localAnchorA"
		,&b2FrictionJointDef::localAnchorA
		,"localAnchorB"
		,&b2FrictionJointDef::localAnchorB
		,"maxForce"
		,&b2FrictionJointDef::maxForce
		,"maxTorque"
		,&b2FrictionJointDef::maxTorque
	// methods
			,"Initialize"
			,&b2FrictionJointDef::Initialize
	);
}
void register_type_b2FrictionJoint(sol::state& state)
{
	state.new_usertype<b2FrictionJoint>("b2FrictionJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2FrictionJoint::GetAnchorA
			,"GetAnchorB"
			,&b2FrictionJoint::GetAnchorB
			,"GetReactionForce"
			,&b2FrictionJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2FrictionJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2FrictionJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2FrictionJoint::GetLocalAnchorB
			,"SetMaxForce"
			,&b2FrictionJoint::SetMaxForce
			,"GetMaxForce"
			,&b2FrictionJoint::GetMaxForce
			,"SetMaxTorque"
			,&b2FrictionJoint::SetMaxTorque
			,"GetMaxTorque"
			,&b2FrictionJoint::GetMaxTorque
			,"Dump"
			,&b2FrictionJoint::Dump
	);
}
void register_type_b2GearJointDef(sol::state& state)
{
	state.new_usertype<b2GearJointDef>("b2GearJointDef"
	// fields
		,"ratio"
		,&b2GearJointDef::ratio
	// methods
	);
}
void register_type_b2GearJoint(sol::state& state)
{
	state.new_usertype<b2GearJoint>("b2GearJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2GearJoint::GetAnchorA
			,"GetAnchorB"
			,&b2GearJoint::GetAnchorB
			,"GetReactionForce"
			,&b2GearJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2GearJoint::GetReactionTorque
			,"GetJoint1"
			,&b2GearJoint::GetJoint1
			,"GetJoint2"
			,&b2GearJoint::GetJoint2
			,"SetRatio"
			,&b2GearJoint::SetRatio
			,"GetRatio"
			,&b2GearJoint::GetRatio
			,"Dump"
			,&b2GearJoint::Dump
	);
}
void register_type_b2MotorJointDef(sol::state& state)
{
	state.new_usertype<b2MotorJointDef>("b2MotorJointDef"
	// fields
		,"linearOffset"
		,&b2MotorJointDef::linearOffset
		,"angularOffset"
		,&b2MotorJointDef::angularOffset
		,"maxForce"
		,&b2MotorJointDef::maxForce
		,"maxTorque"
		,&b2MotorJointDef::maxTorque
		,"correctionFactor"
		,&b2MotorJointDef::correctionFactor
	// methods
			,"Initialize"
			,&b2MotorJointDef::Initialize
	);
}
void register_type_b2MotorJoint(sol::state& state)
{
	state.new_usertype<b2MotorJoint>("b2MotorJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2MotorJoint::GetAnchorA
			,"GetAnchorB"
			,&b2MotorJoint::GetAnchorB
			,"GetReactionForce"
			,&b2MotorJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2MotorJoint::GetReactionTorque
			,"SetLinearOffset"
			,&b2MotorJoint::SetLinearOffset
			,"GetLinearOffset"
			,&b2MotorJoint::GetLinearOffset
			,"SetAngularOffset"
			,&b2MotorJoint::SetAngularOffset
			,"GetAngularOffset"
			,&b2MotorJoint::GetAngularOffset
			,"SetMaxForce"
			,&b2MotorJoint::SetMaxForce
			,"GetMaxForce"
			,&b2MotorJoint::GetMaxForce
			,"SetMaxTorque"
			,&b2MotorJoint::SetMaxTorque
			,"GetMaxTorque"
			,&b2MotorJoint::GetMaxTorque
			,"SetCorrectionFactor"
			,&b2MotorJoint::SetCorrectionFactor
			,"GetCorrectionFactor"
			,&b2MotorJoint::GetCorrectionFactor
			,"Dump"
			,&b2MotorJoint::Dump
	);
}
void register_type_b2MouseJointDef(sol::state& state)
{
	state.new_usertype<b2MouseJointDef>("b2MouseJointDef"
	// fields
		,"target"
		,&b2MouseJointDef::target
		,"maxForce"
		,&b2MouseJointDef::maxForce
		,"frequencyHz"
		,&b2MouseJointDef::frequencyHz
		,"dampingRatio"
		,&b2MouseJointDef::dampingRatio
	// methods
	);
}
void register_type_b2MouseJoint(sol::state& state)
{
	state.new_usertype<b2MouseJoint>("b2MouseJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2MouseJoint::GetAnchorA
			,"GetAnchorB"
			,&b2MouseJoint::GetAnchorB
			,"GetReactionForce"
			,&b2MouseJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2MouseJoint::GetReactionTorque
			,"SetTarget"
			,&b2MouseJoint::SetTarget
			,"GetTarget"
			,&b2MouseJoint::GetTarget
			,"SetMaxForce"
			,&b2MouseJoint::SetMaxForce
			,"GetMaxForce"
			,&b2MouseJoint::GetMaxForce
			,"SetFrequency"
			,&b2MouseJoint::SetFrequency
			,"GetFrequency"
			,&b2MouseJoint::GetFrequency
			,"SetDampingRatio"
			,&b2MouseJoint::SetDampingRatio
			,"GetDampingRatio"
			,&b2MouseJoint::GetDampingRatio
			,"Dump"
			,&b2MouseJoint::Dump
			,"ShiftOrigin"
			,&b2MouseJoint::ShiftOrigin
	);
}
void register_type_b2PrismaticJointDef(sol::state& state)
{
	state.new_usertype<b2PrismaticJointDef>("b2PrismaticJointDef"
	// fields
		,"localAnchorA"
		,&b2PrismaticJointDef::localAnchorA
		,"localAnchorB"
		,&b2PrismaticJointDef::localAnchorB
		,"localAxisA"
		,&b2PrismaticJointDef::localAxisA
		,"referenceAngle"
		,&b2PrismaticJointDef::referenceAngle
		,"enableLimit"
		,&b2PrismaticJointDef::enableLimit
		,"lowerTranslation"
		,&b2PrismaticJointDef::lowerTranslation
		,"upperTranslation"
		,&b2PrismaticJointDef::upperTranslation
		,"enableMotor"
		,&b2PrismaticJointDef::enableMotor
		,"maxMotorForce"
		,&b2PrismaticJointDef::maxMotorForce
		,"motorSpeed"
		,&b2PrismaticJointDef::motorSpeed
	// methods
			,"Initialize"
			,&b2PrismaticJointDef::Initialize
	);
}
void register_type_b2PrismaticJoint(sol::state& state)
{
	state.new_usertype<b2PrismaticJoint>("b2PrismaticJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2PrismaticJoint::GetAnchorA
			,"GetAnchorB"
			,&b2PrismaticJoint::GetAnchorB
			,"GetReactionForce"
			,&b2PrismaticJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2PrismaticJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2PrismaticJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2PrismaticJoint::GetLocalAnchorB
			,"GetLocalAxisA"
			,&b2PrismaticJoint::GetLocalAxisA
			,"GetReferenceAngle"
			,&b2PrismaticJoint::GetReferenceAngle
			,"GetJointTranslation"
			,&b2PrismaticJoint::GetJointTranslation
			,"GetJointSpeed"
			,&b2PrismaticJoint::GetJointSpeed
			,"IsLimitEnabled"
			,&b2PrismaticJoint::IsLimitEnabled
			,"EnableLimit"
			,&b2PrismaticJoint::EnableLimit
			,"GetLowerLimit"
			,&b2PrismaticJoint::GetLowerLimit
			,"GetUpperLimit"
			,&b2PrismaticJoint::GetUpperLimit
			,"SetLimits"
			,&b2PrismaticJoint::SetLimits
			,"IsMotorEnabled"
			,&b2PrismaticJoint::IsMotorEnabled
			,"EnableMotor"
			,&b2PrismaticJoint::EnableMotor
			,"SetMotorSpeed"
			,&b2PrismaticJoint::SetMotorSpeed
			,"GetMotorSpeed"
			,&b2PrismaticJoint::GetMotorSpeed
			,"SetMaxMotorForce"
			,&b2PrismaticJoint::SetMaxMotorForce
			,"GetMaxMotorForce"
			,&b2PrismaticJoint::GetMaxMotorForce
			,"GetMotorForce"
			,&b2PrismaticJoint::GetMotorForce
			,"Dump"
			,&b2PrismaticJoint::Dump
	);
}
void register_type_b2PulleyJointDef(sol::state& state)
{
	state.new_usertype<b2PulleyJointDef>("b2PulleyJointDef"
	// fields
		,"groundAnchorA"
		,&b2PulleyJointDef::groundAnchorA
		,"groundAnchorB"
		,&b2PulleyJointDef::groundAnchorB
		,"localAnchorA"
		,&b2PulleyJointDef::localAnchorA
		,"localAnchorB"
		,&b2PulleyJointDef::localAnchorB
		,"lengthA"
		,&b2PulleyJointDef::lengthA
		,"lengthB"
		,&b2PulleyJointDef::lengthB
		,"ratio"
		,&b2PulleyJointDef::ratio
	// methods
			,"Initialize"
			,&b2PulleyJointDef::Initialize
	);
}
void register_type_b2PulleyJoint(sol::state& state)
{
	state.new_usertype<b2PulleyJoint>("b2PulleyJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2PulleyJoint::GetAnchorA
			,"GetAnchorB"
			,&b2PulleyJoint::GetAnchorB
			,"GetReactionForce"
			,&b2PulleyJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2PulleyJoint::GetReactionTorque
			,"GetGroundAnchorA"
			,&b2PulleyJoint::GetGroundAnchorA
			,"GetGroundAnchorB"
			,&b2PulleyJoint::GetGroundAnchorB
			,"GetLengthA"
			,&b2PulleyJoint::GetLengthA
			,"GetLengthB"
			,&b2PulleyJoint::GetLengthB
			,"GetRatio"
			,&b2PulleyJoint::GetRatio
			,"GetCurrentLengthA"
			,&b2PulleyJoint::GetCurrentLengthA
			,"GetCurrentLengthB"
			,&b2PulleyJoint::GetCurrentLengthB
			,"Dump"
			,&b2PulleyJoint::Dump
			,"ShiftOrigin"
			,&b2PulleyJoint::ShiftOrigin
	);
}
void register_type_b2RevoluteJointDef(sol::state& state)
{
	state.new_usertype<b2RevoluteJointDef>("b2RevoluteJointDef"
	// fields
		,"localAnchorA"
		,&b2RevoluteJointDef::localAnchorA
		,"localAnchorB"
		,&b2RevoluteJointDef::localAnchorB
		,"referenceAngle"
		,&b2RevoluteJointDef::referenceAngle
		,"enableLimit"
		,&b2RevoluteJointDef::enableLimit
		,"lowerAngle"
		,&b2RevoluteJointDef::lowerAngle
		,"upperAngle"
		,&b2RevoluteJointDef::upperAngle
		,"enableMotor"
		,&b2RevoluteJointDef::enableMotor
		,"motorSpeed"
		,&b2RevoluteJointDef::motorSpeed
		,"maxMotorTorque"
		,&b2RevoluteJointDef::maxMotorTorque
	// methods
			,"Initialize"
			,&b2RevoluteJointDef::Initialize
	);
}
void register_type_b2RevoluteJoint(sol::state& state)
{
	state.new_usertype<b2RevoluteJoint>("b2RevoluteJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2RevoluteJoint::GetAnchorA
			,"GetAnchorB"
			,&b2RevoluteJoint::GetAnchorB
			,"GetLocalAnchorA"
			,&b2RevoluteJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2RevoluteJoint::GetLocalAnchorB
			,"GetReferenceAngle"
			,&b2RevoluteJoint::GetReferenceAngle
			,"GetJointAngle"
			,&b2RevoluteJoint::GetJointAngle
			,"GetJointSpeed"
			,&b2RevoluteJoint::GetJointSpeed
			,"IsLimitEnabled"
			,&b2RevoluteJoint::IsLimitEnabled
			,"EnableLimit"
			,&b2RevoluteJoint::EnableLimit
			,"GetLowerLimit"
			,&b2RevoluteJoint::GetLowerLimit
			,"GetUpperLimit"
			,&b2RevoluteJoint::GetUpperLimit
			,"SetLimits"
			,&b2RevoluteJoint::SetLimits
			,"IsMotorEnabled"
			,&b2RevoluteJoint::IsMotorEnabled
			,"EnableMotor"
			,&b2RevoluteJoint::EnableMotor
			,"SetMotorSpeed"
			,&b2RevoluteJoint::SetMotorSpeed
			,"GetMotorSpeed"
			,&b2RevoluteJoint::GetMotorSpeed
			,"SetMaxMotorTorque"
			,&b2RevoluteJoint::SetMaxMotorTorque
			,"GetMaxMotorTorque"
			,&b2RevoluteJoint::GetMaxMotorTorque
			,"GetReactionForce"
			,&b2RevoluteJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2RevoluteJoint::GetReactionTorque
			,"GetMotorTorque"
			,&b2RevoluteJoint::GetMotorTorque
			,"Dump"
			,&b2RevoluteJoint::Dump
	);
}
void register_type_b2RopeJointDef(sol::state& state)
{
	state.new_usertype<b2RopeJointDef>("b2RopeJointDef"
	// fields
		,"localAnchorA"
		,&b2RopeJointDef::localAnchorA
		,"localAnchorB"
		,&b2RopeJointDef::localAnchorB
		,"maxLength"
		,&b2RopeJointDef::maxLength
	// methods
	);
}
void register_type_b2RopeJoint(sol::state& state)
{
	state.new_usertype<b2RopeJoint>("b2RopeJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2RopeJoint::GetAnchorA
			,"GetAnchorB"
			,&b2RopeJoint::GetAnchorB
			,"GetReactionForce"
			,&b2RopeJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2RopeJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2RopeJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2RopeJoint::GetLocalAnchorB
			,"SetMaxLength"
			,&b2RopeJoint::SetMaxLength
			,"GetMaxLength"
			,&b2RopeJoint::GetMaxLength
			,"GetLimitState"
			,&b2RopeJoint::GetLimitState
			,"Dump"
			,&b2RopeJoint::Dump
	);
}
void register_type_b2WeldJointDef(sol::state& state)
{
	state.new_usertype<b2WeldJointDef>("b2WeldJointDef"
	// fields
		,"localAnchorA"
		,&b2WeldJointDef::localAnchorA
		,"localAnchorB"
		,&b2WeldJointDef::localAnchorB
		,"referenceAngle"
		,&b2WeldJointDef::referenceAngle
		,"frequencyHz"
		,&b2WeldJointDef::frequencyHz
		,"dampingRatio"
		,&b2WeldJointDef::dampingRatio
	// methods
			,"Initialize"
			,&b2WeldJointDef::Initialize
	);
}
void register_type_b2WeldJoint(sol::state& state)
{
	state.new_usertype<b2WeldJoint>("b2WeldJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2WeldJoint::GetAnchorA
			,"GetAnchorB"
			,&b2WeldJoint::GetAnchorB
			,"GetReactionForce"
			,&b2WeldJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2WeldJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2WeldJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2WeldJoint::GetLocalAnchorB
			,"GetReferenceAngle"
			,&b2WeldJoint::GetReferenceAngle
			,"SetFrequency"
			,&b2WeldJoint::SetFrequency
			,"GetFrequency"
			,&b2WeldJoint::GetFrequency
			,"SetDampingRatio"
			,&b2WeldJoint::SetDampingRatio
			,"GetDampingRatio"
			,&b2WeldJoint::GetDampingRatio
			,"Dump"
			,&b2WeldJoint::Dump
	);
}
void register_type_b2WheelJointDef(sol::state& state)
{
	state.new_usertype<b2WheelJointDef>("b2WheelJointDef"
	// fields
		,"localAnchorA"
		,&b2WheelJointDef::localAnchorA
		,"localAnchorB"
		,&b2WheelJointDef::localAnchorB
		,"localAxisA"
		,&b2WheelJointDef::localAxisA
		,"enableMotor"
		,&b2WheelJointDef::enableMotor
		,"maxMotorTorque"
		,&b2WheelJointDef::maxMotorTorque
		,"motorSpeed"
		,&b2WheelJointDef::motorSpeed
		,"frequencyHz"
		,&b2WheelJointDef::frequencyHz
		,"dampingRatio"
		,&b2WheelJointDef::dampingRatio
	// methods
			,"Initialize"
			,&b2WheelJointDef::Initialize
	);
}
void register_type_b2WheelJoint(sol::state& state)
{
	state.new_usertype<b2WheelJoint>("b2WheelJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2WheelJoint::GetAnchorA
			,"GetAnchorB"
			,&b2WheelJoint::GetAnchorB
			,"GetReactionForce"
			,&b2WheelJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2WheelJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2WheelJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2WheelJoint::GetLocalAnchorB
			,"GetLocalAxisA"
			,&b2WheelJoint::GetLocalAxisA
			,"GetJointTranslation"
			,&b2WheelJoint::GetJointTranslation
			,"GetJointSpeed"
			,&b2WheelJoint::GetJointSpeed
			,"IsMotorEnabled"
			,&b2WheelJoint::IsMotorEnabled
			,"EnableMotor"
			,&b2WheelJoint::EnableMotor
			,"SetMotorSpeed"
			,&b2WheelJoint::SetMotorSpeed
			,"GetMotorSpeed"
			,&b2WheelJoint::GetMotorSpeed
			,"SetMaxMotorTorque"
			,&b2WheelJoint::SetMaxMotorTorque
			,"GetMaxMotorTorque"
			,&b2WheelJoint::GetMaxMotorTorque
			,"GetMotorTorque"
			,&b2WheelJoint::GetMotorTorque
			,"SetSpringFrequencyHz"
			,&b2WheelJoint::SetSpringFrequencyHz
			,"GetSpringFrequencyHz"
			,&b2WheelJoint::GetSpringFrequencyHz
			,"SetSpringDampingRatio"
			,&b2WheelJoint::SetSpringDampingRatio
			,"GetSpringDampingRatio"
			,&b2WheelJoint::GetSpringDampingRatio
			,"Dump"
			,&b2WheelJoint::Dump
	);
}
void register_library_Box2D(sol::state& state)
{
	register_type_b2Version(state);
	register_type_b2Vec2(state);
	register_type_b2Vec3(state);
	register_type_b2Mat22(state);
	register_type_b2Mat33(state);
	register_type_b2Rot(state);
	register_type_b2Transform(state);
	register_type_b2Sweep(state);
	register_type_b2Color(state);
	register_type_b2Draw(state);
	register_type_b2Timer(state);
	register_type_b2BlockAllocator(state);
	register_type_b2ContactFeature(state);
	register_type_b2ManifoldPoint(state);
	register_type_b2Manifold(state);
	register_type_b2WorldManifold(state);
	register_enum_b2PointState(state);
	register_type_b2ClipVertex(state);
	register_type_b2RayCastInput(state);
	register_type_b2RayCastOutput(state);
	register_type_b2AABB(state);
	register_type_b2MassData(state);
	register_type_b2Shape(state);
	register_type_b2CircleShape(state);
	register_type_b2EdgeShape(state);
	register_type_b2ChainShape(state);
	register_type_b2PolygonShape(state);
	register_type_b2TreeNode(state);
	register_type_b2DynamicTree(state);
	register_type_b2Pair(state);
	register_type_b2BroadPhase(state);
	register_type_b2DistanceProxy(state);
	register_type_b2SimplexCache(state);
	register_type_b2DistanceInput(state);
	register_type_b2DistanceOutput(state);
	register_type_b2TOIInput(state);
	register_type_b2TOIOutput(state);
	register_enum_b2BodyType(state);
	register_type_b2BodyDef(state);
	register_type_b2Body(state);
	register_type_b2Filter(state);
	register_type_b2FixtureDef(state);
	register_type_b2FixtureProxy(state);
	register_type_b2Fixture(state);
	register_type_b2DestructionListener(state);
	register_type_b2ContactFilter(state);
	register_type_b2ContactImpulse(state);
	register_type_b2ContactListener(state);
	register_type_b2QueryCallback(state);
	register_type_b2RayCastCallback(state);
	register_type_b2Profile(state);
	register_type_b2TimeStep(state);
	register_type_b2Position(state);
	register_type_b2Velocity(state);
	register_type_b2SolverData(state);
	register_type_b2StackEntry(state);
	register_type_b2StackAllocator(state);
	register_type_b2ContactManager(state);
	register_type_b2World(state);
	register_type_b2ContactRegister(state);
	register_type_b2ContactEdge(state);
	register_type_b2Contact(state);
	register_enum_b2JointType(state);
	register_enum_b2LimitState(state);
	register_type_b2Jacobian(state);
	register_type_b2JointEdge(state);
	register_type_b2JointDef(state);
	register_type_b2Joint(state);
	register_type_b2DistanceJointDef(state);
	register_type_b2DistanceJoint(state);
	register_type_b2FrictionJointDef(state);
	register_type_b2FrictionJoint(state);
	register_type_b2GearJointDef(state);
	register_type_b2GearJoint(state);
	register_type_b2MotorJointDef(state);
	register_type_b2MotorJoint(state);
	register_type_b2MouseJointDef(state);
	register_type_b2MouseJoint(state);
	register_type_b2PrismaticJointDef(state);
	register_type_b2PrismaticJoint(state);
	register_type_b2PulleyJointDef(state);
	register_type_b2PulleyJoint(state);
	register_type_b2RevoluteJointDef(state);
	register_type_b2RevoluteJoint(state);
	register_type_b2RopeJointDef(state);
	register_type_b2RopeJoint(state);
	register_type_b2WeldJointDef(state);
	register_type_b2WeldJoint(state);
	register_type_b2WheelJointDef(state);
	register_type_b2WheelJoint(state);
}
