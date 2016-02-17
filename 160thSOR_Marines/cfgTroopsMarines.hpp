/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/12/15 
	Description: cfgTroopsMarines.hpp
*/

	class SOR_Actual_D;
	class SOR_Teamleader_D;
	class SOR_Medic_D;
	class SOR_M249AR_D;
	class SOR_M240AR_D;
	class SOR_Grenadier_D;
	class SOR_RiflemanAT_D;
	class SOR_Rifleman_D;
	class SOR_Commander_D;
	class SOR_RTO_D;
	class SOR_HeliPilot_D;
	class SOR_HeliCrew_D;
	class SOR_JetPilot_D;
	class SOR_MechCrew_D;
	class SOR_MechCommand_D;
	class SOR_HMGActual_D;
	class SOR_HMGGunner_D;
	class SOR_HMGCarrier_D;
	class SOR_HMGRFL_D;
	class SOR_MORActual_D;
	class SOR_MORGunner_D;
	class SOR_MORCarrier_D;
	class SOR_MORRFL_D;
	class SOR_MEVPilot_D;
	class SOR_ParaJumper_D;
	class SOR_Sniper_D;
	class SOR_Spotter_D;
	class SOR_ReconLeader_D;
	class SOR_Recon_M249AR_D;
	class SOR_Marksman_D;
	class SOR_ReconSpotter_D;
	class SOR_ReconRifleman_D;
	class SOR_ReconJTAC_D;
	
	
	 	
//////////////////////////////
//SOR Marines Faction Units//
//////////////////////////////		
class SOR_Actual_M : SOR_Actual_D
	
	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_grass", 
			"rhs_googles_black",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_grass", 
			"rhs_googles_black",
			Standard_Equipment
		};   
	};

class SOR_Commander_M : SOR_Commander_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};             
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		}; 
	};
	
class SOR_Teamleader_M : SOR_Teamleader_D

	{
		faction = SOR_Faction_M;
		backpack = "B_kitbag_rgr";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_grass", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_grass", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_RTO_M : SOR_RTO_D

	{
		faction = SOR_Faction_M;
		backpack = "RTO_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		}; 
	};	
	
class SOR_Medic_M : SOR_Medic_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_Medic_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_M249AR_M : SOR_M249AR_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_M249_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_M240AR_M : SOR_M240AR_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_M240_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_Grenadier_M : SOR_Grenadier_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_GD_Pack_AusCam";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};             
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};  
	};

class SOR_RiflemanAT_M : SOR_RiflemanAT_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_RFLAT_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};             
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_Rifleman_M : SOR_Rifleman_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_Rifleman_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};          
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};  
	};
	
class SOR_HeliPilot_M : SOR_HeliPilot_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_PilotHelmetHeli_O", 
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_PilotHelmetHeli_O", 
			Standard_Equipment
		};   
	};	
	
class SOR_HeliCrew_M : SOR_HeliCrew_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_Repair_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_PilotHelmetHeli_O", 
			Standard_Equipment
		};             
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_PilotHelmetHeli_O", 
			Standard_Equipment
		};  
	};	
	
// MEV Pilot & CO-Pilot
class SOR_MEVPilot_M : SOR_MEVPilot_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"rhsusf_hgu56p_mask",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"rhsusf_hgu56p_mask", 
			Standard_Equipment
		};   
	};
	
class SOR_ParaJumper_M : SOR_ParaJumper_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_PJMedicPack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetB_light_snakeskin",
			"rhs_googles_black", 		
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_light_snakeskin", 
			"rhs_googles_black", 
			Standard_Equipment
		};   
	};

class SOR_JetPilot_M : SOR_JetPilot_D

	{
		faction = SOR_Faction_M;
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = 
		{	
			"V_TacVest_blk" , 
			"H_PilotHelmetFighter_B", 
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_TacVest_blk", 
			"H_PilotHelmetHeli_O", 
			Standard_Equipment
		};   
	};	
	
//Recon Units
class SOR_ReconLeader_M : SOR_ReconLeader_D	
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";		
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};			
	};

class SOR_ReconJTAC_M : SOR_ReconJTAC_D
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";	
		backpack = "tf_rt1523g_black";
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};	
	};

class SOR_ReconRifleman_M : SOR_ReconRifleman_D
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};			
	};
	
class SOR_Recon_M249AR_M : SOR_Recon_M249AR_D
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";
		backpack = "SOR_M249_Pack_M";
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};			
	};	
	
class SOR_ReconSpotter_M : SOR_ReconSpotter_D	
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};			
	};

class SOR_Marksman_M : SOR_Marksman_D
	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81";
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetB_camo", 
			"G_Bandanna_khk",
			Recon_Equipment
		};			
	};	
	
class SOR_Sniper_M : SOR_Sniper_D

	{
		faction = SOR_Faction_M;
		uniformClass = "U_B_FullGhillie_lsh";		
	};
	
class SOR_Spotter_M : SOR_Spotter_D

	{
		faction = SOR_Faction_M;	
		uniformClass = "U_B_FullGhillie_lsh";
	};
	
class SOR_MechCrew_M : SOR_MechCrew_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_Repair_Pack_M";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetCrew_I", 
			"G_Bandanna_khk",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetCrew_I", 
			"G_Bandanna_khk",
			Standard_Equipment
		};   
	};	
	
class SOR_MechCommand_M : SOR_MechCommand_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetCrew_I", 
			"G_Bandanna_beast",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetCrew_I", 
			"G_Bandanna_beast",
			Standard_Equipment
		};   
	};	

class SOR_HMGActual_M : SOR_HMGActual_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_paint2",
			"rhs_googles_black", 
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_paint2",
			"rhs_googles_black", 
			Standard_Equipment
		};   
	};

class SOR_HMGGunner_M : SOR_HMGGunner_D

	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};   
	};	
	
class SOR_HMGCarrier_M : SOR_HMGCarrier_D

	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};   
	};	
	
class SOR_HMGRFL_M : SOR_HMGRFL_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_GD_Pack_AusCam";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};   
	};

class SOR_MORActual_M : SOR_MORActual_D

	{
		faction = SOR_Faction_M;
		backpack = "tf_rt1523g_black";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_paint2",
			"rhs_googles_black", 
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_paint2",
			"rhs_googles_black", 
			Standard_Equipment
		};   
	};	
	
class SOR_MORGunner_M : SOR_MORGunner_D

	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};   
	};	
	
class SOR_MORCarrier_M : SOR_MORCarrier_D

	{
		faction = SOR_Faction_M;
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};   
	};
	
class SOR_MORRFL_M : SOR_MORRFL_D

	{
		faction = SOR_Faction_M;
		backpack = "SOR_GD_Pack_AusCam";		
		uniformClass = "rhs_uniform_FROG01_m81"; 
		linkedItems[] = 
		{	
			"V_PlateCarrier2_rgr" , 
			"H_HelmetSpecB_snakeskin", 
			"G_Lowprofile",
			Standard_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_PlateCarrier2_rgr", 
			"H_HelmetSpecB_snakeskin",
			"G_Lowprofile",						
			Standard_Equipment
		};   
	};
	

	
	

