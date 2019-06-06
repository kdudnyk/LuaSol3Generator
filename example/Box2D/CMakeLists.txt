cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

SET(BIND_Box2D_SOURCES 
	Bind_Box2D.h
	Bind_Box2D.cpp
	Bind_b2Settings.cpp
	Bind_b2Math.cpp
	Bind_b2Draw.cpp
	Bind_b2Timer.cpp
	Bind_b2BlockAllocator.cpp
	Bind_b2Collision.cpp
	Bind_b2Shape.cpp
	Bind_b2CircleShape.cpp
	Bind_b2EdgeShape.cpp
	Bind_b2ChainShape.cpp
	Bind_b2PolygonShape.cpp
	Bind_b2DynamicTree.cpp
	Bind_b2BroadPhase.cpp
	Bind_b2Distance.cpp
	Bind_b2TimeOfImpact.cpp
	Bind_b2Body.cpp
	Bind_b2Fixture.cpp
	Bind_b2WorldCallbacks.cpp
	Bind_b2TimeStep.cpp
	Bind_b2StackAllocator.cpp
	Bind_b2ContactManager.cpp
	Bind_b2World.cpp
	Bind_b2Contact.cpp
	Bind_b2Joint.cpp
	Bind_b2DistanceJoint.cpp
	Bind_b2FrictionJoint.cpp
	Bind_b2GearJoint.cpp
	Bind_b2MotorJoint.cpp
	Bind_b2MouseJoint.cpp
	Bind_b2PrismaticJoint.cpp
	Bind_b2PulleyJoint.cpp
	Bind_b2RevoluteJoint.cpp
	Bind_b2RopeJoint.cpp
	Bind_b2WeldJoint.cpp
	Bind_b2WheelJoint.cpp
)

include(FetchContent)
set(BUILD_SHARED ON CACHE INTERNAL "")
# TO-DO load this into public conan repo...
FetchContent_Declare(
  lua
  GIT_REPOSITORY https://github.com/kdudnyk/lua.git
  GIT_TAG 311f43d6862205be8f7088f013b0f2de44ebe8d6
  GIT_SHALLOW TRUE
)
FetchContent_Declare(
  sol2
  GIT_REPOSITORY  https://github.com/ThePhD/sol2.git
  GIT_TAG d63ba49b0e7283cdff0da08c65ed5c12ddeb4e94
  GIT_SHALLOW TRUE
)
FetchContent_Declare(
  box2d
  GIT_REPOSITORY  https://github.com/kdudnyk/Box2D.git
  GIT_TAG cmake_fetch
  GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(lua sol2 box2d)

add_library(BindBox2D SHARED ${BIND_Box2D_SOURCES})
target_include_directories(BindBox2D PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(BindBox2D PUBLIC ${CMAKE_DL_LIBS} sol2 Box2D_shared lua)

add_executable(BindTest example.cpp)
target_link_libraries(BindTest ${CMAKE_DL_LIBS} BindBox2D)
