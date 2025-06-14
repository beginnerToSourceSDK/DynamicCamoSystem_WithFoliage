#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "ThomasAngel";
        authors[] = {"ThomasAngel","nonJoker"};
        url = "https://github.com/beginnerToSourceSDK/DynamicCamoSystem_WithFoliage";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
