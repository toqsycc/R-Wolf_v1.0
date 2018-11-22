#pragma once

// core instruments:
#ifdef _RW_USE_GLOBAL_DEFINITIONS
#define clscr			ClearScreen
#define cmd				CreateConsole
#define line			DrawLine
#define rect			DrawRectangle
#define ellipse			DrawCircle
#define tri				DrawTriangle
#define arc				DrawArc
#define textdef			PrintText
#define textman			PrintTextManual
#define number			PrintNum
#define button			CreateButton
#define bar				ProgressBar
#define obj				Object
#define d_info			DEBUG_ShowInfo
#define d_menu			DEBUG_ShowMenu
#define d_hware			DEBUG_ShowHardware
#define rw_iface		RW_DrawInterface
#endif

// actions enumeration:
enum Actions {
	RW_SYSTEM_CONSOLE = 0,
	RW_ACTION_SHOOT = 1,
	RW_ACTION_SWITCH_WEAPONS = 2,
	RW_ACTION_JUMP = 3,
	RW_ACTION_EQUIP_SHIELD = 4,
	RW_ACTION_DEQUIP_SHIELD = 5,
	RW_ACTION_THROW_GRENADE = 6,
	RW_ACTION_TAKE_ITEM = 7,
	RW_ACTION_DROP_ITEM = 8,
	RW_ACTION_INVENTORY = 9,
	RW_ACTION_USE = 10,
	RW_ACTION_RUN = 11,
	RW_ACTION_STEALTH = 12
};