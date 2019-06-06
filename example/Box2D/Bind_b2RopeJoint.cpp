#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2RopeJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
