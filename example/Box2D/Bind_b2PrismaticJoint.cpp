#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2PrismaticJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
