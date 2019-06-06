#include <Bind_Box2D.h>

void register_type_b2World(sol::state& state)
{
	state.new_usertype<b2World>("b2World"
	// fields
	// methods
			,"SetDestructionListener"
			,&b2World::SetDestructionListener
			,"SetContactFilter"
			,&b2World::SetContactFilter
			,"SetContactListener"
			,&b2World::SetContactListener
			,"SetDebugDraw"
			,&b2World::SetDebugDraw
			,"CreateBody"
			,&b2World::CreateBody
			,"DestroyBody"
			,&b2World::DestroyBody
			,"CreateJoint"
			,&b2World::CreateJoint
			,"DestroyJoint"
			,&b2World::DestroyJoint
			,"Step"
			,&b2World::Step
			,"ClearForces"
			,&b2World::ClearForces
			,"DrawDebugData"
			,&b2World::DrawDebugData
			,"QueryAABB"
			,&b2World::QueryAABB
			,"RayCast"
			,&b2World::RayCast
			,"GetBodyList"
			,sol::overload(
				sol::resolve<b2Body *()>(&b2World::GetBodyList)
				,
				sol::resolve<const b2Body *()const>(&b2World::GetBodyList)
			)
			,"GetJointList"
			,sol::overload(
				sol::resolve<b2Joint *()>(&b2World::GetJointList)
				,
				sol::resolve<const b2Joint *()const>(&b2World::GetJointList)
			)
			,"GetContactList"
			,sol::overload(
				sol::resolve<b2Contact *()>(&b2World::GetContactList)
				,
				sol::resolve<const b2Contact *()const>(&b2World::GetContactList)
			)
			,"SetAllowSleeping"
			,&b2World::SetAllowSleeping
			,"GetAllowSleeping"
			,&b2World::GetAllowSleeping
			,"SetWarmStarting"
			,&b2World::SetWarmStarting
			,"GetWarmStarting"
			,&b2World::GetWarmStarting
			,"SetContinuousPhysics"
			,&b2World::SetContinuousPhysics
			,"GetContinuousPhysics"
			,&b2World::GetContinuousPhysics
			,"SetSubStepping"
			,&b2World::SetSubStepping
			,"GetSubStepping"
			,&b2World::GetSubStepping
			,"GetProxyCount"
			,&b2World::GetProxyCount
			,"GetBodyCount"
			,&b2World::GetBodyCount
			,"GetJointCount"
			,&b2World::GetJointCount
			,"GetContactCount"
			,&b2World::GetContactCount
			,"GetTreeHeight"
			,&b2World::GetTreeHeight
			,"GetTreeBalance"
			,&b2World::GetTreeBalance
			,"GetTreeQuality"
			,&b2World::GetTreeQuality
			,"SetGravity"
			,&b2World::SetGravity
			,"GetGravity"
			,&b2World::GetGravity
			,"IsLocked"
			,&b2World::IsLocked
			,"SetAutoClearForces"
			,&b2World::SetAutoClearForces
			,"GetAutoClearForces"
			,&b2World::GetAutoClearForces
			,"ShiftOrigin"
			,&b2World::ShiftOrigin
			,"GetContactManager"
			,&b2World::GetContactManager
			,"GetProfile"
			,&b2World::GetProfile
			,"Dump"
			,&b2World::Dump
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2World(const b2Vec2 &)
		>()
    );
}
