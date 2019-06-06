#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2FrictionJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
