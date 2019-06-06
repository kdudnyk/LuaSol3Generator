#include <Bind_Box2D.h>

void register_type_b2Vec2(sol::state& state)
{
		auto b2Vec2_addition_overloads = sol::overload(
			[](b2Vec2& left,const b2Vec2& right) 
			{
				b2Vec2 ret = left;
				ret += right;
				return ret;
			}
		);
		auto b2Vec2_subtraction_overloads = sol::overload(
			[](b2Vec2& left,const b2Vec2& right) 
			{
				b2Vec2 ret = left;
				ret -= right;
				return ret;
			}
		);
		auto b2Vec2_multiplication_overloads = sol::overload(
			[](const float32& left,b2Vec2& right) 
			{
				b2Vec2 ret = right;
				ret *= left;
				return ret;
			}
			,
			[](b2Vec2& left,const float32& right) 
			{
				b2Vec2 ret = left;
				ret *= right;
				return ret;
			}
		);
	state.new_usertype<b2Vec2>("b2Vec2"
	// fields
		,"x"
		,&b2Vec2::x
		,"y"
		,&b2Vec2::y
	// methods
			,"SetZero"
			,&b2Vec2::SetZero
			,"Set"
			,&b2Vec2::Set
			,"Length"
			,&b2Vec2::Length
			,"LengthSquared"
			,&b2Vec2::LengthSquared
			,"Normalize"
			,&b2Vec2::Normalize
			,"IsValid"
			,&b2Vec2::IsValid
			,"Skew"
			,&b2Vec2::Skew
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Vec2()
			,
			b2Vec2(float32, float32)
		>()
    // metas
			,sol::meta_function::addition
			,b2Vec2_addition_overloads
			,sol::meta_function::subtraction
			,b2Vec2_subtraction_overloads
			,sol::meta_function::multiplication
			,b2Vec2_multiplication_overloads
    );
}
void register_type_b2Vec3(sol::state& state)
{
		auto b2Vec3_addition_overloads = sol::overload(
			[](b2Vec3& left,const b2Vec3& right) 
			{
				b2Vec3 ret = left;
				ret += right;
				return ret;
			}
		);
		auto b2Vec3_subtraction_overloads = sol::overload(
			[](b2Vec3& left,const b2Vec3& right) 
			{
				b2Vec3 ret = left;
				ret -= right;
				return ret;
			}
		);
		auto b2Vec3_multiplication_overloads = sol::overload(
			[](const float32& left,b2Vec3& right) 
			{
				b2Vec3 ret = right;
				ret *= left;
				return ret;
			}
			,
			[](b2Vec3& left,const float32& right) 
			{
				b2Vec3 ret = left;
				ret *= right;
				return ret;
			}
		);
	state.new_usertype<b2Vec3>("b2Vec3"
	// fields
		,"x"
		,&b2Vec3::x
		,"y"
		,&b2Vec3::y
		,"z"
		,&b2Vec3::z
	// methods
			,"SetZero"
			,&b2Vec3::SetZero
			,"Set"
			,&b2Vec3::Set
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Vec3()
			,
			b2Vec3(float32, float32, float32)
		>()
    // metas
			,sol::meta_function::addition
			,b2Vec3_addition_overloads
			,sol::meta_function::subtraction
			,b2Vec3_subtraction_overloads
			,sol::meta_function::multiplication
			,b2Vec3_multiplication_overloads
    );
}
void register_type_b2Mat22(sol::state& state)
{
	state.new_usertype<b2Mat22>("b2Mat22"
	// fields
		,"ex"
		,&b2Mat22::ex
		,"ey"
		,&b2Mat22::ey
	// methods
			,"Set"
			,&b2Mat22::Set
			,"SetIdentity"
			,&b2Mat22::SetIdentity
			,"SetZero"
			,&b2Mat22::SetZero
			,"GetInverse"
			,&b2Mat22::GetInverse
			,"Solve"
			,&b2Mat22::Solve
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Mat22()
			,
			b2Mat22(const b2Vec2 &, const b2Vec2 &)
			,
			b2Mat22(float32, float32, float32, float32)
		>()
    );
}
void register_type_b2Mat33(sol::state& state)
{
	state.new_usertype<b2Mat33>("b2Mat33"
	// fields
		,"ex"
		,&b2Mat33::ex
		,"ey"
		,&b2Mat33::ey
		,"ez"
		,&b2Mat33::ez
	// methods
			,"SetZero"
			,&b2Mat33::SetZero
			,"Solve33"
			,&b2Mat33::Solve33
			,"Solve22"
			,&b2Mat33::Solve22
			,"GetInverse22"
			,&b2Mat33::GetInverse22
			,"GetSymInverse33"
			,&b2Mat33::GetSymInverse33
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Mat33()
			,
			b2Mat33(const b2Vec3 &, const b2Vec3 &, const b2Vec3 &)
		>()
    );
}
void register_type_b2Rot(sol::state& state)
{
	state.new_usertype<b2Rot>("b2Rot"
	// fields
		,"s"
		,&b2Rot::s
		,"c"
		,&b2Rot::c
	// methods
			,"Set"
			,&b2Rot::Set
			,"SetIdentity"
			,&b2Rot::SetIdentity
			,"GetAngle"
			,&b2Rot::GetAngle
			,"GetXAxis"
			,&b2Rot::GetXAxis
			,"GetYAxis"
			,&b2Rot::GetYAxis
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Rot()
			,
			b2Rot(float32)
		>()
    );
}
void register_type_b2Transform(sol::state& state)
{
	state.new_usertype<b2Transform>("b2Transform"
	// fields
		,"p"
		,&b2Transform::p
		,"q"
		,&b2Transform::q
	// methods
			,"SetIdentity"
			,&b2Transform::SetIdentity
			,"Set"
			,&b2Transform::Set
	// constructors
		,sol::call_constructor
		,sol::constructors<
			b2Transform()
			,
			b2Transform(const b2Vec2 &, const b2Rot &)
		>()
    );
}
void register_type_b2Sweep(sol::state& state)
{
	state.new_usertype<b2Sweep>("b2Sweep"
	// fields
		,"localCenter"
		,&b2Sweep::localCenter
		,"c0"
		,&b2Sweep::c0
		,"c"
		,&b2Sweep::c
		,"a0"
		,&b2Sweep::a0
		,"a"
		,&b2Sweep::a
		,"alpha0"
		,&b2Sweep::alpha0
	// methods
			,"GetTransform"
			,&b2Sweep::GetTransform
			,"Advance"
			,&b2Sweep::Advance
			,"Normalize"
			,&b2Sweep::Normalize
	// constructors
    );
}
