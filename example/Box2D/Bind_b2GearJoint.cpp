#include <Bind_Box2D.h>

void register_type_b2GearJointDef(sol::state& state)
{
	state.new_usertype<b2GearJointDef>("b2GearJointDef"
	// fields
		,"joint1"
		,&b2GearJointDef::joint1
		,"joint2"
		,&b2GearJointDef::joint2
		,"ratio"
		,&b2GearJointDef::ratio
	// methods
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2GearJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
