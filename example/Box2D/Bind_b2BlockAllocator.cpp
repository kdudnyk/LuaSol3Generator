#include <Bind_Box2D.h>

void register_type_b2BlockAllocator(sol::state& state)
{
	state.new_usertype<b2BlockAllocator>("b2BlockAllocator"
	// fields
	// methods
			,"Allocate"
			,&b2BlockAllocator::Allocate
			,"Free"
			,&b2BlockAllocator::Free
			,"Clear"
			,&b2BlockAllocator::Clear
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2BlockAllocator()
		>()
    );
}
