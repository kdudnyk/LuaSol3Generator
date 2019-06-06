#include <Bind_Box2D.h>

void register_type_b2DistanceProxy(sol::state& state)
{
	state.new_usertype<b2DistanceProxy>("b2DistanceProxy"
	// fields
		,"m_buffer"
		,&b2DistanceProxy::m_buffer
		,"m_vertices"
		,&b2DistanceProxy::m_vertices
		,"m_count"
		,&b2DistanceProxy::m_count
		,"m_radius"
		,&b2DistanceProxy::m_radius
	// methods
			,"Set"
			,&b2DistanceProxy::Set
			,"GetSupport"
			,&b2DistanceProxy::GetSupport
			,"GetSupportVertex"
			,&b2DistanceProxy::GetSupportVertex
			,"GetVertexCount"
			,&b2DistanceProxy::GetVertexCount
			,"GetVertex"
			,&b2DistanceProxy::GetVertex
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2DistanceProxy()
		>()
    );
}
void register_type_b2SimplexCache(sol::state& state)
{
	state.new_usertype<b2SimplexCache>("b2SimplexCache"
	// fields
		,"metric"
		,&b2SimplexCache::metric
		,"count"
		,&b2SimplexCache::count
		,"indexA"
		,&b2SimplexCache::indexA
		,"indexB"
		,&b2SimplexCache::indexB
	// methods
	// constructors
    );
}
void register_type_b2DistanceInput(sol::state& state)
{
	state.new_usertype<b2DistanceInput>("b2DistanceInput"
	// fields
		,"proxyA"
		,&b2DistanceInput::proxyA
		,"proxyB"
		,&b2DistanceInput::proxyB
		,"transformA"
		,&b2DistanceInput::transformA
		,"transformB"
		,&b2DistanceInput::transformB
		,"useRadii"
		,&b2DistanceInput::useRadii
	// methods
	// constructors
    );
}
void register_type_b2DistanceOutput(sol::state& state)
{
	state.new_usertype<b2DistanceOutput>("b2DistanceOutput"
	// fields
		,"pointA"
		,&b2DistanceOutput::pointA
		,"pointB"
		,&b2DistanceOutput::pointB
		,"distance"
		,&b2DistanceOutput::distance
		,"iterations"
		,&b2DistanceOutput::iterations
	// methods
	// constructors
    );
}
