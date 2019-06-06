#include <Bind_Box2D.h>

void register_type_b2Pair(sol::state& state)
{
	state.new_usertype<b2Pair>("b2Pair"
	// fields
		,"proxyIdA"
		,&b2Pair::proxyIdA
		,"proxyIdB"
		,&b2Pair::proxyIdB
	// methods
	// constructors
    );
}
void register_type_b2BroadPhase(sol::state& state)
{
	state.new_usertype<b2BroadPhase>("b2BroadPhase"
	// fields
	// methods
			,"CreateProxy"
			,&b2BroadPhase::CreateProxy
			,"DestroyProxy"
			,&b2BroadPhase::DestroyProxy
			,"MoveProxy"
			,&b2BroadPhase::MoveProxy
			,"TouchProxy"
			,&b2BroadPhase::TouchProxy
			,"GetFatAABB"
			,&b2BroadPhase::GetFatAABB
			,"GetUserData"
			,&b2BroadPhase::GetUserData
			,"TestOverlap"
			,&b2BroadPhase::TestOverlap
			,"GetProxyCount"
			,&b2BroadPhase::GetProxyCount
			,"GetTreeHeight"
			,&b2BroadPhase::GetTreeHeight
			,"GetTreeBalance"
			,&b2BroadPhase::GetTreeBalance
			,"GetTreeQuality"
			,&b2BroadPhase::GetTreeQuality
			,"ShiftOrigin"
			,&b2BroadPhase::ShiftOrigin
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2BroadPhase()
		>()
    );
}
