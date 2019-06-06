#include <Bind_Box2D.h>

void register_library_Box2D(sol::state& state)
{
	register_type_b2Version(state);
	register_type_b2Vec2(state);
	register_type_b2Vec3(state);
	register_type_b2Mat22(state);
	register_type_b2Mat33(state);
	register_type_b2Rot(state);
	register_type_b2Transform(state);
	register_type_b2Sweep(state);
	register_type_b2Color(state);
	register_type_b2Timer(state);
	register_type_b2BlockAllocator(state);
	register_type_b2ContactFeature(state);
	register_type_b2ManifoldPoint(state);
	register_type_b2Manifold(state);
	register_type_b2WorldManifold(state);
	register_enum_b2PointState(state);
	register_type_b2ClipVertex(state);
	register_type_b2RayCastInput(state);
	register_type_b2RayCastOutput(state);
	register_type_b2AABB(state);
	register_type_b2MassData(state);
	register_type_b2CircleShape(state);
	register_type_b2EdgeShape(state);
	register_type_b2ChainShape(state);
	register_type_b2PolygonShape(state);
	register_type_b2TreeNode(state);
	register_type_b2DynamicTree(state);
	register_type_b2Pair(state);
	register_type_b2BroadPhase(state);
	register_type_b2DistanceProxy(state);
	register_type_b2SimplexCache(state);
	register_type_b2DistanceInput(state);
	register_type_b2DistanceOutput(state);
	register_type_b2TOIInput(state);
	register_type_b2TOIOutput(state);
	register_enum_b2BodyType(state);
	register_type_b2BodyDef(state);
	register_type_b2Body(state);
	register_type_b2Filter(state);
	register_type_b2FixtureDef(state);
	register_type_b2FixtureProxy(state);
	register_type_b2Fixture(state);
	register_type_b2ContactFilter(state);
	register_type_b2ContactImpulse(state);
	register_type_b2ContactListener(state);
	register_type_b2Profile(state);
	register_type_b2TimeStep(state);
	register_type_b2Position(state);
	register_type_b2Velocity(state);
	register_type_b2SolverData(state);
	register_type_b2StackEntry(state);
	register_type_b2StackAllocator(state);
	register_type_b2ContactManager(state);
	register_type_b2World(state);
	register_type_b2ContactRegister(state);
	register_type_b2ContactEdge(state);
	register_enum_b2JointType(state);
	register_enum_b2LimitState(state);
	register_type_b2Jacobian(state);
	register_type_b2JointEdge(state);
	register_type_b2JointDef(state);
	register_type_b2DistanceJointDef(state);
	register_type_b2DistanceJoint(state);
	register_type_b2FrictionJointDef(state);
	register_type_b2FrictionJoint(state);
	register_type_b2GearJointDef(state);
	register_type_b2GearJoint(state);
	register_type_b2MotorJointDef(state);
	register_type_b2MotorJoint(state);
	register_type_b2MouseJointDef(state);
	register_type_b2MouseJoint(state);
	register_type_b2PrismaticJointDef(state);
	register_type_b2PrismaticJoint(state);
	register_type_b2PulleyJointDef(state);
	register_type_b2PulleyJoint(state);
	register_type_b2RevoluteJointDef(state);
	register_type_b2RevoluteJoint(state);
	register_type_b2RopeJointDef(state);
	register_type_b2RopeJoint(state);
	register_type_b2WeldJointDef(state);
	register_type_b2WeldJoint(state);
	register_type_b2WheelJointDef(state);
	register_type_b2WheelJoint(state);
	register_Box2D_free_functions(state);
}
void register_Box2D_free_functions(sol::state& state)
{
			state.set_function("b2Alloc",&b2Alloc);
			state.set_function("b2Free",&b2Free);
			state.set_function("b2Log",&b2Log);
			state.set_function("b2IsValid",&b2IsValid);
			state.set_function("b2InvSqrt",&b2InvSqrt);
					 state.set_function("b2Dot",sol::overload(
					sol::resolve<float32(const b2Vec2 &, const b2Vec2 &)>(&b2Dot)
					,
					sol::resolve<float32(const b2Vec3 &, const b2Vec3 &)>(&b2Dot)
					));
					 state.set_function("b2Cross",sol::overload(
					sol::resolve<float32(const b2Vec2 &, const b2Vec2 &)>(&b2Cross)
					,
					sol::resolve<b2Vec2(const b2Vec2 &, float32)>(&b2Cross)
					,
					sol::resolve<b2Vec2(float32, const b2Vec2 &)>(&b2Cross)
					,
					sol::resolve<b2Vec3(const b2Vec3 &, const b2Vec3 &)>(&b2Cross)
					));
					 state.set_function("b2Mul",sol::overload(
					sol::resolve<b2Vec2(const b2Mat22 &, const b2Vec2 &)>(&b2Mul)
					,
					sol::resolve<b2Mat22(const b2Mat22 &, const b2Mat22 &)>(&b2Mul)
					,
					sol::resolve<b2Vec3(const b2Mat33 &, const b2Vec3 &)>(&b2Mul)
					,
					sol::resolve<b2Rot(const b2Rot &, const b2Rot &)>(&b2Mul)
					,
					sol::resolve<b2Vec2(const b2Rot &, const b2Vec2 &)>(&b2Mul)
					,
					sol::resolve<b2Vec2(const b2Transform &, const b2Vec2 &)>(&b2Mul)
					,
					sol::resolve<b2Transform(const b2Transform &, const b2Transform &)>(&b2Mul)
					));
					 state.set_function("b2MulT",sol::overload(
					sol::resolve<b2Vec2(const b2Mat22 &, const b2Vec2 &)>(&b2MulT)
					,
					sol::resolve<b2Mat22(const b2Mat22 &, const b2Mat22 &)>(&b2MulT)
					,
					sol::resolve<b2Rot(const b2Rot &, const b2Rot &)>(&b2MulT)
					,
					sol::resolve<b2Vec2(const b2Rot &, const b2Vec2 &)>(&b2MulT)
					,
					sol::resolve<b2Vec2(const b2Transform &, const b2Vec2 &)>(&b2MulT)
					,
					sol::resolve<b2Transform(const b2Transform &, const b2Transform &)>(&b2MulT)
					));
					 state.set_function("b2Distance",sol::overload(
					sol::resolve<float32(const b2Vec2 &, const b2Vec2 &)>(&b2Distance)
					,
					sol::resolve<void(b2DistanceOutput *, b2SimplexCache *, const b2DistanceInput *)>(&b2Distance)
					));
			state.set_function("b2DistanceSquared",&b2DistanceSquared);
			state.set_function("b2Mul22",&b2Mul22);
					 state.set_function("b2Abs",sol::overload(
					sol::resolve<b2Vec2(const b2Vec2 &)>(&b2Abs)
					,
					sol::resolve<b2Mat22(const b2Mat22 &)>(&b2Abs)
					));
					 state.set_function("b2Min",sol::overload(
					sol::resolve<b2Vec2(const b2Vec2 &, const b2Vec2 &)>(&b2Min)
					));
					 state.set_function("b2Max",sol::overload(
					sol::resolve<b2Vec2(const b2Vec2 &, const b2Vec2 &)>(&b2Max)
					));
					 state.set_function("b2Clamp",sol::overload(
					sol::resolve<b2Vec2(const b2Vec2 &, const b2Vec2 &, const b2Vec2 &)>(&b2Clamp)
					));
			state.set_function("b2NextPowerOfTwo",&b2NextPowerOfTwo);
			state.set_function("b2IsPowerOfTwo",&b2IsPowerOfTwo);
			state.set_function("b2GetPointStates",&b2GetPointStates);
			state.set_function("b2CollideCircles",&b2CollideCircles);
			state.set_function("b2CollidePolygonAndCircle",&b2CollidePolygonAndCircle);
			state.set_function("b2CollidePolygons",&b2CollidePolygons);
			state.set_function("b2CollideEdgeAndCircle",&b2CollideEdgeAndCircle);
			state.set_function("b2CollideEdgeAndPolygon",&b2CollideEdgeAndPolygon);
			state.set_function("b2ClipSegmentToLine",&b2ClipSegmentToLine);
					 state.set_function("b2TestOverlap",sol::overload(
					sol::resolve<bool(const b2Shape *, int32, const b2Shape *, int32, const b2Transform &, const b2Transform &)>(&b2TestOverlap)
					,
					sol::resolve<bool(const b2AABB &, const b2AABB &)>(&b2TestOverlap)
					));
			state.set_function("b2PairLessThan",&b2PairLessThan);
			state.set_function("b2TimeOfImpact",&b2TimeOfImpact);
			state.set_function("b2MixFriction",&b2MixFriction);
			state.set_function("b2MixRestitution",&b2MixRestitution);
}
