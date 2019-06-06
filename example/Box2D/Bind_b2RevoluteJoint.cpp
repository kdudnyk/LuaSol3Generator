#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2RevoluteJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
