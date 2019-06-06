#include <Bind_Box2D.h>

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
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2MotorJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
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
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
