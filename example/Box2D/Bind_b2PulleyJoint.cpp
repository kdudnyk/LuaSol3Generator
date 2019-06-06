#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2PulleyJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
