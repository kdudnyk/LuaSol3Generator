#include <Bind_Box2D.h>

void register_type_b2Profile(sol::state& state)
{
	state.new_usertype<b2Profile>("b2Profile"
	// fields
		,"step"
		,&b2Profile::step
		,"collide"
		,&b2Profile::collide
		,"solve"
		,&b2Profile::solve
		,"solveInit"
		,&b2Profile::solveInit
		,"solveVelocity"
		,&b2Profile::solveVelocity
		,"solvePosition"
		,&b2Profile::solvePosition
		,"broadphase"
		,&b2Profile::broadphase
		,"solveTOI"
		,&b2Profile::solveTOI
	// methods
	// constructors
    );
}
void register_type_b2TimeStep(sol::state& state)
{
	state.new_usertype<b2TimeStep>("b2TimeStep"
	// fields
		,"dt"
		,&b2TimeStep::dt
		,"inv_dt"
		,&b2TimeStep::inv_dt
		,"dtRatio"
		,&b2TimeStep::dtRatio
		,"velocityIterations"
		,&b2TimeStep::velocityIterations
		,"positionIterations"
		,&b2TimeStep::positionIterations
		,"warmStarting"
		,&b2TimeStep::warmStarting
	// methods
	// constructors
    );
}
void register_type_b2Position(sol::state& state)
{
	state.new_usertype<b2Position>("b2Position"
	// fields
		,"c"
		,&b2Position::c
		,"a"
		,&b2Position::a
	// methods
	// constructors
    );
}
void register_type_b2Velocity(sol::state& state)
{
	state.new_usertype<b2Velocity>("b2Velocity"
	// fields
		,"v"
		,&b2Velocity::v
		,"w"
		,&b2Velocity::w
	// methods
	// constructors
    );
}
void register_type_b2SolverData(sol::state& state)
{
	state.new_usertype<b2SolverData>("b2SolverData"
	// fields
		,"step"
		,&b2SolverData::step
		,"positions"
		,&b2SolverData::positions
		,"velocities"
		,&b2SolverData::velocities
	// methods
	// constructors
    );
}
