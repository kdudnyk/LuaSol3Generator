#include <Bind_Box2D.h>

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
		,"userData"
		,&b2BodyDef::userData
		,"gravityScale"
		,&b2BodyDef::gravityScale
	// methods
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2BodyDef()
		>()
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
	// constructors
    );
}
