# Dynamic Camouflage System
A lightweight mod that makes your uniform choice actually matter. If your uniforms colours match the ground, you will be less visible to the AI. The mod does this by comparing the uniforms average colour to the ground textures average colour and applying a camouflage coefficient depending on how much the colours match. Now takes into consideration the flora around the player.

See example code below for foliage modifier implementation

```
_condition = { 
 true     
}; 
_statement = { 
    _foliage = createSimpleObject[getModelInfo (selectRandom nearestTerrainObjects [player, ["bush"], 10]) select 1, position player];

	_foliage attachTo [player,[random [-0.1,-0.05,0.1], -0.05, 0.225], "Head",true];
	_foliage setObjectScale 0.075;
	player setVariable ["foliageAttached", true];
}; 
_action = ["Attach Foliage to Headgear", "Attach Foliage to Headgear", "", _statement, _condition] call ace_interact_menu_fnc_createAction; 


[typeOf player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
```
![alt text](https://steamuserimages-a.akamaihd.net/ugc/1806516206888105675/F2729E47582128176ACEA6BB4613405F99BF3EA3/?imw=5000&imh=5000&ima=fit&impolicy=Letterbox&imcolor=#000000&letterbox=false)
