/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgGroups.hpp
*/

class CfgGroups
{
	class West
	{
		class SOR_Groups_M
		{
			name = "160th Marine Raiders (USMC 2021)";

			class SOR_InfGroups_M
			{
				name = "USMC (Infantry)";
				aliveCategory = "Infantry";

				class SOR_ComGroup_M
				{
					name = "Command Unit";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechCommand_W";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_AirCommand_W";
						rank = CAPTAIN;
						position[] = {0, -4, 0};
					};
				};
				class SOR_HavocGroup_M
				{
					name = "HAVOC";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_W";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_RTO_W";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_W";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
				};
				class SOR_INFSquadA_M
				{
					name = "10 Man Squad";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;
					class Unit7
					{
						side = 1;
						vehicle = "SOR_USMC_Actual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};

					class Unit8
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_W";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_W";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_W";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_SAW_AMMO_W";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_W";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "SOR_USMC_LMG_W";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_LMG_AMMO_W";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_FireTeamLead_M
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Actual_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_W";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
				};
				class SOR_FireTeam1_M
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_SAW_AMMO_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_FireTeam2_M
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;


					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_LMG_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_LMG_AMMO_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_FireTeam3_M
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
			    };
			};
			class SOR_InfGroups_Support_M
			{
				name = "USMC (Support)";
				aliveCategory = "Infantry";

				class SOR_ReconTeam2_M
				{
					name = "Viper Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_ReconLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_ReconJTAC_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ReconRifleman_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Marksman_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				/*class SOR_ReconTeam3_M
				{
					name = "Viper Team [Scuba]";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_ReconLeaderScuba_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_ReconJTACScuba_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ReconRiflemanScuba_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MarksmanScuba_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};*/
			    /*
			    class SOR_Recon_M
				{
						name = "Sniper Team";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;
						class Unit0
						{
							side = 1;
							vehicle = "SOR_USMC_Sniper_W";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_USMC_Spotter_W";
							rank = SERGEANT;
							position[] = {0, -2, 0};
						};
				};

			    class SOR_SupGroup2_M
				{
					name = "HMG Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_HMGActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_HMGGunner_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_HMGCarrier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_HMGRFL_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_SupGroup3_M
				{
					name = "Mortar Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MORActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MORGunner_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MORCarrier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MORRFL_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};*/
			    class SOR_SupGroup4_M
				{
					name = "Blacksmith Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TL_Engineer_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			};
			class SOR_InfGroups_Mech_M
			{
				name = "USMC (Mech)";
				aliveCategory = "Infantry";

				class SOR_SabGroup2_D
				{
					name = "Saber Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrew_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MechOperator_W";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_W";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
				};
				class SOR_RhinoGroup_M
				{
					name = "Rhino Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrew_W";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
				};
				class SOR_OutlawGroup_M
				{
					name = "Outlaw Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
			};
			class SOR_InfGroups_Air_M
			{
				name = "USMC (Air)";
				aliveCategory = "Infantry";

			    class SOR_AngGroup1_M
				{
						name = "Angel Crew [Heli/VTOL]";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;

						class Unit0
						{
							side = 1;
							vehicle = "SOR_USMC_HeliPilot_W";
							rank = LIEUTENANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_USMC_HeliPilot_W";
							rank = CORPORAL;
							position[] = {0, -2, 0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "SOR_USMC_HeliCrew_W";
							rank = CORPORAL;
							position[] = {0, -4, 0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "SOR_USMC_HeliCrew_W";
							rank = CORPORAL;
							position[] = {0, -6, 0};
						};
				};
				class SOR_PegGroup2_M
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_HeliPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_HeliPilot_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
				class SOR_MEVGroup2_M
				{
					name = "USAF Medivac Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MEVPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MEVPilot_W";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_W";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
				};
				class SOR_EagleGroup2_M
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {0, -2, 0};
					};
				};
			    class SOR_FACGroup1_M
				{
					name = "USAF TACP";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_FAC_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_FAC_W";
						rank = LIEUTENANT;
						position[] = {0, -2, 0};
					};
				};
			};

		////////////////////////////////////////////////////
		//////////////////////////DESERT//////////////////////////
			////////////////////////////////////////////////////

			class SOR_InfGroups_D_M
			{
				name = "USMC (Infantry) [D]";
				aliveCategory = "Infantry";

				class SOR_ComGroup_D_M
				{
					name = "Command Unit";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_D";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechCommand_D";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_AirCommand_D";
						rank = CAPTAIN;
						position[] = {0, -4, 0};
					};
				};
				class SOR_HavocGroup_D_M
				{
					name = "HAVOC";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Commander_D";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_RTO_D";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_D";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
				};
				class SOR_INFSquadA_D_M
				{
					name = "10 Man Squad";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;
					class Unit7
					{
						side = 1;
						vehicle = "SOR_USMC_Actual_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};

					class Unit8
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_D";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_D";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_D";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_SAW_AMMO_D";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_D";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "SOR_USMC_LMG_D";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_LMG_AMMO_D";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_FireTeamLead_D_M
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_Actual_D";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Medic_D";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
				};
				class SOR_FireTeam1_D_M
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_SAW_AMMO_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_FireTeam2_D_M
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;


					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_LMG_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Rifleman_LMG_AMMO_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_FireTeam3_D_M
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TeamLeader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_SAW_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_RiflemanAT_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
			    };
			};
			class SOR_InfGroups_Support_D_M
			{
				name = "USMC (Support) [D]";
				aliveCategory = "Infantry";

				class SOR_ReconTeam2_D_M
				{
					name = "Viper Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_ReconLeader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_ReconJTAC_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ReconRifleman_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Marksman_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				/*class SOR_ReconTeam3_D_M
				{
					name = "Viper Team [Scuba]";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_ReconLeaderScuba_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_ReconJTACScuba_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ReconRiflemanScuba_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MarksmanScuba_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};*/
			    /*
			    class SOR_Recon_D_M
				{
						name = "Sniper Team";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;
						class Unit0
						{
							side = 1;
							vehicle = "SOR_USMC_Sniper_D";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_USMC_Spotter_D";
							rank = SERGEANT;
							position[] = {0, -2, 0};
						};
				};

			    class SOR_SupGroup2_D_M
				{
					name = "HMG Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_HMGActual_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_HMGGunner_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_HMGCarrier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_HMGRFL_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_SupGroup3_D_M
				{
					name = "Mortar Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MORActual_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MORGunner_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MORCarrier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MORRFL_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};*/
			    class SOR_SupGroup4_D_M
				{
					name = "Blacksmith Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_TL_Engineer_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_Engineer_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			};
			class SOR_InfGroups_Mech_D_M
			{
				name = "USMC (Mech) [D]";
				aliveCategory = "Infantry";

				class SOR_SabGroup2_D_M
				{
					name = "Saber Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrew_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MechOperator_D";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_D";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
				};
				class SOR_RhinoGroup_D_M
				{
					name = "Rhino Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrew_D";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
				};
				class SOR_OutlawGroup_D_M
				{
					name = "Outlaw Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MechDriver_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
			};
			class SOR_InfGroups_Air_D_M
			{
				name = "USMC (Air) [D]";
				aliveCategory = "Infantry";

			    class SOR_AngGroup1_D_M
				{
						name = "Angel Crew [Heli/VTOL]";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;

						class Unit0
						{
							side = 1;
							vehicle = "SOR_USMC_HeliPilot_D";
							rank = LIEUTENANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_USMC_HeliPilot_D";
							rank = CORPORAL;
							position[] = {0, -2, 0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "SOR_USMC_HeliCrew_D";
							rank = CORPORAL;
							position[] = {0, -4, 0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "SOR_USMC_HeliCrew_D";
							rank = CORPORAL;
							position[] = {0, -6, 0};
						};
				};
				class SOR_PegGroup2_D_M
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_HeliPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_HeliPilot_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
				class SOR_MEVGroup2_D_M
				{
					name = "USAF Medivac Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_MEVPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_MEVPilot_D";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3

					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_USMC_ParaJumper_D";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
				};
				class SOR_EagleGroup2_D_M
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {0, -2, 0};
					};
				};
			    class SOR_FACGroup1_D_M
				{
					name = "USAF TACP";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_USMC_FAC_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_USMC_FAC_W";
						rank = LIEUTENANT;
						position[] = {0, -2, 0};
					};
				};
			};
		};
	};
};










