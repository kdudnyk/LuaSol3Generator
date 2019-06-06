#include <Bind_Box2D.h>

void register_type_b2WeldJointDef(sol::state& state)
{
	state.new_usertype<b2WeldJointDef>("b2WeldJointDef"
	// fields
		,"localAnchorA"
		,&b2WeldJointDef::localAnchorA
		,"localAnchorB"
		,&b2WeldJointDef::localAnchorB
		,"referenceAngle"
		,&b2WeldJointDef::referenceAngle
		,"frequencyHz"
		,&b2WeldJointDef::frequencyHz
		,"dampingRatio"
		,&b2WeldJointDef::dampingRatio
	// methods
			,"Initialize"
			,&b2WeldJointDef::Initialize
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2WeldJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
    );
}
void register_type_b2WeldJoint(sol::state& state)
{
	state.new_usertype<b2WeldJoint>("b2WeldJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2WeldJoint::GetAnchorA
			,"GetAnchorB"
			,&b2WeldJoint::GetAnchorB
			,"GetReactionForce"
			,&b2WeldJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2WeldJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2WeldJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2WeldJoint::GetLocalAnchorB
			,"GetReferenceAngle"
			,&b2WeldJoint::GetReferenceAngle
			,"SetFrequency"
			,&b2WeldJoint::SetFrequency
			,"GetFrequency"
			,&b2WeldJoint::GetFrequency
			,"SetDampingRatio"
			,&b2WeldJoint::SetDampingRatio
			,"GetDampingRatio"
			,&b2WeldJoint::GetDampingRatio
			,"Dump"
			,&b2WeldJoint::Dump
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
