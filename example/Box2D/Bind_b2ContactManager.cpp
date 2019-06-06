#include <Bind_Box2D.h>

void register_type_b2ContactManager(sol::state& state)
{
	state.new_usertype<b2ContactManager>("b2ContactManager"
	// fields
		,"m_broadPhase"
		,&b2ContactManager::m_broadPhase
		,"m_contactList"
		,&b2ContactManager::m_contactList
		,"m_contactCount"
		,&b2ContactManager::m_contactCount
		,"m_contactFilter"
		,&b2ContactManager::m_contactFilter
		,"m_contactListener"
		,&b2ContactManager::m_contactListener
		,"m_allocator"
		,&b2ContactManager::m_allocator
	// methods
			,"AddPair"
			,&b2ContactManager::AddPair
			,"FindNewContacts"
			,&b2ContactManager::FindNewContacts
			,"Destroy"
			,&b2ContactManager::Destroy
			,"Collide"
			,&b2ContactManager::Collide
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2ContactManager()
		>()
    );
}
