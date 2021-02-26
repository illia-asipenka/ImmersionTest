# ImmersionTest
Unreal Engine 4 Developer Test Task

The project is fully created using Blueprints. 

BP_ITGameMode is used as Default Game Mode. It overrides base Pawn class and PlayerController class with BP_ViewPawn and BP_PlayerController.

The main logic performed in BP_PlayerController. 

Controller is responsible for:
1) Controlling Pawn movement
2) Focusing on selected objects
3) Transferring data from clicked actor to widget WBP_BuildingInfo. 

BP_ViewPawn based on SpectatorPawn class. It extends parent's functionality with Spring Arm and Camera components.

BP_MapActorBase represents an actor with instance modifiable parameters. It can be placed on level. It extends Actor class functionality with attached Mesh component and Info parameters.
BP_MapActorBase is responsible for reacting when it is clicked.

Project has two widget blueprints
1) WBP_MainHUD - contains instructions for user and one button that returns camera to default focus.
2) WBP_BuildingInfo - shows selected actor info, such as Name, Description, Video and Picture


Pictures that is used in this project were taken from www.pexels.com. All pictures are free to use.
Videos were taken from www.videvo.net. All videos have free license and authored by Videvo.

