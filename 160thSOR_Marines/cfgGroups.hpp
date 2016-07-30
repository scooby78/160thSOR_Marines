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
						vehicle = "SOR_Commander_M";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechCommand_M";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_AirCommand_M";
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
						vehicle = "SOR_Commander_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_M";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_RTO_M";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_M";
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
						vehicle = "SOR_Actual_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};

					class Unit8
					{
						side = 1;
						vehicle = "SOR_Medic_M";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "SOR_Teamleader_M";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "SOR_SPAR16S_M";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "SOR_Grenadier_M";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_M";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13
					{
						side = 1;
						vehicle = "SOR_Teamleader_M";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "SOR_M240_M";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "SOR_Grenadier_M";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "SOR_Rifleman_M";
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
						vehicle = "SOR_Actual_M";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_Medic_M";
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
						vehicle = "SOR_Teamleader_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_SPAR16S_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_M";
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
						vehicle = "SOR_Teamleader_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_M";
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
						vehicle = "SOR_Teamleader_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_SPAR16S_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_M";
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
						vehicle = "SOR_ReconLeader_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Marksman_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_ReconTeam3_M
				{
					name = "Viper Team [Scuba]";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeaderScuba_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTACScuba_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRiflemanScuba_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MarksmanScuba_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_Recon_M
				{
						name = "Sniper Team";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;
						class Unit0
						{
							side = 1;
							vehicle = "SOR_Sniper_M";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_Spotter_M";
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
						vehicle = "SOR_HMGActual_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_HMGGunner_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_HMGRFL_M";
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
						vehicle = "SOR_MORActual_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MORGunner_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MORCarrier_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MORRFL_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_SupGroup4_M
				{
					name = "Blacksmith Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_TL_Engineer_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Engineer_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Engineer_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Engineer_M";
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
						vehicle = "SOR_MechCrewCommander_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechCrew_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MechOperator_M";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MechDriver_M";
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
						vehicle = "SOR_MechCrewCommander_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechDriver_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MechCrew_M";
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
						vehicle = "SOR_MechCrewCommander_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechDriver_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				}
			};
			class SOR_InfGroups_Air_M
			{
				name = "USMC (Air)";
				aliveCategory = "Infantry";

			    class SOR_AngGroup1_M
				{
						name = "Angel Crew [VTOL]";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;

						class Unit0
						{
							side = 1;
							vehicle = "SOR_HeliPilot_M";
							rank = LIEUTENANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_HeliPilot_M";
							rank = CORPORAL;
							position[] = {0, -2, 0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "SOR_HeliCrew_M";
							rank = CORPORAL;
							position[] = {0, -4, 0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "SOR_HeliCrew_M";
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
						vehicle = "SOR_HeliPilot_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_HeliPilot_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
				class SOR_MEVGroup2_M
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_MEVPilot_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MEVPilot_M";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ParaJumper_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3

					{
						side = 1;
						vehicle = "SOR_ParaJumper_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_M";
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
						vehicle = "SOR_JetPilot_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_JetPilot_M";
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
						vehicle = "SOR_Commander_D_M";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechCommand_D_M";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_AirCommand_D_M";
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
						vehicle = "SOR_Commander_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_D_M";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_RTO_D_M";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_D_M";
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
						vehicle = "SOR_Actual_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};

					class Unit8
					{
						side = 1;
						vehicle = "SOR_Medic_D_M";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_M";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "SOR_SPAR16S_D_M";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_M";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_D_M";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_M";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "SOR_M240_D_M";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_M";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "SOR_Rifleman_D_M";
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
						vehicle = "SOR_Actual_D_M";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};

					class Unit1
					{
						side = 1;
						vehicle = "SOR_Medic_D_M";
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
						vehicle = "SOR_Teamleader_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_SPAR16S_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_D_M";
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
						vehicle = "SOR_Teamleader_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_D_M";
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
						vehicle = "SOR_Teamleader_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_SPAR16S_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_D_M";
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
						vehicle = "SOR_ReconLeader_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Marksman_D_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
				class SOR_ReconTeam3_D_M
				{
					name = "Viper Team [Scuba]";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeaderScuba_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTACScuba_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRiflemanScuba_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MarksmanScuba_D_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_Recon_D_M
				{
						name = "Sniper Team";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;
						class Unit0
						{
							side = 1;
							vehicle = "SOR_Sniper_D_M";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_Spotter_D_M";
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
						vehicle = "SOR_HMGActual_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_HMGGunner_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_HMGRFL_D_M";
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
						vehicle = "SOR_MORActual_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MORGunner_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MORCarrier_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MORRFL_D_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			    class SOR_SupGroup4_D_M
				{
					name = "Blacksmith Team";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_TL_Engineer_D_M";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Engineer_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Engineer_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Engineer_D_M";
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
						vehicle = "SOR_MechCrewCommander_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechCrew_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MechOperator_D_M";
						rank = CORPORAL;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_MechDriver_D_M";
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
						vehicle = "SOR_MechCrewCommander_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechDriver_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_MechCrew_D_M";
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
						vehicle = "SOR_MechCrewCommander_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MechDriver_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				}
			};
			class SOR_InfGroups_Air_D_M
			{
				name = "USMC (Air) [D]";
				aliveCategory = "Infantry";

			    class SOR_AngGroup1_D_M
				{
						name = "Angel Crew [VTOL]";
						faction = "SOR_Faction_M";
						side = 1;
						rarityGroup = 0.75;

						class Unit0
						{
							side = 1;
							vehicle = "SOR_HeliPilot_D_M";
							rank = LIEUTENANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_HeliPilot_D_M";
							rank = CORPORAL;
							position[] = {0, -2, 0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "SOR_HeliCrew_D_M";
							rank = CORPORAL;
							position[] = {0, -4, 0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "SOR_HeliCrew_D_M";
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
						vehicle = "SOR_HeliPilot_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D_M";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
				};
				class SOR_MEVGroup2_D_M
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_M";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D_M";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_M";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3

					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_M";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_M";
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
						vehicle = "SOR_JetPilot_D_M";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_JetPilot_D_M";
						rank = LIEUTENANT;
						position[] = {0, -2, 0};
					};
				};
			};
		};
	};
};










