class CfgPatches {
	class 53rd_Custom_Armor_Theta
	{
			units[] = 
			{

			};
			weapons[] = 
			{
				"53rd_Theta_SN",
				"53rd_Theta_WD",
				"53rd_Theta_UB",
				"53rd_Theta_DS",
				"53rd_Theta_Helmet_Urban_No_Visor",
				"53rd_Theta_Helmet_Urban_Visor",
				"53rd_Theta_Helmet_Woodland_No_Visor",
				"53rd_Theta_Helmet_Woodland_Visor",
				"53rd_Theta_Helmet_Desert_No_Visor",
				"53rd_Theta_Helmet_Desert_Visor",
				"53rd_Theta_Helmet_Winter_No_Visor",
				"53rd_Theta_Helmet_Winter_Visor",
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"	
class cfgWeapons
{
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
	class 53rd_Base_headgear: HaloInf_Marine_WDL_headgear
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
	class 53rd_Base_NV_headgear: HaloInf_Marine_WDL_NV_headgear
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
 	/* // PENDING HELMET MODEL UPDATE // 

	/////HELMETS/////
	class 53rd_Theta_Helmet_Urban_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Urban.paa"
		};
	};
	class 53rd_Theta_Helmet_Urban_Visor: 53rd_Base_headgear
	{
		author="Cherri&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Theta_Helmet_Woodland_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Woodland.paa"
		};
	};
	class 53rd_Theta_Helmet_Woodland_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_Theta_Helmet_Desert_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Desert.paa"
		};
	};
	class 53rd_Theta_Helmet_Desert_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Theta_Helmet_Winter_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Winter.paa"
		};
	};
	class 53rd_Theta_Helmet_Winter_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Theta Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Theta\53rd_Theta_Helmet_Winter.paa"
		};
	};
		*/ // PENDING HELMET MODEL UPDATE // 

	
	
//////////////VEST//////////////////////////////
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_U_Base_uniform: haloinfmar_U_WDL_uniform
	{
		author="Body";
		scope=1;
		allowedSlots[]={901};
		displayName="[53rd] Rifleman Base ";
		picture="\A3\characters_f\data\ui\icon_U_BasicTheta_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="HaloInf_Marine_WDL_F";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Armor_Theta_Winter: 53rd_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Winter Theta";
		picture="\A3\characters_f\data\ui\icon_U_BasicTheta_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Winter.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Theta";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Theta_Woodland: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Woodland Theta";
		picture="\A3\characters_f\data\ui\icon_U_BasicTheta_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Theta";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Theta_Urban: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Urban Theta";
		picture="\A3\characters_f\data\ui\icon_U_BasicTheta_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Theta";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Theta_Desert: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Desert Theta";
		picture="\A3\characters_f\data\ui\icon_U_BasicTheta_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Desert_Camo_Theta";
			containerClass="Supply90";
			mass=80;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
	class HaloInf_Marine_WDL_F: haloinf_Marine_Soldier_base_F
	{
	class UniformItem;
	};
	class 53rd_base_F: HaloInf_Marine_WDL_F
	{
		displayName="[53rd] Base Uniform";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Unit_Base";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class 53rd_Snow_Camo_Theta: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Theta_SN";
	};
	class 53rd_Woodland_Camo_Theta: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Theta_WD";
	};
	class 53rd_Urban_Camo_Theta: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Urban Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Theta_UB";
	};
	class 53rd_Desert_Camo_Theta: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Desert Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Theta\53rd_Theta_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Theta_DS";
	};

};