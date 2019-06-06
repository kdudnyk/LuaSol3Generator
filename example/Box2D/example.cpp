#include <Bind_Box2D.h>

int main()
{
	sol::state lua;
	//~ lua.open_libraries();
	lua.open_libraries(sol::lib::base, sol::lib::package);
	register_library_Box2D(lua);
	lua.script(R"(
-- create world
print("Hello world step 0")
world = b2World(b2Vec2(0,-10))

-- create ground body
groundBodyDef = b2BodyDef()
groundBodyDef.position:Set(0.0, -10.0);
print("Hello world step 1")

groundBody = world:CreateBody(groundBodyDef);
groundBox = b2PolygonShape()
groundBox:SetAsBox(50.0,10.0)
print("Hello world step 2")
groundBody:CreateFixture(groundBox,0.0)

bodyDef = b2BodyDef()
bodyDef.type = b2BodyType.b2_dynamicBody
bodyDef.position:Set(0.0, 4.0)

body = world:CreateBody(bodyDef)

dynamicBox = b2PolygonShape()
dynamicBox:SetAsBox(1.0, 1.0)

fixtureDef = b2FixtureDef()
fixtureDef.shape = dynamicBox
fixtureDef.density = 1.0
fixtureDef.friction = 0.3
body:CreateFixture(fixtureDef)
print("Hello world step 3")
timestep = 1.0/60.0
print("Hello world step 4 " .. timestep)
for i=1,60 do
    world:Step(timestep, 6, 2);
    position = body:GetPosition();
    angle = body:GetAngle()
    print("Position is " .. position.x, position.y .. " Angle " .. angle)
end
                )");
	
	return 0;
}
