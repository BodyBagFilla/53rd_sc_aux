class CfgPatches {
	class Hephaestus_1_3_Helmets {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
//WINTER///////////////////////////////////////////////////
            "53rd_1_3_Rifleman_Helmet_Winter_NVisor",
			"53rd_1_3_Rifleman_Helmet_Winter_Visor",
            "53rd_1_3_Medic_Helmet_Winter_NVisor",
			"53rd_1_3_Medic_Helmet_Winter_Visor",
			"53rd_1_3_JTAC_Helmet_Winter_NVisor",
			"53rd_1_3_JTAC_Helmet_Winter_Visor",
            "53rd_1_3_Grenaider_Helmet_Winter_NVisor",
			"53rd_1_3_Grenaider_Helmet_Winter_Visor",
		    "53rd_1_3_Autorifleman_Helmet_Winter_NVisor",
			"53rd_1_3_Autorifleman_Helmet_Winter_Visor",
            "53rd_1_3_AT_Helmet_Winter_NVisor",
			"53rd_1_3_AT_Helmet_Winter_Visor",
//DESERT//////////////////////////////////////////////////
            "53rd_1_3_Rifleman_Helmet_Desert_NVisor",
			"53rd_1_3_Rifleman_Helmet_Desert_Visor",
            "53rd_1_3_Medic_Helmet_Desert_NVisor",
			"53rd_1_3_Medic_Helmet_Desert_Visor",
			"53rd_1_3_JTAC_Helmet_Desert_NVisor",
			"53rd_1_3_JTAC_Helmet_Desert_Visor",
            "53rd_1_3_Grenaider_Helmet_Desert_NVisor",
			"53rd_1_3_Grenaider_Helmet_Desert_Visor",
		    "53rd_1_3_Autorifleman_Helmet_Desert_NVisor",
			"53rd_1_3_Autorifleman_Helmet_Desert_Visor",
            "53rd_1_3_AT_Helmet_Desert_NVisor",
			"53rd_1_3_AT_Helmet_Desert_Visor",
//URBAN//////////////////////////////////////////////////
            "53rd_1_3_Rifleman_Helmet_Urban_NVisor",
			"53rd_1_3_Rifleman_Helmet_Urban_Visor",
            "53rd_1_3_Medic_Helmet_Urban_NVisor",
			"53rd_1_3_Medic_Helmet_Urban_Visor",
			"53rd_1_3_JTAC_Helmet_Urban_NVisor",
			"53rd_1_3_JTAC_Helmet_Urban_Visor",
            "53rd_1_3_Grenaider_Helmet_Urban_NVisor",
			"53rd_1_3_Grenaider_Helmet_Urban_Visor",
		    "53rd_1_3_Autorifleman_Helmet_Urban_NVisor",
			"53rd_1_3_Autorifleman_Helmet_Urban_Visor",
            "53rd_1_3_AT_Helmet_Urban_NVisor",
			"53rd_1_3_AT_Helmet_Urban_Visor",
//WOODLAND//////////////////////////////////////////////////
            "53rd_1_3_Rifleman_Helmet_Woodland_NVisor",
			"53rd_1_3_Rifleman_Helmet_Woodland_Visor",
            "53rd_1_3_Medic_Helmet_Woodland_NVisor",
			"53rd_1_3_Medic_Helmet_Woodland_Visor",
			"53rd_1_3_JTAC_Helmet_Woodland_NVisor",
			"53rd_1_3_JTAC_Helmet_Woodland_Visor",
            "53rd_1_3_Grenaider_Helmet_Woodland_NVisor",
			"53rd_1_3_Grenaider_Helmet_Woodland_Visor",
		    "53rd_1_3_Autorifleman_Helmet_Woodland_NVisor",
			"53rd_1_3_Autorifleman_Helmet_Woodland_Visor",
            "53rd_1_3_AT_Helmet_Woodland_NVisor",
			"53rd_1_3_AT_Helmet_Woodland_Visor",
//////////////////////////////////////////////////////////

			
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "..\..\xtdGear.hpp"	
class cfgWeapons 
{
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
////////////////////////////////////////////////////////////////////////////////
//////// HELMETS //////////////////////////////////////////////////////////////
	class ItemCore;
	class ItemInfo;
	class HaloInf_Marine_WDL_headgear: ItemCore
	{
	 class ItemInfo;
	};
	class HaloInf_Marine_WDL_NV_headgear: ItemCore
	{
	 class ItemInfo;
	};
	class 53rd_Rifleman_Helmet_Base_Visor: HaloInf_Marine_WDL_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=38;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=38;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.1;
				};
			};
		};
	};
	class 53rd_Rifleman_Helmet_Base_NVisor: HaloInf_Marine_WDL_NV_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252 Visor ";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=38;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=38;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.1;
				};
			};
		};
	};
	//WINTER
	//Rifleman
	class 53rd_1_3_Rifleman_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_Rifleman_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Winter.paa"
		};
	};
	//MEDIC
	class 53rd_1_3_Medic_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_Medic_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Winter.paa"
		};
	};
	//JTAC
	class 53rd_1_3_JTAC_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_JTAC_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Winter.paa"
		};
	};
	//Grenaider
	class 53rd_1_3_Grenaider_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_Grenaider_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Winter.paa"
		};
	};
	//Autorifleman
	class 53rd_1_3_Autorifleman_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_Autorifleman_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Winter.paa"
		};
	};
	//AT
	class 53rd_1_3_AT_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Winter.paa"
		};
	};
	class 53rd_1_3_AT_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Winter.paa"
		};
	};
	
	//Desert
	//Rifleman
	class 53rd_1_3_Rifleman_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_Rifleman_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Desert.paa"
		};
	};
	//MEDIC
	class 53rd_1_3_Medic_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_Medic_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Desert.paa"
		};
	};
	//JTAC
	class 53rd_1_3_JTAC_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_JTAC_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Desert.paa"
		};
	};
	//Grenaider
	class 53rd_1_3_Grenaider_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_Grenaider_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Desert.paa"
		};
	};
	//Autorifleman
	class 53rd_1_3_Autorifleman_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_Autorifleman_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Desert.paa"
		};
	};
	//AT
	class 53rd_1_3_AT_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Desert.paa"
		};
	};
	class 53rd_1_3_AT_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Desert.paa"
		};
	};
	
	//Urban
	//Rifleman
	class 53rd_1_3_Rifleman_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_Rifleman_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Urban.paa"
		};
	};
	//MEDIC
	class 53rd_1_3_Medic_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_Medic_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Urban.paa"
		};
	};
	//JTAC
	class 53rd_1_3_JTAC_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_JTAC_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Urban.paa"
		};
	};
	//Grenaider
	class 53rd_1_3_Grenaider_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_Grenaider_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Urban.paa"
		};
	};
	//Autorifleman
	class 53rd_1_3_Autorifleman_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_Autorifleman_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Urban.paa"
		};
	};
	//AT
	class 53rd_1_3_AT_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Urban.paa"
		};
	};
	class 53rd_1_3_AT_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Urban.paa"
		};
	};
	
	//Woodland
	//Rifleman
	class 53rd_1_3_Rifleman_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_Rifleman_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Rifleman (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Rifleman_Helmet_Woodland.paa"
		};
	};
	//MEDIC
	class 53rd_1_3_Medic_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_Medic_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Medic (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Medic_Helmet_Woodland.paa"
		};
	};
	//JTAC
	class 53rd_1_3_JTAC_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_JTAC_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 JTAC (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_JTAC_Helmet_Woodland.paa"
		};
	};
	//Grenaider
	class 53rd_1_3_Grenaider_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_Grenaider_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Grenaider (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_Grenadier_Helmet_Woodland.paa"
		};
	};
	//Autorifleman
	class 53rd_1_3_Autorifleman_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_Autorifleman_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Autorifleman (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AutoRifleman_Helmet_Woodland.paa"
		};
	};
	//AT
	class 53rd_1_3_AT_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_3_AT_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-3 Anti-Tank (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-3 Helmets\53rd_1-3_AT_Helmet_Woodland.paa"
		};
	};
};