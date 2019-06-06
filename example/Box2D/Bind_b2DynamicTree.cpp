#include <Bind_Box2D.h>

void register_type_b2TreeNode(sol::state& state)
{
	state.new_usertype<b2TreeNode>("b2TreeNode"
	// fields
		,"aabb"
		,&b2TreeNode::aabb
		,"userData"
		,&b2TreeNode::userData
		,"child1"
		,&b2TreeNode::child1
		,"child2"
		,&b2TreeNode::child2
		,"height"
		,&b2TreeNode::height
	// methods
			,"IsLeaf"
			,&b2TreeNode::IsLeaf
	// constructors
    );
}
void register_type_b2DynamicTree(sol::state& state)
{
	state.new_usertype<b2DynamicTree>("b2DynamicTree"
	// fields
	// methods
			,"CreateProxy"
			,&b2DynamicTree::CreateProxy
			,"DestroyProxy"
			,&b2DynamicTree::DestroyProxy
			,"MoveProxy"
			,&b2DynamicTree::MoveProxy
			,"GetUserData"
			,&b2DynamicTree::GetUserData
			,"GetFatAABB"
			,&b2DynamicTree::GetFatAABB
			,"Validate"
			,&b2DynamicTree::Validate
			,"GetHeight"
			,&b2DynamicTree::GetHeight
			,"GetMaxBalance"
			,&b2DynamicTree::GetMaxBalance
			,"GetAreaRatio"
			,&b2DynamicTree::GetAreaRatio
			,"RebuildBottomUp"
			,&b2DynamicTree::RebuildBottomUp
			,"ShiftOrigin"
			,&b2DynamicTree::ShiftOrigin
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2DynamicTree()
		>()
    );
}
