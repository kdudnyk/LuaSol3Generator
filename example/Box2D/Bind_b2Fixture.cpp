#include <Bind_Box2D.h>

void register_type_b2Filter(sol::state& state)
{
	state.new_usertype<b2Filter>("b2Filter"
	// fields
		,"categoryBits"
		,&b2Filter::categoryBits
		,"maskBits"
		,&b2Filter::maskBits
		,"groupIndex"
		,&b2Filter::groupIndex
	// methods
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Filter()
		>()
    );
}
void register_type_b2FixtureDef(sol::state& state)
{
	state.new_usertype<b2FixtureDef>("b2FixtureDef"
	// fields
		,"shape"
		,&b2FixtureDef::shape
		,"userData"
		,&b2FixtureDef::userData
		,"friction"
		,&b2FixtureDef::friction
		,"restitution"
		,&b2FixtureDef::restitution
		,"density"
		,&b2FixtureDef::density
		,"isSensor"
		,&b2FixtureDef::isSensor
		,"filter"
		,&b2FixtureDef::filter
	// methods
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2FixtureDef()
		>()
    );
}
void register_type_b2FixtureProxy(sol::state& state)
{
	state.new_usertype<b2FixtureProxy>("b2FixtureProxy"
	// fields
		,"aabb"
		,&b2FixtureProxy::aabb
		,"fixture"
		,&b2FixtureProxy::fixture
		,"childIndex"
		,&b2FixtureProxy::childIndex
		,"proxyId"
		,&b2FixtureProxy::proxyId
	// methods
	// constructors
    );
}
void register_type_b2Fixture(sol::state& state)
{
	state.new_usertype<b2Fixture>("b2Fixture"
	// fields
	// methods
			,"GetType"
			,&b2Fixture::GetType
			,"GetShape"
			,sol::overload(
				sol::resolve<b2Shape *()>(&b2Fixture::GetShape)
				,
				sol::resolve<const b2Shape *()const>(&b2Fixture::GetShape)
			)
			,"SetSensor"
			,&b2Fixture::SetSensor
			,"IsSensor"
			,&b2Fixture::IsSensor
			,"SetFilterData"
			,&b2Fixture::SetFilterData
			,"GetFilterData"
			,&b2Fixture::GetFilterData
			,"Refilter"
			,&b2Fixture::Refilter
			,"GetBody"
			,sol::overload(
				sol::resolve<b2Body *()>(&b2Fixture::GetBody)
				,
				sol::resolve<const b2Body *()const>(&b2Fixture::GetBody)
			)
			,"GetNext"
			,sol::overload(
				sol::resolve<b2Fixture *()>(&b2Fixture::GetNext)
				,
				sol::resolve<const b2Fixture *()const>(&b2Fixture::GetNext)
			)
			,"GetUserData"
			,&b2Fixture::GetUserData
			,"SetUserData"
			,&b2Fixture::SetUserData
			,"TestPoint"
			,&b2Fixture::TestPoint
			,"RayCast"
			,&b2Fixture::RayCast
			,"GetMassData"
			,&b2Fixture::GetMassData
			,"SetDensity"
			,&b2Fixture::SetDensity
			,"GetDensity"
			,&b2Fixture::GetDensity
			,"GetFriction"
			,&b2Fixture::GetFriction
			,"SetFriction"
			,&b2Fixture::SetFriction
			,"GetRestitution"
			,&b2Fixture::GetRestitution
			,"SetRestitution"
			,&b2Fixture::SetRestitution
			,"GetAABB"
			,&b2Fixture::GetAABB
			,"Dump"
			,&b2Fixture::Dump
	// constructors
    );
}
