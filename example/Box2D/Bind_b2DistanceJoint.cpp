#include <Bind_Box2D.h>

void register_type_b2DistanceJointDef(sol::state& state)
{
	state.new_usertype<b2DistanceJointDef>("b2DistanceJointDef"
	// fields
		,"localAnchorA"
		,&b2DistanceJointDef::localAnchorA
		,"localAnchorB"
		,&b2DistanceJointDef::localAnchorB
		,"length"
		,&b2DistanceJointDef::length
		,"frequencyHz"
		,&b2DistanceJointDef::frequencyHz
		,"dampingRatio"
		,&b2DistanceJointDef::dampingRatio
	// methods
			,"Initialize"
			,&b2DistanceJointDef::Initialize
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2DistanceJointDef()
		>()
	  , sol::base_classes
	  , sol::bases<
		b2JointDef
	  >()
    );
}
void register_type_b2DistanceJoint(sol::state& state)
{
	state.new_usertype<b2DistanceJoint>("b2DistanceJoint"
	// fields
	// methods
			,"GetAnchorA"
			,&b2DistanceJoint::GetAnchorA
			,"GetAnchorB"
			,&b2DistanceJoint::GetAnchorB
			,"GetReactionForce"
			,&b2DistanceJoint::GetReactionForce
			,"GetReactionTorque"
			,&b2DistanceJoint::GetReactionTorque
			,"GetLocalAnchorA"
			,&b2DistanceJoint::GetLocalAnchorA
			,"GetLocalAnchorB"
			,&b2DistanceJoint::GetLocalAnchorB
			,"SetLength"
			,&b2DistanceJoint::SetLength
			,"GetLength"
			,&b2DistanceJoint::GetLength
			,"SetFrequency"
			,&b2DistanceJoint::SetFrequency
			,"GetFrequency"
			,&b2DistanceJoint::GetFrequency
			,"SetDampingRatio"
			,&b2DistanceJoint::SetDampingRatio
			,"GetDampingRatio"
			,&b2DistanceJoint::GetDampingRatio
			,"Dump"
			,&b2DistanceJoint::Dump
	// constructors
	  , sol::base_classes
	  , sol::bases<
		b2Joint
	  >()
    );
}
