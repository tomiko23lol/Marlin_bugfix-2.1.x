/**
 * 
 * 
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * https://www.zahradniksebavi.cz
 */

#define DISPLAY_CHARSET_ISO10646_1


namespace Language_cz {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t CHARSIZE              = 2;
  LSTR LANGUAGE                           = _UxGT("Czech");

  LSTR WELCOME_MSG                        = MACHINE_NAME _UxGT(" pripraven.");
  LSTR MSG_YES                            = _UxGT("ANO");
  LSTR MSG_NO                             = _UxGT("NE");
  LSTR MSG_BACK                           = _UxGT("Zpet");
  LSTR MSG_MEDIA_ABORTING                 = _UxGT("Ruseni...");
  LSTR MSG_MEDIA_INSERTED                 = _UxGT("Medium vlozeno");
  LSTR MSG_MEDIA_REMOVED                  = _UxGT("Medium vyjmuto");
  LSTR MSG_MEDIA_WAITING                  = _UxGT("Cekani na medium");
  LSTR MSG_MEDIA_READ_ERROR               = _UxGT("Chyba cteni media");
  LSTR MSG_MEDIA_USB_REMOVED              = _UxGT("USB odstraneno");
  LSTR MSG_MEDIA_USB_FAILED               = _UxGT("Chyba USB");
  LSTR MSG_LCD_ENDSTOPS                   = _UxGT("Endstopy"); // max 8 znaku
  LSTR MSG_LCD_SOFT_ENDSTOPS              = _UxGT("Soft Endstopy");
  LSTR MSG_MAIN                           = _UxGT("Hlavni nabidka");
  LSTR MSG_ADVANCED_SETTINGS              = _UxGT("Dalsi nastaveni");
  LSTR MSG_CONFIGURATION                  = _UxGT("Konfigurace");
  LSTR MSG_RUN_AUTO_FILES                 = _UxGT("Autostart");
  LSTR MSG_DISABLE_STEPPERS               = _UxGT("Uvolnit motory");
  LSTR MSG_DEBUG_MENU                     = _UxGT("Nabidka ladeni");
  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_PROGRESS_BAR_TEST            = _UxGT("Test ukaz. prubehu");
  #else
    LSTR MSG_PROGRESS_BAR_TEST            = _UxGT("Test uk. prubehu");
  #endif
  LSTR MSG_AUTO_HOME                      = _UxGT("Domovska pozice");
  LSTR MSG_AUTO_HOME_X                    = _UxGT("Domu osa X");
  LSTR MSG_AUTO_HOME_Y                    = _UxGT("Domu osa Y");
  LSTR MSG_AUTO_HOME_Z                    = _UxGT("Domu osa Z");
  LSTR MSG_AUTO_Z_ALIGN                   = _UxGT("Auto srovnani Z");
  LSTR MSG_LEVEL_BED_HOMING               = _UxGT("Mereni podlozky");
  LSTR MSG_LEVEL_BED_WAITING              = _UxGT("Kliknutim spustte");
  LSTR MSG_LEVEL_BED_NEXT_POINT           = _UxGT("Dalsi bod");
  LSTR MSG_LEVEL_BED_DONE                 = _UxGT("Mereni hotovo!");
  LSTR MSG_Z_FADE_HEIGHT                  = _UxGT("Vyska srovnavani");
  LSTR MSG_SET_HOME_OFFSETS               = _UxGT("Nastavit ofsety");
  LSTR MSG_HOME_OFFSETS_APPLIED           = _UxGT("Ofsety nastaveny");
  #if HAS_PREHEAT
    LSTR MSG_PREHEAT_1                    = _UxGT("Zahrat ") PREHEAT_1_LABEL;
    LSTR MSG_PREHEAT_1_H                  = _UxGT("Zahrat ") PREHEAT_1_LABEL " ~";
    LSTR MSG_PREHEAT_1_END                = _UxGT("Zahrat ") PREHEAT_1_LABEL _UxGT(" end");
    LSTR MSG_PREHEAT_1_END_E              = _UxGT("Zahrat ") PREHEAT_1_LABEL _UxGT(" end ~");
    LSTR MSG_PREHEAT_1_ALL                = _UxGT("Zahrat ") PREHEAT_1_LABEL _UxGT(" vse");
    LSTR MSG_PREHEAT_1_BEDONLY            = _UxGT("Zahrat ") PREHEAT_1_LABEL _UxGT(" podloz");
    LSTR MSG_PREHEAT_1_SETTINGS           = _UxGT("Zahrat ") PREHEAT_1_LABEL _UxGT(" nast");

    LSTR MSG_PREHEAT_M                    = _UxGT("Zahrat $");
    LSTR MSG_PREHEAT_M_H                  = _UxGT("Zahrat $ ~");
    LSTR MSG_PREHEAT_M_END                = _UxGT("Zahrat $ end");
    LSTR MSG_PREHEAT_M_END_E              = _UxGT("Zahrat $ end ~");
    LSTR MSG_PREHEAT_M_ALL                = _UxGT("Zahrat $ vse");
    LSTR MSG_PREHEAT_M_BEDONLY            = _UxGT("Zahrat $ podloz");
    LSTR MSG_PREHEAT_M_SETTINGS           = _UxGT("Zahrat $ nast");
  #endif
  LSTR MSG_PREHEAT_CUSTOM                 = _UxGT("Zahrat vlastni");
  LSTR MSG_COOLDOWN                       = _UxGT("Zchladit");
  LSTR MSG_LASER_MENU                     = _UxGT("Ovladani laseru");
  LSTR MSG_LASER_POWER                    = _UxGT("Vykon laseru");
  LSTR MSG_SPINDLE_MENU                   = _UxGT("Vreteno ovladani");
  LSTR MSG_SPINDLE_POWER                  = _UxGT("Vreteno vykon");
  LSTR MSG_SPINDLE_REVERSE                = _UxGT("Vreteno opacne");
  LSTR MSG_SWITCH_PS_ON                   = _UxGT("Zapnout napajeni");
  LSTR MSG_SWITCH_PS_OFF                  = _UxGT("Vypnout napajeni");
  LSTR MSG_EXTRUDE                        = _UxGT("Vytlacit (extr.)");
  LSTR MSG_RETRACT                        = _UxGT("Zatlacit (retr.)");
  LSTR MSG_MOVE_AXIS                      = _UxGT("Posunout osy");
  LSTR MSG_BED_LEVELING                   = _UxGT("Vyrovnat podlozku");
  LSTR MSG_LEVEL_BED                      = _UxGT("Vyrovnat podlozku");
  LSTR MSG_BED_TRAMMING                   = _UxGT("Vyrovnat rohy");
  LSTR MSG_NEXT_CORNER                    = _UxGT("Dalsi roh");
  LSTR MSG_MESH_EDITOR                    = _UxGT("Editor site");
  LSTR MSG_EDIT_MESH                      = _UxGT("Upravit sit bodu");
  LSTR MSG_EDITING_STOPPED                = _UxGT("Konec uprav site");
  LSTR MSG_PROBING_POINT                  = _UxGT("Mereni bodu");
  LSTR MSG_MESH_X                         = _UxGT("Index X");
  LSTR MSG_MESH_Y                         = _UxGT("Index Y");
  LSTR MSG_MESH_EDIT_Z                    = _UxGT("Hodnota Z");

  LSTR MSG_CUSTOM_COMMANDS                = _UxGT("Vlastni prikazy");
  LSTR MSG_M48_TEST                       = _UxGT("M48 - test sondy");
  LSTR MSG_M48_POINT                      = _UxGT("M48 - bod");
  LSTR MSG_M48_DEVIATION                  = _UxGT("Odchylka");
  LSTR MSG_IDEX_MENU                      = _UxGT("Rezim IDEX");
  LSTR MSG_OFFSETS_MENU                   = _UxGT("Ofsety nastroju");
  LSTR MSG_IDEX_MODE_AUTOPARK             = _UxGT("Auto-Park");
  LSTR MSG_IDEX_MODE_DUPLICATE            = _UxGT("Duplikace");
  LSTR MSG_IDEX_MODE_MIRRORED_COPY        = _UxGT("Zrcadleni");
  LSTR MSG_IDEX_MODE_FULL_CTRL            = _UxGT("Plna kontrola");
  LSTR MSG_HOTEND_OFFSET_Z                = _UxGT("2. tryska Z");
  LSTR MSG_HOTEND_OFFSET_A                = _UxGT("2. tryska @");

  LSTR MSG_UBL_DOING_G29                  = _UxGT("Provadim G29");
  LSTR MSG_UBL_TOOLS                      = _UxGT("UBL nastroje");
  LSTR MSG_UBL_LEVEL_BED                  = _UxGT("Unified Bed Leveling");
  LSTR MSG_LCD_TILTING_MESH               = _UxGT("Vyrovnani bodu");
  LSTR MSG_UBL_MANUAL_MESH                = _UxGT("Manualni sit bodu");
  LSTR MSG_UBL_BC_INSERT                  = _UxGT("Vlozte kartu, zmerte");
  LSTR MSG_UBL_BC_INSERT2                 = _UxGT("Zmerte");
  LSTR MSG_UBL_BC_REMOVE                  = _UxGT("Odstrante a zmerte");
  LSTR MSG_UBL_MOVING_TO_NEXT             = _UxGT("Presun na dalsi");
  LSTR MSG_UBL_ACTIVATE_MESH              = _UxGT("Aktivovat UBL");
  LSTR MSG_UBL_DEACTIVATE_MESH            = _UxGT("Deaktivovat UBL");
  LSTR MSG_UBL_SET_TEMP_BED               = _UxGT("Teplota podlozky");
  LSTR MSG_UBL_BED_TEMP_CUSTOM            = _UxGT("Teplota podlozky");
  LSTR MSG_UBL_SET_TEMP_HOTEND            = _UxGT("Teplota hotendu");
  LSTR MSG_UBL_HOTEND_TEMP_CUSTOM         = _UxGT("Teplota hotendu");
  LSTR MSG_UBL_MESH_EDIT                  = _UxGT("Uprava site bodu");
  LSTR MSG_UBL_EDIT_CUSTOM_MESH           = _UxGT("Upravit vlastni sit");
  LSTR MSG_UBL_FINE_TUNE_MESH             = _UxGT("Doladit sit bodu");
  LSTR MSG_UBL_DONE_EDITING_MESH          = _UxGT("Konec uprav site");
  LSTR MSG_UBL_BUILD_CUSTOM_MESH          = _UxGT("Vlastni sit");
  LSTR MSG_UBL_BUILD_MESH_MENU            = _UxGT("Vytvorit sit");
  #if HAS_PREHEAT
    LSTR MSG_UBL_BUILD_MESH_M             = _UxGT("Sit bodu $");
    LSTR MSG_UBL_VALIDATE_MESH_M          = _UxGT("Kontrola site $");
  #endif
  LSTR MSG_UBL_BUILD_COLD_MESH            = _UxGT("Studena sit bodu");
  LSTR MSG_UBL_MESH_HEIGHT_ADJUST         = _UxGT("Upravit vysku site");
  LSTR MSG_UBL_MESH_HEIGHT_AMOUNT         = _UxGT("Vyska");
  LSTR MSG_UBL_VALIDATE_MESH_MENU         = _UxGT("Zkontrolovat sit");
  LSTR MSG_UBL_VALIDATE_CUSTOM_MESH       = _UxGT("Kontrola vlast. site");
  LSTR MSG_G26_HEATING_BED                = _UxGT("G26 zahrivani podl.");
  LSTR MSG_G26_HEATING_NOZZLE             = _UxGT("G26 zahrivani trysky");
  LSTR MSG_G26_MANUAL_PRIME               = _UxGT("Rucni zavedeni...");
  LSTR MSG_G26_FIXED_LENGTH               = _UxGT("Pevne zavedni");
  LSTR MSG_G26_PRIME_DONE                 = _UxGT("Done Priming");
  LSTR MSG_G26_CANCELED                   = _UxGT("G26 - Canceled");
  LSTR MSG_G26_LEAVING                    = _UxGT("Leaving G26");
  LSTR MSG_UBL_CONTINUE_MESH              = _UxGT("Pokracovat v siti");
  LSTR MSG_UBL_MESH_LEVELING              = _UxGT("Sitove rovnani");
  LSTR MSG_UBL_3POINT_MESH_LEVELING       = _UxGT("3-bodove rovnani");
  LSTR MSG_UBL_GRID_MESH_LEVELING         = _UxGT("Mrizkove rovnani");
  LSTR MSG_UBL_MESH_LEVEL                 = _UxGT("Srovnat podlozku");
  LSTR MSG_UBL_SIDE_POINTS                = _UxGT("Postranni body");
  LSTR MSG_UBL_MAP_TYPE                   = _UxGT("Typ site bodu");
  LSTR MSG_UBL_OUTPUT_MAP                 = _UxGT("Exportovat sit");
  LSTR MSG_UBL_OUTPUT_MAP_HOST            = _UxGT("Exportovat do PC");
  LSTR MSG_UBL_OUTPUT_MAP_CSV             = _UxGT("Exportovat do CSV");
  LSTR MSG_UBL_OUTPUT_MAP_BACKUP          = _UxGT("Zaloha do PC");
  LSTR MSG_UBL_INFO_UBL                   = _UxGT("Info o UBL do PC");
  LSTR MSG_UBL_FILLIN_AMOUNT              = _UxGT("Hustota mrizky");
  LSTR MSG_UBL_MANUAL_FILLIN              = _UxGT("Rucni hustota");
  LSTR MSG_UBL_SMART_FILLIN               = _UxGT("Chytra hustota");
  LSTR MSG_UBL_FILLIN_MESH                = _UxGT("Zaplnit mrizku");
  LSTR MSG_UBL_INVALIDATE_ALL             = _UxGT("Zrusit vsechno");
  LSTR MSG_UBL_INVALIDATE_CLOSEST         = _UxGT("Zrusit posledni");
  LSTR MSG_UBL_FINE_TUNE_ALL              = _UxGT("Upravit vsechny");
  LSTR MSG_UBL_FINE_TUNE_CLOSEST          = _UxGT("Upravit posledni");
  LSTR MSG_UBL_STORAGE_MESH_MENU          = _UxGT("Uloziste siti");
  LSTR MSG_UBL_STORAGE_SLOT               = _UxGT("Pametovy slot");
  LSTR MSG_UBL_LOAD_MESH                  = _UxGT("Nacist sit bodu");
  LSTR MSG_UBL_SAVE_MESH                  = _UxGT("Ulozit sit bodu");
  LSTR MSG_MESH_LOADED                    = _UxGT("Sit %i nactena");
  LSTR MSG_MESH_SAVED                     = _UxGT("Sit %i ulozena");
  LSTR MSG_UBL_NO_STORAGE                 = _UxGT("Nedostatek mista");
  LSTR MSG_UBL_SAVE_ERROR                 = _UxGT("Ch.: Ulozit UBL");
  LSTR MSG_UBL_RESTORE_ERROR              = _UxGT("Ch.: Obnovit UBL");
  LSTR MSG_UBL_Z_OFFSET                   = _UxGT("Z-ofset: ");
  LSTR MSG_UBL_Z_OFFSET_STOPPED           = _UxGT("Konec Z-ofsetu");
  LSTR MSG_UBL_STEP_BY_STEP_MENU          = _UxGT("UBL Postupne");
  LSTR MSG_UBL_1_BUILD_COLD_MESH          = _UxGT("1. Studena sit bodu");
  LSTR MSG_UBL_2_SMART_FILLIN             = _UxGT("2. Chytra hustota");
  LSTR MSG_UBL_3_VALIDATE_MESH_MENU       = _UxGT("3. Zkontrolovat sit");
  LSTR MSG_UBL_4_FINE_TUNE_ALL            = _UxGT("4. Upravit vsechny");
  LSTR MSG_UBL_5_VALIDATE_MESH_MENU       = _UxGT("5. Zkontrolovat sit");
  LSTR MSG_UBL_6_FINE_TUNE_ALL            = _UxGT("6. Upravit vsechny");
  LSTR MSG_UBL_7_SAVE_MESH                = _UxGT("7. Ulozit sit bodu");

  LSTR MSG_LED_CONTROL                    = _UxGT("Nastaveni LED");
  LSTR MSG_LEDS                           = _UxGT("Svetla");
  LSTR MSG_LED_PRESETS                    = _UxGT("Svetla Predvolby");
  LSTR MSG_SET_LEDS_RED                   = _UxGT("Cervena");
  LSTR MSG_SET_LEDS_ORANGE                = _UxGT("Oranzova");
  LSTR MSG_SET_LEDS_YELLOW                = _UxGT("Zluta");
  LSTR MSG_SET_LEDS_GREEN                 = _UxGT("Zelena");
  LSTR MSG_SET_LEDS_BLUE                  = _UxGT("Modra");
  LSTR MSG_SET_LEDS_INDIGO                = _UxGT("Indigo");
  LSTR MSG_SET_LEDS_VIOLET                = _UxGT("Fialova");
  LSTR MSG_SET_LEDS_WHITE                 = _UxGT("Bila");
  LSTR MSG_SET_LEDS_DEFAULT               = _UxGT("Vychozi");
  LSTR MSG_CUSTOM_LEDS                    = _UxGT("Vlastni svetla");
  LSTR MSG_INTENSITY_R                    = _UxGT("Cervena intenzita");
  LSTR MSG_INTENSITY_G                    = _UxGT("Zelena intezita");
  LSTR MSG_INTENSITY_B                    = _UxGT("Modra intenzita");
  LSTR MSG_INTENSITY_W                    = _UxGT("Bila intenzita");
  LSTR MSG_LED_BRIGHTNESS                 = _UxGT("Jas");

  LSTR MSG_MOVING                         = _UxGT("Posouvani...");
  LSTR MSG_FREE_XY                        = _UxGT("Uvolnit XY");
  LSTR MSG_MOVE_X                         = _UxGT("Posunout X");
  LSTR MSG_MOVE_Y                         = _UxGT("Posunout Y");
  LSTR MSG_MOVE_Z                         = _UxGT("Posunout Z");
  LSTR MSG_MOVE_N                         = _UxGT("Posunout @");
  LSTR MSG_MOVE_E                         = _UxGT("Extruder");
  LSTR MSG_MOVE_EN                        = _UxGT("Extruder *");
  LSTR MSG_HOTEND_TOO_COLD                = _UxGT("Hotend je studeny");
  LSTR MSG_MOVE_N_MM                      = _UxGT("Posunout o x mm");
  LSTR MSG_MOVE_01MM                      = _UxGT("Posunout o 0,1mm");
  LSTR MSG_MOVE_1MM                       = _UxGT("Posunout o 1mm");
  LSTR MSG_MOVE_10MM                      = _UxGT("Posunout o 10mm");
  LSTR MSG_MOVE_50MM                      = _UxGT("Posunout o 50mm");
  LSTR MSG_MOVE_100MM                     = _UxGT("Posunout o 100mm");
  LSTR MSG_SPEED                          = _UxGT("Rychlost");
  LSTR MSG_BED_Z                          = _UxGT("Vyska podl.");
  LSTR MSG_NOZZLE                         = _UxGT("Tryska");
  LSTR MSG_NOZZLE_N                       = _UxGT("Tryska ~");
  LSTR MSG_BED                            = _UxGT("Podlozka");
  LSTR MSG_CHAMBER                        = _UxGT("Komora");
  LSTR MSG_FAN_SPEED                      = _UxGT("Rychlost vent.");
  LSTR MSG_FAN_SPEED_N                    = _UxGT("Rychlost vent. ~");
  LSTR MSG_STORED_FAN_N                   = _UxGT("Uloz. vent. ~");
  LSTR MSG_EXTRA_FAN_SPEED                = _UxGT("Rychlost ex. vent.");
  LSTR MSG_EXTRA_FAN_SPEED_N              = _UxGT("Rychlost ex. vent. ~");
  LSTR MSG_FLOW                           = _UxGT("Prutok");
  LSTR MSG_FLOW_N                         = _UxGT("Prutok ~");
  LSTR MSG_CONTROL                        = _UxGT("Ovladani");
  LSTR MSG_MIN                            = " " LCD_STR_THERMOMETER _UxGT(" min");
  LSTR MSG_MAX                            = " " LCD_STR_THERMOMETER _UxGT(" max");
  LSTR MSG_FACTOR                         = " " LCD_STR_THERMOMETER _UxGT(" fakt");
  LSTR MSG_AUTOTEMP                       = _UxGT("Autoteplota");
  LSTR MSG_LCD_ON                         = _UxGT("Zap");
  LSTR MSG_LCD_OFF                        = _UxGT("Vyp");
  LSTR MSG_PID_AUTOTUNE                   = _UxGT("PID automatika");
  LSTR MSG_PID_AUTOTUNE_E                 = _UxGT("PID automatika *");
  LSTR MSG_SELECT                         = _UxGT("Vybrat");
  LSTR MSG_SELECT_E                       = _UxGT("Vybrat *");
  LSTR MSG_ACC                            = _UxGT("Zrychl");
  LSTR MSG_JERK                           = _UxGT("Trhani (Jerk)");
  LSTR MSG_VA_JERK                        = _UxGT("Max ") STR_A _UxGT(" Jerk");
  LSTR MSG_VB_JERK                        = _UxGT("Max ") STR_B _UxGT(" Jerk");
  LSTR MSG_VC_JERK                        = _UxGT("Max ") STR_C _UxGT(" Jerk");
  LSTR MSG_VN_JERK                        = _UxGT("Max @ Jerk");
  LSTR MSG_VE_JERK                        = _UxGT("Max E Jerk");
  LSTR MSG_JUNCTION_DEVIATION             = _UxGT("Odchylka spoje");
  LSTR MSG_MAX_SPEED                      = _UxGT("Max Rychlost");
  LSTR MSG_VMAX_A                         = _UxGT("Max ") STR_A _UxGT(" Rychlost");
  LSTR MSG_VMAX_B                         = _UxGT("Max ") STR_B _UxGT(" Rychlost");
  LSTR MSG_VMAX_C                         = _UxGT("Max ") STR_C _UxGT(" Rychlost");
  LSTR MSG_VMAX_N                         = _UxGT("Max @ Rychlost");
  LSTR MSG_VMAX_E                         = _UxGT("Max E Rychlost");
  LSTR MSG_VMAX_EN                        = _UxGT("Max * Rychlost");
  LSTR MSG_VMIN                           = _UxGT("Vmin");
  LSTR MSG_VTRAV_MIN                      = _UxGT("VTrav Min");
  LSTR MSG_ACCELERATION                   = _UxGT("Akcelerace");
  LSTR MSG_AMAX_A                         = _UxGT("Max ") STR_A _UxGT(" Akcel");
  LSTR MSG_AMAX_B                         = _UxGT("Max ") STR_B _UxGT(" Akcel");
  LSTR MSG_AMAX_C                         = _UxGT("Max ") STR_C _UxGT(" Akcel");
  LSTR MSG_AMAX_N                         = _UxGT("Max @ Akcel");
  LSTR MSG_AMAX_E                         = _UxGT("Max E Akcel");
  LSTR MSG_AMAX_EN                        = _UxGT("Max * Akcel");
  LSTR MSG_A_RETRACT                      = _UxGT("A-retrakt");
  LSTR MSG_A_TRAVEL                       = _UxGT("A-prejezd");
  LSTR MSG_STEPS_PER_MM                   = _UxGT("Kroku/mm");
  LSTR MSG_A_STEPS                        = STR_A _UxGT(" kroku/mm");
  LSTR MSG_B_STEPS                        = STR_B _UxGT(" kroku/mm");
  LSTR MSG_C_STEPS                        = STR_C _UxGT(" kroku/mm");
  LSTR MSG_N_STEPS                        = _UxGT("@ kroku/mm");
  LSTR MSG_E_STEPS                        = _UxGT("E kroku/mm");
  LSTR MSG_EN_STEPS                       = _UxGT("* kroku/mm");
  LSTR MSG_TEMPERATURE                    = _UxGT("Teplota");
  LSTR MSG_MOTION                         = _UxGT("Pohyb");
  LSTR MSG_FILAMENT                       = _UxGT("Filament");
  LSTR MSG_VOLUMETRIC_ENABLED             = _UxGT("E na mm") SUPERSCRIPT_THREE;
  LSTR MSG_FILAMENT_DIAM                  = _UxGT("Fil. Prum.");
  LSTR MSG_FILAMENT_DIAM_E                = _UxGT("Fil. Prum. *");
  LSTR MSG_FILAMENT_UNLOAD                = _UxGT("Vysunout mm");
  LSTR MSG_FILAMENT_LOAD                  = _UxGT("Zavest mm");
  LSTR MSG_ADVANCE_K                      = _UxGT("K pro posun");
  LSTR MSG_ADVANCE_K_E                    = _UxGT("K pro posun *");
  LSTR MSG_CONTRAST                       = _UxGT("Kontrast LCD");
  LSTR MSG_STORE_EEPROM                   = _UxGT("Ulozit nastaveni");
  LSTR MSG_LOAD_EEPROM                    = _UxGT("Nacist nastaveni");
  LSTR MSG_RESTORE_DEFAULTS               = _UxGT("Obnovit vychozi");
  LSTR MSG_INIT_EEPROM                    = _UxGT("Inic. EEPROM");
  LSTR MSG_MEDIA_UPDATE                   = _UxGT("Aktualizace z SD");
  LSTR MSG_RESET_PRINTER                  = _UxGT("Reset tiskarny");
  LSTR MSG_REFRESH                        = LCD_STR_REFRESH _UxGT("Obnovit");
  LSTR MSG_INFO_SCREEN                    = _UxGT("Info obrazovka");
  LSTR MSG_PREPARE                        = _UxGT("Priprava tisku");
  LSTR MSG_TUNE                           = _UxGT("Doladeni tisku");
  LSTR MSG_START_PRINT                    = _UxGT("Spustit tisk");
  LSTR MSG_BUTTON_NEXT                    = _UxGT("Dalsi");
  LSTR MSG_BUTTON_INIT                    = _UxGT("Inicializace");
  LSTR MSG_BUTTON_STOP                    = _UxGT("Stop");
  LSTR MSG_BUTTON_PRINT                   = _UxGT("Tisk");
  LSTR MSG_BUTTON_RESET                   = _UxGT("Reset");
  LSTR MSG_BUTTON_CANCEL                  = _UxGT("Zrusit");
  LSTR MSG_BUTTON_DONE                    = _UxGT("Hotovo");
  LSTR MSG_BUTTON_BACK                    = _UxGT("Zpet");
  LSTR MSG_BUTTON_PROCEED                 = _UxGT("Pokracovat");
  LSTR MSG_PAUSE_PRINT                    = _UxGT("Pozastavit tisk");
  LSTR MSG_RESUME_PRINT                   = _UxGT("Obnovit tisk");
  LSTR MSG_STOP_PRINT                     = _UxGT("Zastavit tisk");
  LSTR MSG_PRINTING_OBJECT                = _UxGT("Tisk objektu");
  LSTR MSG_CANCEL_OBJECT                  = _UxGT("Zrusit objekt");
  LSTR MSG_CANCEL_OBJECT_N                = _UxGT("Zrusit objekt =");
  LSTR MSG_OUTAGE_RECOVERY                = _UxGT("Obnova vypadku");
  LSTR MSG_MEDIA_MENU                     = _UxGT("Tisknout z SD");
  LSTR MSG_NO_MEDIA                       = _UxGT("zadna SD karta");
  LSTR MSG_DWELL                          = _UxGT("Uspano...");
  LSTR MSG_USERWAIT                       = _UxGT("cekani na uziv...");
  LSTR MSG_PRINT_PAUSED                   = _UxGT("Tisk pozastaven");
  LSTR MSG_PRINTING                       = _UxGT("Tisknu...");
  LSTR MSG_PRINT_ABORTED                  = _UxGT("Tisk zrusen");
  LSTR MSG_NO_MOVE                        = _UxGT("zadny pohyb.");
  LSTR MSG_KILLED                         = _UxGT("PRERUSENO. ");
  LSTR MSG_STOPPED                        = _UxGT("ZASTAVENO. ");
  LSTR MSG_CONTROL_RETRACT                = _UxGT("Retrakt mm");
  LSTR MSG_CONTROL_RETRACT_SWAP           = _UxGT("Vymena Re.mm");
  LSTR MSG_CONTROL_RETRACTF               = _UxGT("Retraktovat  V");
  LSTR MSG_CONTROL_RETRACT_ZHOP           = _UxGT("Zvednuti Z mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER        = _UxGT("Unretr. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAP   = _UxGT("S Unretr. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVERF       = _UxGT("Unretract V");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAPF  = _UxGT("S UnRet V");
  LSTR MSG_AUTORETRACT                    = _UxGT("Auto-Retract");
  LSTR MSG_FILAMENT_SWAP_LENGTH           = _UxGT("Delka retrakce");
  LSTR MSG_FILAMENT_PURGE_LENGTH          = _UxGT("Delka zavedeni");
  LSTR MSG_TOOL_CHANGE                    = _UxGT("Vymena nastroje");
  LSTR MSG_TOOL_CHANGE_ZLIFT              = _UxGT("Zdvih Z");
  LSTR MSG_SINGLENOZZLE_PRIME_SPEED       = _UxGT("Rychlost primar.");
  LSTR MSG_SINGLENOZZLE_RETRACT_SPEED     = _UxGT("Rychlost retrak.");
  LSTR MSG_NOZZLE_STANDBY                 = _UxGT("Tryska standby");
  LSTR MSG_FILAMENTCHANGE                 = _UxGT("Vymenit filament");
  LSTR MSG_FILAMENTCHANGE_E               = _UxGT("Vymenit filament *");
  LSTR MSG_FILAMENTLOAD                   = _UxGT("Zavest filament");
  LSTR MSG_FILAMENTLOAD_E                 = _UxGT("Zavest filament *");
  LSTR MSG_FILAMENTUNLOAD                 = _UxGT("Vysunout filament");
  LSTR MSG_FILAMENTUNLOAD_E               = _UxGT("Vysunout filament *");
  LSTR MSG_FILAMENTUNLOAD_ALL             = _UxGT("Vysunout vse");

  LSTR MSG_ATTACH_MEDIA                   = _UxGT("Nacist medium");
  LSTR MSG_CHANGE_MEDIA                   = _UxGT("Vymenit medium");
  LSTR MSG_RELEASE_MEDIA                  = _UxGT("Vysunout medium");
  LSTR MSG_ZPROBE_OUT                     = _UxGT("Sonda Z mimo podl");
  LSTR MSG_SKEW_FACTOR                    = _UxGT("Faktor zkoseni");
  LSTR MSG_BLTOUCH                        = _UxGT("BLTouch");
  LSTR MSG_BLTOUCH_SELFTEST               = _UxGT("BLTouch self-test");
  LSTR MSG_BLTOUCH_RESET                  = _UxGT("BLTouch reset");
  LSTR MSG_BLTOUCH_STOW                   = _UxGT("BLTouch zasunout");
  LSTR MSG_BLTOUCH_DEPLOY                 = _UxGT("BLTouch vysunout");
  LSTR MSG_BLTOUCH_SW_MODE                = _UxGT("SW vysun BLTouch");
  LSTR MSG_BLTOUCH_5V_MODE                = _UxGT("BLTouch 5V rezim");
  LSTR MSG_BLTOUCH_OD_MODE                = _UxGT("BLTouch OD rezim");
  LSTR MSG_BLTOUCH_MODE_STORE             = _UxGT("Ulozit rezim");
  LSTR MSG_BLTOUCH_MODE_STORE_5V          = _UxGT("Nastavit 5V");
  LSTR MSG_BLTOUCH_MODE_STORE_OD          = _UxGT("Nastacit OD");
  LSTR MSG_BLTOUCH_MODE_ECHO              = _UxGT("Vypsat nastaveni");
  LSTR MSG_BLTOUCH_MODE_CHANGE            = _UxGT("VAROVANi: spatne nastaveni muze zpusobit skody! Pokracovat?");
  LSTR MSG_TOUCHMI_PROBE                  = _UxGT("TouchMI");
  LSTR MSG_TOUCHMI_INIT                   = _UxGT("Inic. TouchMI");
  LSTR MSG_TOUCHMI_ZTEST                  = _UxGT("Test Z Ofsetu");
  LSTR MSG_TOUCHMI_SAVE                   = _UxGT("Ulozit");
  LSTR MSG_MANUAL_DEPLOY_TOUCHMI          = _UxGT("vysunout TouchMI");
  LSTR MSG_MANUAL_DEPLOY                  = _UxGT("Vysunout Z-sondu");
  LSTR MSG_MANUAL_STOW                    = _UxGT("Zasunout Z-sondu");
  LSTR MSG_HOME_FIRST                     = _UxGT("Domu %s%s%s prvni");
  LSTR MSG_ZPROBE_ZOFFSET                 = _UxGT("Z ofset");
  LSTR MSG_BABYSTEP_X                     = _UxGT("Babystep X");
  LSTR MSG_BABYSTEP_Y                     = _UxGT("Babystep Y");
  LSTR MSG_BABYSTEP_Z                     = _UxGT("Babystep Z");
  LSTR MSG_BABYSTEP_N                     = _UxGT("Babystep @");
  LSTR MSG_BABYSTEP_TOTAL                 = _UxGT("Celkem");
  LSTR MSG_ENDSTOP_ABORT                  = _UxGT("Endstop zruseni");
  LSTR MSG_HEATING_FAILED_LCD             = _UxGT("Chyba zahrivani");
  LSTR MSG_ERR_REDUNDANT_TEMP             = _UxGT("REDUND. TEPLOTA");
  LSTR MSG_THERMAL_RUNAWAY                = _UxGT("TEPLOTNI UNIK");
  LSTR MSG_THERMAL_RUNAWAY_BED            = _UxGT("TEPL. UNIK PODL.");
  LSTR MSG_THERMAL_RUNAWAY_CHAMBER        = _UxGT("TEPL. UNIK KOMORA");
  LSTR MSG_ERR_MAXTEMP                    = _UxGT("VYSOKA TEPLOTA");
  LSTR MSG_ERR_MINTEMP                    = _UxGT("NIZKA TEPLOTA");
  LSTR MSG_HALTED                         = _UxGT("TISK. ZASTAVENA");
  LSTR MSG_PLEASE_RESET                   = _UxGT("Provedte reset");
  LSTR MSG_HEATING                        = _UxGT("Zahrivani...");
  LSTR MSG_COOLING                        = _UxGT("Chlazeni...");
  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_BED_HEATING                  = _UxGT("Zahrivani podlozky");
  #else
    LSTR MSG_BED_HEATING                  = _UxGT("Zahrivani podl.");
  #endif
  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_BED_COOLING                  = _UxGT("Chlazeni podlozky");
  #else
    LSTR MSG_BED_COOLING                  = _UxGT("Chlazeni podl.");
  #endif
  LSTR MSG_CHAMBER_HEATING                = _UxGT("Zahrivani komory...");
  LSTR MSG_CHAMBER_COOLING                = _UxGT("Chlazeni komory...");
  LSTR MSG_DELTA_CALIBRATE                = _UxGT("Delta Kalibrace");
  LSTR MSG_DELTA_CALIBRATE_X              = _UxGT("Kalibrovat X");
  LSTR MSG_DELTA_CALIBRATE_Y              = _UxGT("Kalibrovat Y");
  LSTR MSG_DELTA_CALIBRATE_Z              = _UxGT("Kalibrovat Z");
  LSTR MSG_DELTA_CALIBRATE_CENTER         = _UxGT("Kalibrovat Stred");
  LSTR MSG_DELTA_SETTINGS                 = _UxGT("Delta nastaveni");
  LSTR MSG_DELTA_AUTO_CALIBRATE           = _UxGT("Autokalibrace");
  LSTR MSG_DELTA_DIAG_ROD                 = _UxGT("Diag rameno");
  LSTR MSG_DELTA_HEIGHT                   = _UxGT("Vyska");
  LSTR MSG_DELTA_RADIUS                   = _UxGT("Polomer");
  LSTR MSG_INFO_MENU                      = _UxGT("O tiskarne");
  LSTR MSG_INFO_PRINTER_MENU              = _UxGT("Info o tiskarne");
  LSTR MSG_3POINT_LEVELING                = _UxGT("3-bodove rovnani");
  LSTR MSG_LINEAR_LEVELING                = _UxGT("Linearni rovnani");
  LSTR MSG_BILINEAR_LEVELING              = _UxGT("Bilinearni rovnani");
  LSTR MSG_UBL_LEVELING                   = _UxGT("Unified Bed Leveling");
  LSTR MSG_MESH_LEVELING                  = _UxGT("Mrizkove rovnani");
  LSTR MSG_INFO_STATS_MENU                = _UxGT("Statistika");
  LSTR MSG_INFO_BOARD_MENU                = _UxGT("Info o desce");
  LSTR MSG_INFO_THERMISTOR_MENU           = _UxGT("Termistory");
  LSTR MSG_INFO_EXTRUDERS                 = _UxGT("Extrudery");
  LSTR MSG_INFO_BAUDRATE                  = _UxGT("Rychlost");
  LSTR MSG_INFO_PROTOCOL                  = _UxGT("Protokol");
  LSTR MSG_INFO_RUNAWAY_OFF               = _UxGT("Sledovani uniku: VYP");
  LSTR MSG_INFO_RUNAWAY_ON                = _UxGT("Sledovani uniku: ZAP");

  LSTR MSG_CASE_LIGHT                     = _UxGT("Osvetleni");
  LSTR MSG_CASE_LIGHT_BRIGHTNESS          = _UxGT("Jas svetla");
  LSTR MSG_KILL_EXPECTED_PRINTER          = _UxGT("NESPRAVNA TISKARNA");

  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Pocet tisku");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Dokonceno");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Celkovy cas");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Nejdelsi tisk");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("Celkem vytlaceno");
  #else
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Tisky");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Hotovo");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Cas");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Nejdelsi");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("Vytlaceno");
  #endif

  LSTR MSG_INFO_MIN_TEMP                  = _UxGT("Teplota min");
  LSTR MSG_INFO_MAX_TEMP                  = _UxGT("Teplota max");
  LSTR MSG_INFO_PSU                       = _UxGT("Nap. zdroj");
  LSTR MSG_DRIVE_STRENGTH                 = _UxGT("Buzeni motoru");
  LSTR MSG_DAC_PERCENT_N                  = _UxGT("@ Motor %");
  LSTR MSG_DAC_EEPROM_WRITE               = _UxGT("DAC ulozit EEPROM");
  LSTR MSG_ERROR_TMC                      = _UxGT("TMC CHYBA SPOJENI");
  LSTR MSG_FILAMENT_CHANGE_HEADER         = _UxGT("VYMENA FILAMENTU");
  LSTR MSG_FILAMENT_CHANGE_HEADER_PAUSE   = _UxGT("TISK POZASTAVEN");
  LSTR MSG_FILAMENT_CHANGE_HEADER_LOAD    = _UxGT("ZAVEDENI FILAMENTU");
  LSTR MSG_FILAMENT_CHANGE_HEADER_UNLOAD  = _UxGT("VYSUNUTI FILAMENTU");
  LSTR MSG_FILAMENT_CHANGE_OPTION_HEADER  = _UxGT("MOZNOSTI OBNOVENI:");
  LSTR MSG_FILAMENT_CHANGE_OPTION_PURGE   = _UxGT("Vytlacit vic");
  LSTR MSG_FILAMENT_CHANGE_OPTION_RESUME  = _UxGT("Obnovit tisk");
  LSTR MSG_FILAMENT_CHANGE_NOZZLE         = _UxGT("  Tryska: ");
  LSTR MSG_RUNOUT_SENSOR                  = _UxGT("Senzor filamentu");
  LSTR MSG_RUNOUT_DISTANCE_MM             = _UxGT("Delka mm senz.fil.");
  LSTR MSG_KILL_HOMING_FAILED             = _UxGT("Parkovani selhalo");
  LSTR MSG_LCD_PROBING_FAILED             = _UxGT("Kalibrace selhala");

  LSTR MSG_MMU2_CHOOSE_FILAMENT_HEADER    = _UxGT("VYBERTE FILAMENT");
  LSTR MSG_MMU2_MENU                      = _UxGT("MMU");
  LSTR MSG_KILL_MMU2_FIRMWARE             = _UxGT("Aktual. MMU firmware!");
  LSTR MSG_MMU2_NOT_RESPONDING            = _UxGT("MMU potr. pozornost.");
  LSTR MSG_MMU2_RESUME                    = _UxGT("Obnovit tisk");
  LSTR MSG_MMU2_RESUMING                  = _UxGT("Obnovovani...");
  LSTR MSG_MMU2_LOAD_FILAMENT             = _UxGT("Zavest filament");
  LSTR MSG_MMU2_LOAD_ALL                  = _UxGT("Zavest vsechny");
  LSTR MSG_MMU2_LOAD_TO_NOZZLE            = _UxGT("Zavest do trysky");
  LSTR MSG_MMU2_EJECT_FILAMENT            = _UxGT("Vysunout filament");
  LSTR MSG_MMU2_EJECT_FILAMENT_N          = _UxGT("Vysun. filament ~");
  LSTR MSG_MMU2_UNLOAD_FILAMENT           = _UxGT("Vytahnout filament");
  LSTR MSG_MMU2_LOADING_FILAMENT          = _UxGT("Zavadeni fil. %i...");
  LSTR MSG_MMU2_EJECTING_FILAMENT         = _UxGT("Vytahovani fil. ...");
  LSTR MSG_MMU2_UNLOADING_FILAMENT        = _UxGT("Vysouvani fil....");
  LSTR MSG_MMU2_ALL                       = _UxGT("Vsechny");
  LSTR MSG_MMU2_FILAMENT_N                = _UxGT("Filament ~");
  LSTR MSG_MMU2_RESET                     = _UxGT("Resetovat MMU");
  LSTR MSG_MMU2_RESETTING                 = _UxGT("Resetovani MMU...");
  LSTR MSG_MMU2_EJECT_RECOVER             = _UxGT("Vytahnete, kliknete");

  LSTR MSG_MIX                            = _UxGT("Mix");
  LSTR MSG_MIX_COMPONENT_N                = _UxGT("Komponenta =");
  LSTR MSG_MIXER                          = _UxGT("Mixer");
  LSTR MSG_GRADIENT                       = _UxGT("Prechod");
  LSTR MSG_FULL_GRADIENT                  = _UxGT("Cely prechod");
  LSTR MSG_TOGGLE_MIX                     = _UxGT("Prepnout mix");
  LSTR MSG_CYCLE_MIX                      = _UxGT("Stridat mix");
  LSTR MSG_GRADIENT_MIX                   = _UxGT("Prechod mix");
  LSTR MSG_REVERSE_GRADIENT               = _UxGT("Opacny prechod");
  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_ACTIVE_VTOOL                 = _UxGT("Aktivni V-nastroj");
    LSTR MSG_START_VTOOL                  = _UxGT("Spustit V-nastroj");
    LSTR MSG_END_VTOOL                    = _UxGT("Ukoncit V-nastroj");
    LSTR MSG_GRADIENT_ALIAS               = _UxGT("Alias V-nastroje");
    LSTR MSG_RESET_VTOOLS                 = _UxGT("Resetovat V-nastroj");
    LSTR MSG_COMMIT_VTOOL                 = _UxGT("Ulozit V-nastroj mix");
    LSTR MSG_VTOOLS_RESET                 = _UxGT("V-nastroj resetovat");
  #else
    LSTR MSG_ACTIVE_VTOOL                 = _UxGT("Aktivni V-nastr.");
    LSTR MSG_START_VTOOL                  = _UxGT("Spustit V-nastr.");
    LSTR MSG_END_VTOOL                    = _UxGT("Ukoncit V-nastr.");
    LSTR MSG_GRADIENT_ALIAS               = _UxGT("Alias V-nastr.");
    LSTR MSG_RESET_VTOOLS                 = _UxGT("Reset. V-nastr.");
    LSTR MSG_COMMIT_VTOOL                 = _UxGT("Ulozit V-nas. mix");
    LSTR MSG_VTOOLS_RESET                 = _UxGT("V-nastr. reset.");
  #endif
  LSTR MSG_START_Z                        = _UxGT("Pocatecni Z:");
  LSTR MSG_END_Z                          = _UxGT("  Koncove Z:");

  LSTR MSG_GAMES                          = _UxGT("Hry");
  LSTR MSG_BRICKOUT                       = _UxGT("Brickout");
  LSTR MSG_INVADERS                       = _UxGT("Invaders");
  LSTR MSG_SNAKE                          = _UxGT("Snake");
  LSTR MSG_MAZE                           = _UxGT("Bludiste");

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_2_LINE("Stiknete tlacitko", "pro obnoveni tisku"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Parkovani..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_3_LINE("cekejte prosim", "na zahajeni", "vymeny filamentu"));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_3_LINE("Vlozte filament", "a stisknete", "tlacitko..."));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_2_LINE("Kliknete pro", "nahrati trysky"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_2_LINE("cekejte prosim", "na nahrati tr."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_3_LINE("cekejte prosim", "na vysunuti", "filamentu"));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_3_LINE("cekejte prosim", "na zavedeni", "filamentu"));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_2_LINE("Vyckejte na", "vytlaceni"));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_3_LINE("Kliknete pro", "ukonceni", "vytlacovani"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_3_LINE("cekejte prosim", "na pokracovani", "tisku"));
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_2_LINE("Stiknete tlac.", "pro obnoveni"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Parkovani..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_1_LINE("cekejte..."));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_1_LINE("Vlozte, kliknete"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_2_LINE("Kliknete pro", "nahrati"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_1_LINE("Nahrivani..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_1_LINE("Vysouvani..."));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_1_LINE("Zavadeni..."));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_1_LINE("Vytlacovani..."));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_2_LINE("Kliknete pro", "ukonceni"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_1_LINE("Pokracovani..."));
  #endif // LCD_HEIGHT < 4

  LSTR MSG_TMC_DRIVERS                    = _UxGT("TMC budice");
  LSTR MSG_TMC_CURRENT                    = _UxGT("Proud budicu");
  LSTR MSG_TMC_HYBRID_THRS                = _UxGT("Hybridni prah");
  LSTR MSG_TMC_HOMING_THRS                = _UxGT("Domu bez senzoru");
  LSTR MSG_TMC_STEPPING_MODE              = _UxGT("Rezim kroku");
  LSTR MSG_TMC_STEALTH_ENABLED            = _UxGT("StealthChop povolen");
  LSTR MSG_SERVICE_RESET                  = _UxGT("Reset");
  LSTR MSG_SERVICE_IN                     = _UxGT(" za:");
  LSTR MSG_BACKLASH                       = _UxGT("Vule");
  LSTR MSG_BACKLASH_CORRECTION            = _UxGT("Korekce");
  LSTR MSG_BACKLASH_SMOOTHING             = _UxGT("Vyhlazeni");
}
