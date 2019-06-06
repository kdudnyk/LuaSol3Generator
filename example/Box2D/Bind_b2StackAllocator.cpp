#include <Bind_Box2D.h>

void register_type_b2StackEntry(sol::state& state)
{
	state.new_usertype<b2StackEntry>("b2StackEntry"
	// fields
		,"data"
		,&b2StackEntry::data
		,"size"
		,&b2StackEntry::size
		,"usedMalloc"
		,&b2StackEntry::usedMalloc
	// methods
	// constructors
    );
}
void register_type_b2StackAllocator(sol::state& state)
{
	state.new_usertype<b2StackAllocator>("b2StackAllocator"
	// fields
	// methods
			,"Allocate"
			,&b2StackAllocator::Allocate
			,"Free"
			,&b2StackAllocator::Free
			,"GetMaxAllocation"
			,&b2StackAllocator::GetMaxAllocation
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2StackAllocator()
		>()
    );
}
