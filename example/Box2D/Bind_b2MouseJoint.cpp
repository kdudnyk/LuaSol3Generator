#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2MouseJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
