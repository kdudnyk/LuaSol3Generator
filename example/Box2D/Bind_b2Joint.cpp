#include <Bind_Box2D.h>

void register_enum_b2JointType(sol::state& state)
{
	state.new_enum("b2JointType"
		,"e_unknownJoint"
		,b2JointType::e_unknownJoint
		,"e_revoluteJoint"
		,b2JointType::e_revoluteJoint
		,"e_prismaticJoint"
		,b2JointType::e_prismaticJoint
		,"e_distanceJoint"
		,b2JointType::e_distanceJoint
		,"e_pulleyJoint"
		,b2JointType::e_pulleyJoint
		,"e_mouseJoint"
		,b2JointType::e_mouseJoint
		,"e_gearJoint"
		,b2JointType::e_gearJoint
		,"e_wheelJoint"
		,b2JointType::e_wheelJoint
		,"e_weldJoint"
		,b2JointType::e_weldJoint
		,"e_frictionJoint"
		,b2JointType::e_frictionJoint
		,"e_ropeJoint"
		,b2JointType::e_ropeJoint
		,"e_motorJoint"
		,b2JointType::e_motorJoint
	);
}
void register_enum_b2LimitState(sol::state& state)
{
	state.new_enum("b2LimitState"
		,"e_inactiveLimit"
		,b2LimitState::e_inactiveLimit
		,"e_atLowerLimit"
		,b2LimitState::e_atLowerLimit
		,"e_atUpperLimit"
		,b2LimitState::e_atUpperLimit
		,"e_equalLimits"
		,b2LimitState::e_equalLimits
	);
}
void register_type_b2Jacobian(sol::state& state)
{
	state.new_usertype<b2Jacobian>("b2Jacobian"
	// fields
		,"linear"
		,&b2Jacobian::linear
		,"angularA"
		,&b2Jacobian::angularA
		,"angularB"
		,&b2Jacobian::angularB
	// methods
	// constructors
    );
}
void register_type_b2JointEdge(sol::state& state)
{
	state.new_usertype<b2JointEdge>("b2JointEdge"
	// fields
		,"other"
		,&b2JointEdge::other
		,"joint"
		,&b2JointEdge::joint
		,"prev"
		,&b2JointEdge::prev
		,"next"
		,&b2JointEdge::next
	// methods
	// constructors
    );
}
void register_type_b2JointDef(sol::state& state)
{
	state.new_usertype<b2JointDef>("b2JointDef"
	// fields
		,"type"
		,&b2JointDef::type
		,"userData"
		,&b2JointDef::userData
		,"bodyA"
		,&b2JointDef::bodyA
		,"bodyB"
		,&b2JointDef::bodyB
		,"collideConnected"
		,&b2JointDef::collideConnected
	// methods
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2JointDef()
		>()
    );
}
