#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2WheelJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
