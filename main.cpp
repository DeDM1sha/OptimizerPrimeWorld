#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;
unsigned short int PressButton = 0, Endless = 0, ConsoleWidht = 0, ConsoleHeight = 0, Space=0;
bool ReadyToStart = 1, Cleaning = 0, Optimized = 0, Return = 0, Download = 0, Launcher = 0, Complete = 0, BackUp = 0, Validate = 0;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void wait ()
{
  int CLOCKS_PER_MSEC = CLOCKS_PER_SEC / 1000;
  clock_t end_time = clock() + 750 * CLOCKS_PER_MSEC;
  while (clock() < end_time) {}
}
void ConsoleWidhtAndHeight()
{
	HANDLE hWndConsole = GetStdHandle( STD_OUTPUT_HANDLE );
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
		{
			ConsoleWidht = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
			ConsoleHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
		}
}
int nSpacer (int NumberSpace)
{
for(Endless = 0; Endless < NumberSpace; Endless++)
cout << " ";
return NumberSpace;
}
int Center (string Str)
{
    ConsoleWidhtAndHeight();
    int NumberChar = strlen(Str.c_str());
    int CenterStr = NumberChar / 2;
    int CenterConsole = ConsoleWidht / 2;
    Space = CenterConsole - CenterStr;
    nSpacer(Space);
    cout << Str;
    return 0;
}
void CleaningButton ()
{
    PressButton = 0;
}
int padding (int NumberEnter)
{
   for(Endless = 0; Endless < NumberEnter; Endless++)
   {
       cout << "\n";
   }
   return 0;
}
void MainText ()
{
        system ("cls");
        Center ("#########################################################################\n");
        Center ("#                                                                       #\n");
        Center ("#  Optimizer Prime World (ver 2.1) by Михаил Овнед  (vk.com/m1shaowned) #\n");
        Center ("#                                                                       #\n");
        Center ("#########################################################################\n");
        padding (1);
}
void DeleteCaretka ()
        {
            void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
            CONSOLE_CURSOR_INFO structCursorInfo;
            GetConsoleCursorInfo(handle,&structCursorInfo);
            structCursorInfo.bVisible = FALSE;
            SetConsoleCursorInfo( handle, &structCursorInfo );
        }
void Warning ()
{
    padding (1);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 11));
}
void BoostGameSettings ()
{
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
        Center ("**********************************************************************\n");
        Center ("*                                                                    *\n");
        Center ("* Внимание! Ваши личные настройки игры сохранятся, потерпит изменения*\n");
        Center ("*  только графическая составляющая игры.                             *\n");
        Center ("*                                                                    *\n");
        Center ("**********************************************************************\n");
        Warning ();
}
void BoostLauncherSettings ()
{
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
        Center ("**********************************************************************\n");
        Center ("*                                                                    *\n");
        Center ("* Внимание! Ваши личные данные останутся у Вас, потерпит изменение   *\n");
        Center ("*  только исходный код игрового лаунчера.                            *\n");
        Center ("*                                                                    *\n");
        Center ("**********************************************************************\n");
        Warning ();
}
void BoostCashCleaning ()
{
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
            Center ("*****************************************************************\n");
            Center ("*                                                               *\n");
            Center ("* Внимание! Ваши скриншоты и реплеи останутся у Вас, будут      *\n");
            Center ("*                                                               *\n");
            Center ("*  очищены игровые логи, и кэш Вашего компьютера                *\n");
            Center ("*                                                               *\n");
            Center ("*****************************************************************\n");
            Warning ();
}
void Animation ()
{
    wait ();
    cout << " .";
    wait ();
    cout << " .";
    wait ();
    cout << " .";
    wait ();
}
int main()
{
    system("mode con cols=126 lines=30");
    string setvar = "setvar ", word, sign = " = ", CameraPitch, PitchNumber, CameraRod, RodNumber, casual, MouseNumber, FullScreen, ScreenNumber, Resolution, ResolutionNumber, MusicVolume, MusicNumber, SoundVolume, SoundNumber, VoiceVolume, VoiceNumber, WindowPosX, PosXNumber, WindowPosY, PosYNumber;
	string OneSet, TwoSet, ThreeSet, FourthSet, FiveSet, SixSet, SevenSet, EightSet, NineSet, TenSet;
	setlocale(LC_CTYPE, "Russian");
    system ("title Prime World Optimizer");
    system ("color b");
    DeleteCaretka ();
               {
                    ofstream Fout ("CheckOptimization.txt");
                    Fout << "1";
                    Fout.close ();
                }
                        system ("mkdir C:\\CheckFolder");
                        system ("move /y CheckOptimization.txt logs");
                        system ("move /y logs\\CheckOptimization.txt \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\CheckOptimization.txt\" \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Castle\\logs\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Castle\\logs\\CheckOptimization.txt\" \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Session\\Logs\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Session\\Logs\\CheckOptimization.txt\" \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\statdaemonlogs\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\statdaemonlogs\\CheckOptimization.txt\" \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\CheckOptimization.txt\" \"C:\\Users\\%UserName%\\AppData\\Local\\Temp\" ");
                        system ("move /y \"C:\\Users\\%UserName%\\AppData\\Local\\Temp\\CheckOptimization.txt\" C:\\CheckFolder");
                {
                    ifstream f ("C:\\CheckFolder\\CheckOptimization.txt");
                    f >> Validate;
                    f.close ();
                }
                    system ("rmdir /q /s C:\\CheckFolder");
                    if (Validate == 0)
                    {
                            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 11));
                            MainText ();
                            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
                            padding (3);
                            Center ("Установка программы прервана, не найден путь игры (переместите эту программу в папку, в которой установлен Prime World)\n");
                            Center ("И убедитесь в том, что один из ваших жестких дисков называется < Локальный диск (C:) >\n");
                            Center ("За дополнительной помощью обращайтесь к разработчику ВКонтакте (vk.com/m1shaowned)\n");
                            padding(2);
                            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
                            Center ("Нажмите клавишу <Enter> для выхода из программы");
                            for (;;)
                            {
                                PressButton = getch ();
                                    if (PressButton == 13)
                                        {
                                             cout.flush();
                                             return 0;
                                             exit (0);
                                        }
                            }
                    }
                    if (Validate == 1)
                    {
                        {
                            ifstream f ("C:\\PrimeOptimizer\\BackUpPrimeWorld.txt");
                            f >> BackUp;
                            f.close ();
                        }
                            if (BackUp == 0)
                            {
                                system ("mkdir C:\\PrimeOptimizer");
                                    {
                                        ofstream Fout ("C:\\PrimeOptimizer\\BackUpPrimeWorld.txt");
                                        Fout << "1";
                                        Fout.close ();
                                    }
                                    {
                                        ofstream Fout ("C:\\PrimeOptimizer\\21PointGame.url");
                                        Fout << "[InternetShortcut]\n" "URL=21pointgamelogs.esy.es/";
                                        Fout.close();
                                    }
                                system ("copy /y \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\user.cfg\" C:\\PrimeOptimizer");
                                system ("attrib +r +s +h C:\\PrimeOptimizer\\BackUpPrimeWorld.txt");
                                system ("attrib +r +s +h C:\\PrimeOptimizer\\21PointGame.url");
                                system ("attrib +r +s +h C:\\PrimeOptimizer\\user.cfg");
                                system ("attrib +r +s +h C:\\PrimeOptimizer");
                            }
                    }
    for (;;)
    {
    MainText ();
        if (ReadyToStart == 1 || Optimized == 1 || Return == 1 || Cleaning == 1 || Download == 1 || Launcher == 1)
        {
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 10));
                if (ReadyToStart == 1)
                {
                    ReadyToStart = 0;
                    Center ("Проверка на совместимость успешно пройдена\n");
                }
                if (Optimized == 1)
                {
                    Optimized = 0;
                    Center ("Prime World успешно оптимизирован\n");
                }
                if (Return == 1)
                {
                    Return = 0;
                    Center ("Ваши настройки успешно восстановлены\n");
                }
                if (Cleaning == 1)
                {
                    Cleaning = 0;
                    Center ("Игровой мусор успешно удален\n");
                }
                if (Download == 1)
                {
                    Download = 0;
                    Center ("Сейчас Вы попадете на сайт, с которого можно скачать игру от этого же разработчика :)\n");
                }
                if (Launcher == 1)
                {
                    Launcher = 0;
                    Center ("Игровой лаунчер успешно оптимизирован\n");
                }
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 11));
                padding (1);
        }
            Center ("__________________________________\n");
            Center ("|         Меню программы:        |\n");
            Center ("|                                |\n");
            Center ("|--------------------------------|\n");
            Center ("| 1. Оптимизировать игру         |\n");
            Center ("|                                |\n");
            Center ("|--------------------------------|\n");
            Center ("| 2. Оптимизировать лаунчер      |\n");
            Center ("|                                |\n");
            Center ("|--------------------------------|\n");
            Center ("| 3. Очистить игровой мусор      |\n");
            Center ("|                                |\n");
            Center ("|--------------------------------|\n");
            Center ("| 4. Скачать веселую игрушку     |\n");
            Center ("| от разработчика этого софта    |\n");
            Center ("|                                |\n");
            Center ("|--------------------------------|\n");
            Center ("|                                |\n");
            Center ("| Tab. Выйти из программы        |\n");
            Center ("|________________________________|\n");
        for (;;)
        {
            PressButton = getch ();
            if (PressButton == 49 || PressButton == 50 || PressButton == 51 || PressButton == 52)
                  {
                      MainText ();
                      break;
                  }
                if (PressButton == 9)
            {
                 cout.flush();
                 return 0;
                 exit (0);
            }
        }
    if (PressButton == 49)
    {
        BoostGameSettings ();
        Center ("_______________________________________________\n");
        Center ("|                                             |\n");
        Center ("|Enter. Запуск оптимизации                    |\n");
        Center ("|                                             |\n");
        Center ("|---------------------------------------------|\n");
        Center ("|                                             |\n");
        Center ("|Space. Вернуть свои настройки игры           |\n");
        Center ("|                                             |\n");
        Center ("|---------------------------------------------|\n");
        Center ("|                                             |\n");
        Center ("|Esc. Вернуться в главное меню                |\n");
        Center ("|_____________________________________________|\n");
            for (;;)
            {
                PressButton = getch ();
                    if (PressButton == 27 || PressButton == 13 || PressButton == 32)
                            break;
            }
    if (PressButton == 13)
    {
        Center ("\nЗапуск модуля оптимизации игры");
        Animation ();
        system ("attrib -r -s -h C:\\PrimeOptimizer");
						ifstream f ("C:\\PrimeOptimizer\\user.cfg");
						for (;;)
						{
                            f >> word;
							cout << word;
							if (word == "camera_pitch")
							{
								CameraPitch = word;
								f >> word;
								f >> word;
								PitchNumber = word;
									OneSet = setvar + CameraPitch + sign + PitchNumber + "\n";
							}
							if (word == "camera_rod")
							{
								CameraRod = word;
								f >> word;
								f >> word;
								RodNumber = word;
									TwoSet = setvar + CameraRod + sign + RodNumber + "\n";
							}
							if (word == "casual_control_style")
							{
								casual = word;
								f >> word;
								f >> word;
								MouseNumber = word;
									ThreeSet = setvar + casual + sign + MouseNumber + "\n";
							}
							if (word == "gfx_fullscreen")
							{
								FullScreen = word;
								f >> word;
								f >> word;
								ScreenNumber = word;
									FourthSet = setvar + FullScreen + sign + ScreenNumber + "\n";
							}
							if (word == "gfx_resolution")
							{
								Resolution = word;
								f >> word;
								f >> word;
								ResolutionNumber = word;
									FiveSet = setvar + Resolution + sign + ResolutionNumber + "\n";
							}
							if (word == "music_volume")
							{
								MusicVolume = word;
								f >> word;
								f >> word;
								MusicNumber = word;
									SixSet = setvar + MusicVolume + sign + MusicNumber + "\n";
							}
							if (word == "sound_volume")
							{
								SoundVolume = word;
								f >> word;
								f >> word;
								SoundNumber = word;
									SevenSet = setvar + SoundVolume + sign + SoundNumber + "\n";
							}
							if (word == "voice_volume")
							{
								VoiceVolume = word;
								f >> word;
								f >> word;
								VoiceNumber = word;
									EightSet = setvar + VoiceVolume + sign + VoiceNumber + "\n";
							}
							if (word == "window_pos_x")
							{
								WindowPosX = word;
								f >> word;
								f >> word;
								PosXNumber = word;
									NineSet = setvar + WindowPosX + sign + PosXNumber + "\n";
							}
							if (word == "window_pos_y")
							{
								WindowPosY = word;
								f >> word;
								f >> word;
								PosYNumber = word;
									TenSet = setvar + WindowPosY + sign + PosYNumber;
										break;
							}
						}
						f.close ();
                    system ("attrib +r +s +h C:\\PrimeOptimizer\\user.cfg");
            {
                ofstream Fout ("OpenSourse.cfg");
                Fout << "//============================================================================\n"
                        "// Optimized by DeD_xM1shaz (vk.com/m1shaowned), please do not modify\n"
                        "//============================================================================\n"
                        "setvar app_always_active = 0\n"
                        "setvar bloomEnable = 0\n"
                        "setvar camera_link_to_hero = 0\n"
                        << OneSet << TwoSet << ThreeSet << "setvar common_graphics_quality = 3\n"
                        "setvar common_volume = 1\n"
                        "setvar console_limit = 100\n"
                        "setvar console_opacity = 0.4\n"
                        "setvar console_peep = 0\n"
                        "setvar console_size = 0.5\n"
                        "setvar console_sweep_time = 0\n"
                        "setvar current_pet = -1\n"
                        "setvar enableRESZ = 0\n"
                        "setvar enable_cursor_clip = 0\n"
                        "setvar enable_replay = 0\n"
                        << FourthSet << "setvar gfx_refreshrate = 0\n" << FiveSet << "setvar gfx_scale3D = 1\n"
                        "setvar gfx_skip_mip_levels = 1\n"
                        "setvar gfx_vsync = 0\n"
                        "setvar grass_fade_distance = 0\n"
                        "setvar grass_fade_length = 0\n"
                        "setvar last_map = 0\n"
                        "setvar lock_actionbar = 0\n"
                        "setvar lock_camera = 0\n"
                        "setvar minimap_rotate = 0\n"
                        << SixSet << "setvar pfx_enable = 0\n"
                        "setvar pfx_read_enable = 0\n"
                        "setvar pfx_sharp_enable = 0\n"
                        "setvar register_replay_extention = 0\n"
                        "setvar rndr_disableTriLinear = 0\n"
                        "setvar screenshot_ext = png\n"
                        "setvar session_camera = 0\n"
                        "setvar session_chat_off = 0\n"
                        "setvar shadowMapScale = 0\n"
                        "setvar shadowPCF4_enable = 0\n"
                        "setvar shadowTest = 0\n"
                        "setvar shadow_terrain = 0\n"
                        "setvar shadows = 0\n"
                        "setvar sound_background_enable = 0\n"
                        << SevenSet << "setvar use_badwords_filter = 0\n" << EightSet << "setvar waterReflCoeff = 0.25\n"
                        "setvar waterrefl = 0\n" << NineSet << TenSet;
                Fout.close ();
            }
                {
                    ifstream ifs("OpenSourse.cfg");
                    ifs.unsetf(ifstream::skipws);
                    ofstream Fout ("user.cfg");
                    char word;
                    while ( ifs >> word )
                    {
                        cout << word;
                        Fout << word;
                    }
                    Fout.close ();
                    ifs.close();
                }
            system ("del /q /s OpenSourse.cfg");
            system ("move /y user.cfg \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\" ");
                Optimized = 1;
        Center ("\nЗавершение модуля оптимизации игры");
        Animation ();
    }
        if (PressButton == 32)
        {
            system ("attrib -r -s -h C:\\PrimeOptimizer\\user.cfg");
            system ("copy /y C:\\PrimeOptimizer\\user.cfg \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\" ");
            system ("attrib +r +s +h C:\\PrimeOptimizer\\user.cfg");
                Return = 1;
        }
        CleaningButton ();
    }
        if (PressButton == 50)
        {
            BoostLauncherSettings ();
            Center ("_______________________________________________\n");
            Center ("|                                             |\n");
            Center ("|Enter. Запуск оптимизации                    |\n");
            Center ("|                                             |\n");
            Center ("|---------------------------------------------|\n");
            Center ("|                                             |\n");
            Center ("|Esc. Вернуться в главное меню                |\n");
            Center ("|_____________________________________________|\n");
                for (;;)
                {
                    PressButton = getch ();
                        if (PressButton == 27 || PressButton == 13)
                            break;
                }
            if (PressButton == 13)
            {
            Center ("\nЗапуск модуля оптимизации лаунчера");
            Animation ();
                system ("move /y app\\mainwindow\\auth\\img\\back_auth.png app\\mainwindow\\images\\");
                system ("move /y app\\mainwindow\\auth\\img\\icon_social.png app\\mainwindow\\images\\");
                system ("rmdir /q /s app\\mainwindow\\auth");
                system ("del /q /s app\\mainwindow\\index.css");
                system ("del /q /s app\\mainwindow\\index.html");
                system ("del /q /s app\\mainwindow\\new.css");
                    {
                        ofstream Fout ("app\\mainwindow\\OpenSourse.html");
                        Fout << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\"><html><head><title>Prime World Launcher host</title><meta http-equiv=\"content-type\" content=\"text/html; charset=windows-1251\" /><link href=\"index.css\" rel=\"stylesheet\" /></head><body onload=\"onSkinLoaded();\"><div style=\"position: fixed; width: 781px; height: 682px; top: 0px; left: 0px;\"><div id=\"closeButton\" class=\"titlebarButton\" style=\"background-image: url('images/main-button-close-normal.png'); top: 96px; right:2px\" onclick=\"closeBtnClick(this);\"></div><div id=\"minimizeButton\" class=\"titlebarButton\" style=\"background-image: url('images/main-button-minimize-normal.png'); top: 96px; right:30px\" onclick=\"minimizeClick(this);\"></div><div id=\"optionsButton\" class=\"titlebarButton disabled\" style=\"background-image: url('images/main-button-options-normal.png'); top: 96px; right:58px\" onclick=\"showSettingsWindow(this);\"></div><img id=\"ruButton\" style=\"display:none;\" src=\"images/main-button-ru-normal.png\" title=\"Russian\" onclick=\"changeLanguage('ru');\" onmouseover=\"changeButtonState(this,'hover');\" onmouseout=\"changeButtonState(this,'normal');\"/><img id=\"enButton\" style=\"display:none;\" src=\"images/main-button-en-normal.png\" title=\"English\" onclick=\"changeLanguage('en');\" onmouseover=\"changeButtonState(this,'hover');\" onmouseout=\"changeButtonState(this,'normal');\"/><div id=\"moveWindowArea\"></div><div id=\"applicationName\"></div><div id=\"optionsPopup\" style=\"display:none;position:absolute;width:550px;left:115px;top:140px;z-index:11;\" class=\"rubberWnd\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"closeOptions(false);\"></div><div id=\"optionsPopupCaption\" class=\"rubberWnd titleCenter\">Options</div></div><div id =\"wnd\" class=\"rubberWnd body\" style=\"padding: 0; margin: 0\"><div class=\"optionsSectionTitle\"><img src=\"images/commonSettings.png\" style=\"display: inline; position: relative; left: 5px;\"><div id=\"optionsCommonCaption\" class=\"optionsCaption\">Common options</div></div><table style=\"padding: 10px 10px 10px 30px; width: 100%; text-align: left;\"><tr><td style=\"\"><input type=\"checkbox\" id=\"alwaysUpdateCheckOption\" style=\"position: relative; left:-4px\" value=\"fullScreen\" onclick=\"settingsChanged();\"/><label id=\"alwaysUpdateLabel\" class=\"informationKeyOptions\" for=\"alwaysUpdateCheckOption\"></label></td></tr><tr id=\"minimizeToTrayOptionSection\"><td style=\"display: none;\"><input type=\"checkbox\" id=\"minimizeToTrayOption\" style=\"position: relative; left:-4px\" value=\"minimizeToTray\" onclick=\"settingsChanged();\"/><label id=\"minimizeToTrayLabel\" class=\"informationKeyOptions\" for=\"minimizeToTrayOption\"></label></td></tr><tr id=\"playSoundOptionSection\"><td style=\"\"><input type=\"checkbox\" id=\"playSoundOption\" style=\"position: relative; left:-4px\" value=\"playSound\" onclick=\"settingsChanged();\" checked/><label id=\"playSoundOptionLabel\" class=\"informationKeyOptions\" for=\"playSoundOption\"></label></td></tr></table><div id=\"optionsGraphicsSection\"><div class=\"optionsSectionTitle\"><img src=\"images/display.png\" style=\"display: inline; position: relative; left: 5px;\"><div id=\"optionsGraphicsCaption\" class=\"optionsCaption\">Graphics options</div></div><table style=\"padding: 10px 10px 10px 30px; width: 100%; text-align: left;\"><tr><td style=\"width: 50%\" id=\"screenResolutionLabel\" class=\"informationKeyOptions\">Screen resolution</td><td style=\"width: 50%\" id=\"graphicsQualityLabel\" class=\"informationKeyOptions\">Quality</td></tr><tr><td style=\"width:50%;\"><select class=\"optionsSelector\" id=\"screenResolutionSelect\" onchange=\"videoSettingsChanged();\" style=\"width:90%\"></select></td><td style=\"width:50%;\"><select class=\"optionsSelector\" id=\"graphicsQualitySelect\" onchange=\"videoSettingsChanged();\" style=\"width:90%\"></select></td></tr><tr style=\"height:5px;\"><td></td></tr><tr><td style=\"width: 50%;\"><input type=\"checkbox\" id=\"fullScreenCheck\" style=\"position: relative; left:-4px\" value=\"fullScreen\" onchange=\"videoSettingsFSChange(this);\"/><label id=\"fullScreenLabel\" class=\"informationKeyOptions\" for=\"fullScreenCheck\">Fullscreen</label></td></tr></table></div><div id=\"optionsRepairSections\" style=\"display:block;\"><div class=\"optionsSectionTitle\"><img src=\"images/display.png\" style=\"display: inline; position: relative; left: 5px;\"><div id=\"optionsRepairCaption\" class=\"optionsCaption\"></div></div><div style=\"text-align:left;padding: 0 10px 0 26px;height: 100px;\"><table><tr><td width=\"130px\" id=\"verifyButtonLabel\" class=\"roundBtn disabled\" style=\"height:60px;line-height:60px;text-align:center;\" onclick=\"startFullRepair();\"></td><td style=\"\"><div style=\"\" id=\"repairLabel1\"></div><div style=\"color: #ff7;\" id=\"repairLabel2\"></div></td></tr></table></div></div><div id=\"saveButtonLabel\" class=\"roundBtn disabled\" onclick=\"onSaveOptionsClick(this);\"></div><div id=\"closeButtonLabel\" class=\"roundBtn red\" onclick=\"closeOptions(false);\"></div></div></div><div id=\"errorMessage\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:197px;top:250px;width:390px;z-index:13;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('errorMessage');\"></div><div id=\"errorMessageCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><table width=\"100%\" style=\"position:relative;top:10px;\"><tr><td width=\"52px\"><img src=\"images/message-box-error.png\" width=\"50px\" height=\"50px\"/></td><td id=\"errorMessageText\" align=\"left\"></td></tr><tr id=\"errorSolution\" style=\"display:none;\"><td></td><td id=\"errorSolutionText\" align=\"left\"></td></tr></table><br/><div id=\"errorMessageSwitch\" align=\"left\" style=\"cursor:pointer;font-size:12px;\" onclick=\"onErrorMessageSwitch();\"><img id=\"errorMessageSwitchImage\" src=\"images/arrowRight.png\"><span id=\"errorMessageSwitchText\"></span></div><div id=\"errorMessageDetailsPanel\" style=\"display:block;\"><textarea id=\"errorMessageDetails\" style=\"width:366px; padding:0; resize:none;\" rows=\"7\"></textarea><div align=\"left\" style=\"margin-bottom:8px;border-radius:0\"></div></div><div id=\"errorMessageOk\" class=\"roundBtn red\" style=\"margin-top:4px;\" onclick=\"dlgMan.CloseDialog('errorMessage');\"></div></div></div><div id=\"ignoreSSLQuestion\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:197px;top:250px;width:390px;z-index:13;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"onNeedToIgnoreSSLAnswered(false);\"></div><div id=\"ignoreSSLQuestionCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><table width=\"100%\" style=\"position:relative;top:10px;\"><tr><td width=\"52px\"><img src=\"images/message-box-warning.png\" width=\"50px\" height=\"50px\"/></td><td id=\"ignoreSSLQuestionText\" align=\"left\"></td></tr></table><br/><div id=\"ignoreSSLQuestionSwitch\" align=\"left\" style=\"cursor:pointer;font-size:12px;\" onclick=\"onIgnoreSSLQuestionSwitch();\"><img id=\"ignoreSSLQuestionSwitchImage\" src=\"images/arrowRight.png\"><span id=\"errorMessageSwitchText\"></span></div><div id=\"ignoreSSLQuestionDetailsPanel\" style=\"display:block;\"><textarea id=\"ignoreSSLQuestionDetails\" style=\"width:366px; padding:0; resize:none;\" rows=\"7\"></textarea><div align=\"left\" style=\"margin-bottom:8px;border-radius:0\"></div></div><div id=\"ignoreSSLQuestionYes\" class=\"roundBtn\" style=\"margin-top:4px;\" onclick=\"onNeedToIgnoreSSLAnswered(true);\"></div><div id=\"ignoreSSLQuestionNo\" class=\"roundBtn red\" style=\"margin-top:4px;\" onclick=\"onNeedToIgnoreSSLAnswered(false);\"></div></div></div><div id=\"errorCantConnectOperator\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:147px;top:250px;width:490px;z-index:13;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"closeClick();\"></div><div id=\"errorMessageCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><table width=\"100%\" style=\"position:relative;top:10px;\"><tr><td width=\"52px\"><img src=\"images/message-box-error.png\" width=\"50px\" height=\"50px\"/></td><td id=\"cantConnectOperatorFrame\" align=\"left\"></td><td></td></tr></table><br/><div id=\"errorMessageOk\" class=\"roundBtn red\" style=\"margin-top:4px;\" onclick=\"closeClick();\"></div></div></div><div id=\"bodyBackground\"><div id=\"operatorFrameFake\" class=\"mainContentFrame\"><div id=\"newsMainDiv\"><div id=\"newsOnOperFrame\" class=\"warningMessages\" style=\"display:none;margin:170px 30px 200px 50px;\"><div><span id=\"newsOnOperFrameText\"></span><br/><img src=\"images/wait.gif\" style=\"padding: 20px;\"/><br/></div></div><div id=\"errorsOnOperFrame\" class=\"warningMessages\" style=\"display:none;margin:140px 30px 0 330px;\"><div style=\"margin:50px 0;\"><span id=\"errorOperFrameNoServer\"></span><br/><span id=\"errorOperFrameCheckInet\"></span><br/><span id=\"errorOperFrameNoNews\"></span><br/><img src=\"images/wait.gif\" style=\"padding: 20px;\"/><br/><span id=\"errorOperFrameUpdateTime\"></span></div></div></div></div><div id=\"launcherUpdatePanel\" style=\"display:block;\"><label id=\"launcherUpdateCaption\" class=\"authMainPanelLabels\"></label><br/><img id=\"launcherUpdateThrobber\" src=\"images/wait.gif\" style=\"padding: 20px;\"/><br/><label id=\"launcherUpdateLabel\" class=\"authMainPanelLabels\"></label></div><iframe id=\"operatorFrame\" class=\"mainContentFrame\" src=\"\"></iframe><div id=\"authFrame\" class=\"ap e_gold [auth pw]\" style=\"display:none\"><div class=\"ap_content\"><div class=\"ap_content-desc\"><p id=\"pwcLoginWndTitle\" class=\"ap_desc-text t_shadow\"></p></div><div class=\"ap_content-action reverse\"><div class=\"ap_action-both\"><div class=\"ap_action-social\"  style=\"display:none\"><p class=\"ap_social-text\"><span id=\"loginOrRegister1\" class=\"ap_text-big t_shadow\"></span><span id=\"loginOrRegister2\" class=\"ap_text-small\"></span></p><ul class=\"ap_social-auth\"></ul></div><p class=\"ap_action-desc\"><label id=\"loginHelp\"></label></p></div><div class=\"ap_action-connect\"><div id=\"authPWC\" class=\"ap_connect-tab\" style=\"display:none\"><div class=\"ap_tab-head\"><a class=\"ap_tab-link e_gold t_shadow\" onclick=\"authMain.activePwc.onAuthTabClicked();\"><label id=\"pwcLoginWndEnterTab\" class=\"ap_tab-text\" style=\"cursor: pointer\"></label></a></div><div class=\"ap_tab-form e_gold\" action=\"\"><ul class=\"ap_form-content\"><li class=\"ap_form-line ap_form-text\"><label id=\"pwcLoginWndEmail\"></label></li><li class=\"ap_form-line\"><input id=\"pwcLoginWndEmailEdit\" class=\"ap_form-input\" type=\"text\" name=\"\" tabindex=\"1\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcLoginEmailToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__green\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-text\"><label  id=\"pwcLoginWndPassword\"></label></li><li class=\"ap_form-line\"><input id=\"pwcLoginWndPasswordEdit\" class=\"ap_form-input\" type=\"password\" name=\"\" tabindex=\"2\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcLoginPasswordToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__green\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-submit\"><div class=\"ap_form-button\"><div id=\"pwcLoginWndEnter\" class=\"b_submit b_submit__green t_shadow\" tabindex=\"4\" onclick=\"authMain.activePwc.onPwcLoginWndEnter();\"></div></div><p class=\"ap_form-text\"><u><label id=\"pwcLoginWndForgotPass\" onclick=\"authMain.activePwc.onPwcLoginWndForgotPass();\" style=\"cursor: pointer\">></label></u></p></li></ul></div></div><div id=\"regPWC\" class=\"ap_connect-tab\" style=\"display:none\"><div class=\"ap_tab-head\"><div class=\"ap_tab-link e_gold t_shadow\"  onclick=\"authMain.activePwc.onRegistrationTabClicked();\"><label id=\"pwcRegisterWndTitle\" class=\"ap_tab-text\" style=\"cursor: pointer\"></label></div></div><div class=\"ap_tab-form e_gold\" action=\"\"><ul class=\"ap_form-content\"><li class=\"ap_form-line ap_form-text\"><label id=\"pwcRegisterWndEmail\"></label></li><li class=\"ap_form-line\"><input id=\"pwcRegisterWndEmailEdit\" class=\"ap_form-input\" type=\"text\" name=\"\" tabindex=\"1\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcRegisterEmailToolTip');\" onblur=\"authMain.activePwc.validateEmailInput(this, 'true');\"><div class=\"p_error p_error__green\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-text\"><label  id=\"pwcRegisterWndPassword\" </label></li><li class=\"ap_form-line\"><input id=\"pwcRegisterWndPasswordEdit\" class=\"ap_form-input\" type=\"password\" name=\"\" tabindex=\"2\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcRegisterPasswordToolTip');\" onblur=\"authMain.activePwc.validatePasswordInput(this, 'true');\"><div class=\"p_error p_error__green\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-submit\"><div class=\"ap_form-button\"><div id=\"pwcRegisterWndTitle\" class=\"b_submit b_submit__green t_shadow\" style=\"cursor: pointer\" tabindex=\"4\" onclick=\"authMain.activePwc.onPwcRegWndRegister();\"></div></div></li></ul></div></div><div id=\"authGMG\" class=\"ap_connect-tab\"  style=\"display:none\"><div class=\"ap_tab-head\"><a class=\"ap_tab-link e_gold t_shadow\" href=\"#authGMG\"><label id=\"gmgLoginWndEnter\" class=\"ap_tab-text\" style=\"cursor: pointer\"></label></a></div><div class=\"ap_tab-form e_gold\" action=\"\"><ul class=\"ap_form-content\"><li class=\"ap_form-line ap_form-text\"><label id=\"gmgLoginWndUsername\"></label></li><li class=\"ap_form-line\"><input id=\"gmgLoginWndUsernameEdit\" class=\"ap_form-input\" type=\"text\" name=\"\" tabindex=\"1\" onkeyup=\"authMain.activeGmg.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'gmgLoginUsernameToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__red\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-text\"><label  id=\"gmgLoginWndPassword\"></label></li><li class=\"ap_form-line\"><input id=\"gmgLoginWndPasswordEdit\" class=\"ap_form-input\" type=\"password\" name=\"\" tabindex=\"2\" onkeyup=\"authMain.activeGmg.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'gmgLoginPasswordToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__red\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-submit\"><div class=\"ap_form-button\"><div id=\"gmgLoginWndEnter\" class=\"b_submit b_submit__green t_shadow\" tabindex=\"4\" onclick=\"authMain.activeGmg.onGmgLoginWndEnter();\"></div></div><p class=\"ap_form-text\"><u><label id=\"gmgLoginWndForgotPass\" onclick=\"openExternalBrowser(app.getConfig('Authorization.GmgResetPasswordUrl'));;\" style=\"cursor: pointer\">></label></u></p></li></ul></div></div><div id=\"regGMG\" class=\"ap_connect-tab\"  style=\"display:none\"><div class=\"ap_tab-head\"><div class=\"ap_tab-link e_gold t_shadow\"  onclick=\"openExternalBrowser(app.getConfig('Authorization.GmgRegisterUrl'));\"><label id=\"gmgRegisterWndTitle\" class=\"ap_tab-text\" style=\"cursor: pointer\"></label></div></div></div></div></div><p class=\"ap_content-check\"><label id=\"multiRememberBox\" class=\"l_checkbox\"><input class=\"l_checkbox-input\" type=\"checkbox\" name=\"\" id=\"multiRemember\"><label for=\"multiRemember\" id=\"rememberLabel\" class=\"l_checkbox-text gray\" style=\"cursor: pointer;\" onclick=\"authMain.onRememberCheck();\"></label></label></p></div></div><div id=\"srvOfflineMessage\" class=\"srvOffline\" style=\"display:none\"><img src=\"images/srvOffline.png\" style=\"float:left;margin:-20px 10px 0 30px\"></img><span id=\"srvNoConnectionText\"></span></div><div id=\"MainInfoPanel\" style=\"display:none;\"><div id=\"mainTabContent\" class=\"downloadContentTable\" style=\"display:block;\"><div id=\"downloadBarBorder\" class=\"progressBarClass\"><div id=\"downloadBar\" class=\"progressBarClass progress green\"></div><div id=\"downloadBarText\" class=\"progressBarText\"></div></div><table id=\"mainInfoTbl\" width=\"430px\" style=\"table-layout:auto; position: relative;\"><tr><td id=\"speedCaption\" class=\"border informationKey\" width=\"25%\"></td><td id=\"speedText\" class=\"border informationValue\" width=\"25%\"></td><td id=\"timeRemainCaption\" class=\"border informationKey\" width=\"25%\"></td><td id=\"timeRemainText\" class=\"border informationValue\" width=\"25%\"></td></tr></table><div id=\"patchBarBorder\" class=\"progressBarClass\" style=\"margin: 5px 0 0 0;display:block;top:-3px;position: relative;\"><div id=\"patchBar\" class=\"progressBarClass progress\"></div><div id=\"patchBarText\" class=\"progressBarText\"></div></div><div id=\"repairFilesText\" style=\"margin-top:6px;text-align:center;font-weight:bold;display:none;\"></div></div><div id=\"downloadWaitPanel\" class=\"downloadContentTable\" style=\"display:none;\"><table align=\"center\"><tr height=\"70px\"><td width=\"60px\"><img src=\"images/wait.gif\"></td><td align=\"center\" id=\"downloadWaitText\"></td></tr></table></div><div id=\"mainButtonWrap\" class=\"mainButtonClass\" style=\"display:none;z-index:4;cursor:pointer;position:absolute;top:586px;left:653px;width:110px;\" onclick=\"mainButtonClick();\"><div id=\"mainButton\"></div></div><div id=\"UserInfoPanel\" style=\"display:none;position:absolute;left:17px;top:584px;width:194px;height:81px;\"><div id=\"UserNamePanel\"><div id=\"UserName\" class=\"authSmallPanelNick\" style=\"position:absolute;left:3px;top:3px;\" onmouseover=\"authMain.onUserNameMouse(this, true);\" onmouseout=\"authMain.onUserNameMouse(this, false);\"></div><div  style=\"display:block; position:absolute;right:2px;top:3px\"><img id=\"Logout\" src=\"images/logout-button-normal.png\" title=\"Logout\" onmouseover=\"changeButtonState(this,'hover');\" onmouseout=\"changeButtonState(this,'normal');\" onclick=\"authMain.logout();\" /></div><div  style=\"display:block; position:absolute;right:23px;top:3px\"><img id=\"lkEnter\" src=\"images/lk-button-normal.png\" title=\"Enter\" onmouseover=\"changeButtonState(this,'hover');\" onmouseout=\"changeButtonState(this,'normal');\" onclick=\"browseToAccountPage();\" /></div></div><div id=\"SocNetsPanel\"><img id=\"avatarImg\" style=\"left:-1px;width:50px;height:50px;\" src=\"images/main-login-avatar.png\"/><div id=\"SocNetsMarks\"></div></div></div><div id=\"authInfoBlanket\" style=\"display:none;\"></div><div class=\"tp\" id=\"authInfoTooltip\" style=\"display:none;sition:absolute;left:70px;bottom:62px;text-align:center;z-index:12;\" onmouseout=\"authMain.infoPanelTooltipOut(this);\" onclick=\"authMain.hideInfoPanelTooltip(this);\"></div><div class=\"tp\" id=\"activationReminder\" style=\"display:none;position:absolute;left:27px;bottom:98px;text-align:center;z-index:12;\" onclick=\"authMain.activePwc.hideActivationReminder();\" onmouseover=\"authMain.activePwc.onActivationReminderMouse(this, true);\" onmouseout=\"authMain.activePwc.onActivationReminderMouse(this, false);\"><div id=\"pwcActivationReminderTitle\" style=\"font-weight:bolder\"></div><div id=\"pwcActivationReminderText\"></div></div></div><div id=\"waitForRetryPanel\" class=\"waitForRetryPanel\" style=\"display:none;\"><div id=\"waitForRetryPanelText\"></div><div><span id=\"waitForRetryPanelText2\"></span><span id=\"waitForRetryPanelValue\"></span><div id=\"advancedErrorLink\" style=\"text-decoration:underline;cursor:pointer;\" onclick=\"updateManager.onAdvancedErrorClick();\"></div></div></div><div id=\"oldSiteLink\" style=\"display:block\"><a href=\"javascript: playPwLinkClick();\" id=\"playpwlink\"></a></div><div id=\"newSiteLink\" style=\"display:none\"><div id=\"playpwLinkNewWrap\"><a href=\"javascript: playPwLinkClick();\" id=\"playpwLinkNew\"></a></div><div id=\"EULADiv\"><span id=\"EULADivText\"></span>&nbsp;<span id=\"EULADivLink\" onclick=\"showEULA();\"></span></div></div></div><div id=\"connectNewInfoWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:157px;width:520px;top:200px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('connectNewInfoWnd');\"></div><div id=\"connectNewInfoCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><div id=\"connectInfoText\" class=\"connectInfoWndsText\"></div><div id=\"connectInfoText2\" class=\"connectInfoWndsText\"><div id=\"connectInfoTextReward\" class=\"boldInfoText\"></div></div><br/><table align=\"center\"><tr height=\"64px\"><td valign=\"middle\" ><div id=\"connectNewSNButton\" class=\"roundBtn\" style=\"vertical-align:middle;height:40px;padding:0px;margin:5px 20px;\"><table style=\"float:left;margin:0px 10px 0px 10px;height:40px;\"><tr><td id=\"connectNewSNConnect\"></td></tr></table><img id=\"connectNewSNButtonImg\" src=\"\"></img></div></td><td valign=\"middle\"><div id=\"connectNewSNAbort\" class=\"roundBtn red\" style=\"margin:5px 20px;\" onclick=\"dlgMan.CloseDialog('connectNewInfoWnd');\"></div></td></tr></table></div></div><div id=\"joinPWCWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:157px;width:400px;top:200px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('joinPWCWnd');\"></div><div id=\"jpwcCaption\" class=\"rubberWnd titleCenter\"></div></div><div id=\"wnd\" class=\"rubberWnd body\"><div class=\"ap_content\"><div class=\"ap_content-action reverse\" style=\"height:200px;\"><div class=\"ap_action-connect\" ><div id=\"authPWC\" class=\"ap_connect-tab\" style=\"height:0px\"><div class=\"ap_tab-form\" style=\"display:block; background:inherit; top:0px; box-shadow: none !important;\" action=\"\"><ul class=\"ap_form-content\" style=\"list-style-type: none; margin-left:-10px; margin-right: 50px;\"><li class=\"ap_form-line ap_form-text\"><label id=\"pwcLoginWndEmail\"></label></li><li class=\"ap_form-line\"><input id=\"jpwcLoginWndEmailEdit\" class=\"ap_form-input\" type=\"text\" name=\"\" tabindex=\"1\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcLoginEmailToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__green\" style=\"margin-left:110% !important;\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-text\"><label id=\"pwcLoginWndPassword\"></label></li><li class=\"ap_form-line\"><input id=\"jpwcLoginWndPasswordEdit\" class=\"ap_form-input\" type=\"password\" name=\"\" tabindex=\"2\" onkeyup=\"authMain.activePwc.onUserDataChanged(this);\" onfocus=\"showToolTip(this, 'pwcLoginPasswordToolTip');\" onblur=\"hideToolTip(this);\"><div class=\"p_error p_error__green\" style=\"margin-left:110%; !important\"><span class=\"p_error-text\"></span></div></li><li class=\"ap_form-line ap_form-submit\"><div class=\"ap_form-button\"><div id=\"pwcLoginWndEnter\" class=\"b_submit b_submit__green t_shadow\" tabindex=\"4\" onclick=\"authMain.activePwc.onPwcLoginWndEnter();\"></div></div><p class=\"ap_form-text\"><u><label id=\"pwcLoginWndForgotPass\" onclick=\"authMain.activePwc.onPwcLoginWndForgotPass();\" style=\"cursor: pointer\">></label></u></p></li></ul></div></div></div></div></div></div></div><div id=\"connectInfoChooseWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:157px;width:470px;top:200px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"authMain.cancelMerge();\"></div><div id=\"connectNewInfoCaption\" class=\"rubberWnd titleCenter\"></div></div><div class=\"rubberWnd body\"><div id=\"connectChooseText\" class=\"connectInfoWndsText\"></div><br/><table id=\"chooseSocNetTable\" style=\"table-layout:fixed;word-wrap: break-word;width:100%;\"></table><br/><div id=\"mergeInfoLinkHolder\" style=\"display:block\"><a href=\"#\" id=\"mergeInfoLink\" onclick=\"onMergeInfoClick();\" onfocus=\"document.body.focus();\"></a></div><table cellspacing=\"0\" border=\"0\" style=\"width:100%;\"><tr><td width=\"50%\" align=\"center\"><div id=\"connectChooseTblBtn0\" class=\"roundBtn\"><span id=\"connectChooseTblBtnLabel\"></span></div></td><td width=\"50%\" align=\"center\"><div id=\"connectChooseTblBtn1\" class=\"roundBtn\"><span id=\"connectChooseTblBtnLabel\"></span></div></td></tr></table></div></div><div id=\"confirmMergeWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:190px;top:280px;width:400px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"authMain.finalizeMerge(false);\"></div><div id=\"confirmMergeCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><br/><div id=\"confirmMergeText\" class=\"connectInfoWndsText\"></div><br/><div id=\"confirmMergeYes\" class=\"roundBtn\" onclick=\"authMain.finalizeMerge(true);\"></div><div id=\"confirmMergeNo\" class=\"roundBtn red\" onclick=\"authMain.finalizeMerge(false);\"></div></div></div><div id=\"msvLoginWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:220px;top:200px;width:340px;hez-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('msvLoginWnd');\"></div><div id=\"msvLoginWndTitle\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><img src=\"images/msvLogo.png\" style=\"width: 100%;position: relative; top: 0px;\"><div style=\"position: relative; top: -20px\"><div id=\"msvLoginWndEmail\" class=\"pwcFieldCaption\"></div><input id=\"msvLoginWndEmailEdit\" tabindex=\"1\" type=\"text\" style=\"width: 240px\" onkeyup=\"authMain.activeMsv.onUserDataChanged(this);\"/><div id=\"msvLoginWndPassword\" class=\"pwcFieldCaption\"></div><input id=\"msvLoginWndPasswordEdit\" tabindex=\"2\" type=\"password\" style=\"width: 240px\" onkeyup=\"authMain.activeMsv.onUserDataChanged(this);\"/><table align=\"center\"><tr><td><input id=\"msvRemember\" type=\"checkbox\" onclick=\"MassiveAuth.onMsvRememberClick();\"/></td><td><label id=\"rememberLabel\" for=\"msvRemember\"></label></td></tr></table><br/><div id=\"msvLoginWndEnter\" class=\"roundBtn\" onclick=\"authMain.activeMsv.onMsvLoginWndEnter();\"></div><div id=\"msvLoginWndRegister\" class=\"roundBtn red\" onclick=\"MassiveAuth.openRegisterWindow();\"></div><br/><div id=\"msvLoginWndForgotPass\" style=\"text-decoration:underline;cursor:pointer;margin:10px 0px 5px 5px;\" onclick=\"MassiveAuth.openResetPasswordWindow();\"></div></div></div></div><div id=\"pwcRegisterInviteWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:160px;top:210px;width:460px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('pwcRegisterInviteWnd');\"></div><div id=\"pwcRegisterInviteTitle\" class=\"rubberWnd titleCenter\"></div></div><div class=\"rubberWnd body\" style=\"font-size:16px\"><div id=\"pwcRegisterInviteLabel\" style=\"margin-top:20px;\"></div><div id=\"pwcRegisterInviteLabel2\"></div><div id=\"pwcRegisterInviteGetAccountBtn\" class=\"roundBtn\" style=\"vertical-align:middle;height:40px;padding:0px;margin-top: 5px;\" onclick=\"authMain.showRegisterInvite();\"><table style=\"float:left;margin:0px 10px 0px 10px;height:40px;\"><tr><td id=\"pwcRegisterInviteGetAccount\"></td></tr></table><img id=\"pwcIcon\" style=\"margin:0px 1px 0px 0px\" src=\"images/main-button-selectNetwork-pwc.png\"/></div><div id=\"pwcRegisterInviteWndCancel\" class=\"roundBtn red\" style=\"margin-top: 20px;\" onclick=\"dlgMan.CloseDialog('pwcRegisterInviteWnd');\"></div></div></div><div id=\"pwcRememberPassWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:190px;top:240px;width:400px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('pwcRememberPassWnd');\"></div><div id=\"pwcRememberPassWndTitle\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><div id=\"pwcRememberPassMainLabel\" style=\"margin:10px 0px 0px 0px;\"></div><input id=\"pwcRememberPassEmailEdit\" type=\"text\" style=\"width: 240px\" onkeyup=\"hideErrorTip(this);\"/><br/><div id=\"pwcRememberPassBtn\" class=\"roundBtn\" onclick=\"authMain.activePwc.onPwcChangePass();\"></div></div></div><div id=\"messageBoxWnd\" class=\"rubberWnd\" style=\"display:none;position:absolute;width:400px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('messageBoxWnd');\"></div><div id=\"messageBoxWndTitle\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><div id=\"messageBoxWndText\" style=\"margin:20px 0px 0px 0px;\"></div><br/><div id=\"errorMessageOk\" class=\"roundBtn\" onclick=\"dlgMan.CloseDialog('messageBoxWnd');\"></div></div></div><div id=\"pwcActivationReq\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:200px;top:240px;width:380px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('pwcActivationReq');\"></div><div id=\"pwcActivationReqCaption\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\"><div id=\"pwcActivationReqLabel1\" style=\"margin:10px 0px 0px 0px;\"></div><br/><div id=\"pwcActivationReqLabel2\" style=\"margin:10px 0px 0px 0px;\"></div><div><span id=\"pwcActivationReqLabel3\"></span>&nbsp;<span id=\"pwcActivationReqLabel4\" class=\"linkMark\" onclick=\"supportLinkClick();\"></span></div><br/><div id=\"pwcActivationReqBtn\" class=\"roundBtn\" onclick=\"authMain.activePwc.pwcSendConfirmEmail();\"></div></div></div><span id=\"errorTipWnd\" class =\"errorTp\" style=\"display:none;position:absolute;top:230px;left:300px;z-index:13;\" onclick=\"hideErrorTip();\"><div id=\"errorTipWndText\" class=\"tp\"></div></span><div id=\"waiterBlanket\" style=\"display:none;z-index:100;\"></div><div id=\"httpWaitDiv\" class=\"gameLaunch\" style=\"display:none;z-index:101; font-size: 20px\"><img id=\"waitThrobber\" style=\"display:inline;margin-top:-10px;width:40px; height:40px; vertical-align:middle;\" src=\"images/wait.gif\"><div id=\"httpWaitText\" style=\"display: inline-block;text-align:left;margin-left: 5px;\"></div></div><div id=\"gameStart_httpWaitDiv\" class=\"gameLaunch\" style=\"display:none;z-index:101; font-size: 20px\"><img id=\"gameStart_waitThrobber\" style=\"display:inline;margin-top:-10px;width:40px; height:40px; vertical-align:middle;\" src=\"images/wait.gif\"><div id=\"gameStart_httpWaitText\" style=\"display: inline-block;text-align:left;margin-left: 5px;\"></div></div><div id=\"gameLaunchedDiv\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:220px;top:270px;width:340px;z-index:12;\"><div class=\"rubberWnd body full\" style=\"padding: 30px 30px;\"><div id=\"gameAlreadyStartedLabel\"></div><br/><div id=\"gameAlreadyStartedLabel2\"></div></div></div><div id=\"needUpdate\" class=\"rubberWnd\" style=\"display:none;position:absolute;left:220px;top:250px;width:340px;z-index:12;\"><div class=\"rubberWnd titleContainer\"><div class=\"rubberWnd titleLeft\"></div><div id=\"commonCloseButton\" class=\"rubberWnd titleRight\" onclick=\"dlgMan.CloseDialog('needUpdate');\"></div><div id=\"needUpdateTitle\" class=\"rubberWnd titleCenter\"></div></div><div id =\"wnd\" class=\"rubberWnd body\" style=\"padding: 0 30px;\"><div id=\"needUpdateTextFirst\" style=\"margin-top: 20px;\"></div><div id=\"needUpdateTextSecond\" class=\"\"></div><div id=\"needUpdateButton\" class=\"roundBtn light\" onclick=\"onNeedUpdateButton();\" style=\"margin: 20px 0 15px 0;\"></div><br/><div><input type=\"checkbox\" id=\"alwaysUpdateCheck\" style=\"margin: -20px 0 20px 0;\"/><label id=\"alwaysUpdateLabel\" for=\"alwaysUpdateCheck\"></label></div></div></div><div id=\"logoutDiv\" style=\"\"></div></div><script src=\"http://settings.cdn.playpw.com/javascript/json2.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/launcherExt.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/debug.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/authmain.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/userinfo.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/snauth.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.fb.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.ok.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.vk.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.pwc.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.steam.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.aeria.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.mailru.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.massive.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.arc.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.zzima.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.gamigo.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/auth.dlt.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/serverStatusChecker.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/operatorFrame.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/progressReporter.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/index.js\" type=\"text/javascript\"></script><script src=\"http://settings.cdn.playpw.com/javascript/statistic.js\" type=\"text/javascript\"></script><style>.ap{cursor: default;-webkit-user-select: none;}.ap *{padding: 0;margin: 0;}.ap ul, .ap ol {list-style: none;}.ap input {box-sizing: border-box;}.ap a {color: inherit;}.ap button{border: none;background: none;}.ap *:focus {outline: none;}.ap{position: absolute;top: 126px;left: 17px;width: 748px;height: 450px;background: url(images/back_auth.png) no-repeat 0 0;z-index: 5;}.ap_content{display: -webkit-box;-webkit-box-orient: vertical;height: 100%;}.ap_content-desc{display: -webkit-box;-webkit-box-align: end;height: 129px;padding: 0 31px;}.ap_desc-text{max-width: 335px;padding: 0 0 22px;font: bold 17pt/29px Arial;}.ap_content-action{display: -webkit-box;-webkit-box-pack: justify;height: 253px;padding: 0 31px;}.ap_action-both{display: -webkit-box;-webkit-box-orient: vertical;-webkit-box-pack: end;max-width: 335px;}.ap_content-action.reverse .ap_action-both {-webkit-box-ordinal-group: 2;}.ap_action-social {-webkit-box-flex: 1;}.ap_social-text{display: -webkit-box;-webkit-box-orient: vertical;-webkit-box-pack: end;min-height: 49px;margin: 0 0 10px;}.ap_text-big {font: bold 12pt Arial;}.ap_text-small{display: block;padding: 0 0 3px;font: 9pt/15px Arial;}.ap_social-auth {display: inline-block;}.ap_social-block{float: left;width: 161px;height: 50px;margin-bottom: 10px;}.ap_social-block:nth-child(2n-1) {margin-right: 13px;}.ap_social-link{overflow: hidden;display: block;height: 100%;text-decoration: none;cursor: pointer;}.ap_social-icon{display: block;position: relative;width: 53px;height: 100%;background-repeat: no-repeat;font: bold 7pt/50px Arial;color: #ffffff;text-indent: 62px;text-transform: uppercase;white-space: nowrap;}.ap_social-icon::before{content: '';position: absolute;left: 0;top: 0;width: 100%;height: 100%;background: url(images/icon_social.png) no-repeat;}.ap_social-link.fb {background-image: -webkit-linear-gradient(bottom, #293f65 0%, #293f65 100%);}.ap_social-link.fb:hover {background-image: -webkit-linear-gradient(bottom, #233557 0%, #46669f 100%);}.ap_social-link.fb:active {background-image: -webkit-linear-gradient(bottom, #253759 0%, #202d47 100%);}.ap_social-link.vk {background-image: -webkit-linear-gradient(bottom, #486d94 0%, #486d94 100%);}.ap_social-link.vk:hover {background-image: -webkit-linear-gradient(bottom, #355078 0%, #5c8caf 100%);}.ap_social-link.vk:active {background-image: -webkit-linear-gradient(bottom, #37527a 0%, #2e4565 100%);}.ap_social-link.ok {background-image: -webkit-linear-gradient(bottom, #df5b02 0%, #df5b02 100%);}.ap_social-link.ok:hover {background-image: -webkit-linear-gradient(bottom, #df5c02 0%, #ef8e04 100%);}.ap_social-link.ok:active {background-image: -webkit-linear-gradient(bottom, #e05e02 0%, #c75204 100%);}.ap_social-link.zzma {background-image: -webkit-linear-gradient(bottom, #525250 0%, #525250 100%);}.ap_social-link.zzma:hover {background-image: -webkit-linear-gradient(bottom, #3e3e3c 0%, #6b6b68 100%);}.ap_social-link.zzma:active {background-image: -webkit-linear-gradient(bottom, #40403e 0%, #343432 100%);}.ap_social-link.ae {background-image: -webkit-linear-gradient(bottom, #202428 0%, #202428 100%);}.ap_social-link.ae:hover {background-image: -webkit-linear-gradient(bottom, #1e1f22 0%, #1e1f22 100%);}.ap_social-link.ae:active {background-image: -webkit-linear-gradient(bottom, #010101 0%, #212426 100%);}.ap_social-link.msv {background-image: -webkit-linear-gradient(bottom, #2284ac 0%, #2284ac 100%);}.ap_social-link.msv:hover {background-image: -webkit-linear-gradient(bottom, #389ec5 0%, #1d5f78 100%);}.ap_social-link.msv:active {background-image: -webkit-linear-gradient(bottom, #104e67 0%, #185b76 100%);}.ap_social-link.dlt {background-image: -webkit-linear-gradient(bottom, #fdfdfb 0%, #fdfdfb 100%);}.ap_social-link.dlt:hover {background-image: -webkit-linear-gradient(bottom, #dbdbd7 0%, #fdfdfb 100%);}.ap_social-link.dlt:active {background-image: -webkit-linear-gradient(bottom, #fcfcfa 0%, #dadad6 100%);}.ap_social-link.dlt .ap_social-icon {color: #010101;}.ap_social-link.fb .ap_social-icon::before {background-position: 0 0;}.ap_social-link.vk .ap_social-icon::before {background-position: 0 -49px;}.ap_social-link.ok .ap_social-icon::before {background-position: 0 -98px;}.ap_social-link.zzma .ap_social-icon::before {background-position: 0 -147px;}.ap_social-link.ae .ap_social-icon::before {background-position: 0 -196px;}.ap_social-link.msv .ap_social-icon::before {background-position: 0 -245px;}.ap_social-link.dlt .ap_social-icon::before {background-position: 0 -294px;}.ap_social-link.fb .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #3d537b 0%, #5f79ab 100%);}.ap_social-link.fb:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #475f8a 0%, #6d88bd 100%);}.ap_social-link.fb:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #5f79ab 0%, #3d537b 100%);}.ap_social-link.vk .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #184268 0%, #315f8a 100%);}.ap_social-link.vk:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #214769 0%, #3d709f 100%);}.ap_social-link.vk:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #315f8a 0%, #184268 100%);}.ap_social-link.ok .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #ea5f02 0%, #f19102 100%);}.ap_social-link.ok:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #f2791a 0%, #faa11c 100%);}.ap_social-link.ok:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #f19202 0%, #ea6002 100%);}.ap_social-link.zzma .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #262626 0%, #454545 100%);}.ap_social-link.zzma:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #2f2e2e 0%, #565555 100%);}.ap_social-link.zzma:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #262626 0%, #454545 100%);}.ap_social-link.ae .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #34373b 0%, #0e0f13 100%);}.ap_social-link.ae:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #5d5f64 0%, #2c2e31 100%);}.ap_social-link.ae:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #0e0f13 0%, #35373b 100%);}.ap_social-link.msv .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #18759b 0%, #0d5774 100%);}.ap_social-link.msv:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #66c7ee 0%, #18759b 100%);}.ap_social-link.msv:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #0d5774 0%, #18759b 100%);}.ap_social-link.dlt .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #ededed 0%, #ffffff 100%);}.ap_social-link.dlt:hover .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #c0c0c0 0%, #fefefe 100%);}.ap_social-link.dlt:active .ap_social-icon {background-image: -webkit-linear-gradient(bottom, #ffffff 0%, #c1c1c1 100%);}.ap_action-desc{padding: 0 0 3px;font: 8pt/14px Arial;color: #aec9c7;}.ap_action-link {color: #ffffff !important;}.ap_action-connect{display: -webkit-box;position: relative;width: 318px;min-height: 100%;}.ap_connect-tab{-webkit-box-flex: 1;height: 49px;}.ap_tab-head {height: 100%;}.ap_tab-link{display: block;position: relative;height: 100%;font: bold 10.5pt/47px Arial;color: #ffffff;text-align: center;text-decoration: none;cursor: pointer;}.ap_tab-text {padding: 0 0 4px;}.ap_tab-form{display: none;position: absolute;left: 0;right: 0;top: 49px;bottom: 0;padding: 0 23px;background: rgba(27, 95, 103, 0.55);border-top-width: 0 !important;border-top-left-radius: 0 !important;border-top-right-radius: 0 !important;box-shadow: -1px 0 0 0 #12251f, 1px 0 0 0 #12251f, 0 1px 0 0 #12251f, -3px 0 2px -2px rgba(0, 0, 0, 0.5), 3px 0 2px -2px rgba(0, 0, 0, 0.5), 0 3px 2px -2px rgba(0, 0, 0, 0.76) !important;}.ap_form-content {margin: 13px 0 0;}.ap_form-line{position: relative;margin: 0 0 12px;}.ap_form-submit{display: -webkit-box;-webkit-box-align: center;padding-top: 2px;}.ap_form-text{font: 9pt Arial;color: #ffffff;}.ap_form-line.ap_form-text {margin-bottom: 6px;}.ap_form-input{width: 100%;height: 32px;border: 1px solid #388686;padding: 0 11px;font: 10.5pt Arial;color: #000000;}.ap_form-input.valid{border-color: #3fff36;background: #bfe8bb;box-shadow: 0 0 6px rgba(63, 255, 54, 0.8);}.ap_form-input.error{border-color: #ef4133;background: #ffd1d1;box-shadow: 0 0 6px rgba(250, 57, 57, 0.8);}.ap_form-content .p_error {display: none;}.ap_form-input.error + .p_error {display: block;}.ap_content-action .p_error{right: 13px;margin: 0 100% 0 -115%;}.ap_content-action .p_error::before{right: -10px;border-left-color: transparent;border-bottom-color: transparent;border-right-color: inherit;border-top-color: inherit;}.ap_content-action.reverse .p_error,.ap_action-connect:only-of-type .p_error{left: 13px;margin: 0 -115% 0 100%;}.ap_content-action.reverse .p_error::before,.ap_action-connect:only-of-type .p_error::before{left: -10px;border-right-color: transparent;border-top-color: transparent;border-left-color: inherit;border-bottom-color: inherit;}.ap_form-button{-webkit-box-flex: 1;display: block;height: 37px;}.ap_form-button .b_submit{width: 100%;height: 100%;}.ap_form-button + .ap_form-text {margin: 0 0 0 16px;}.ap_connect-tab:target .ap_tab-link{padding: 0 25px;border-bottom-width: 0 !important;border-bottom-left-radius: 0 !important;border-bottom-right-radius: 0 !important;background: rgba(27, 95, 103, 0.55);box-shadow: -1px 0 0 0 #12251f, 1px 0 0 0 #12251f, 0 -1px 0 0 #12251f, -3px 0 2px -2px rgba(0, 0, 0, 0.5), 3px 0 2px -2px rgba(0, 0, 0, 0.5), 0 -3px 2px -2px rgba(0, 0, 0, 0.76) !important;cursor: default;}.ap_connect-tab:not(:target) .ap_tab-link{padding: 0 26px;border-left-width: 0 !important;border-right-width: 0 !important;border-top-color: transparent !important;color: #fceb9c;border-radius: 0 !important;box-shadow: inset 0 -3px 2px -2px rgba(0, 0, 0, 0.5) !important;z-index: 1;}.ap_connect-tab:not(:target):hover .ap_tab-link {color: #ffffff;}.ap_connect-tab:not(:target) .ap_tab-text {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAADAgMAAAAmWC1rAAAABGdBTUEAALGPC/xhBQAAAAlQTFRFAAAA/OucAAAASaGYcAAAAAF0Uk5TllmK7hcAAAARSURBVAjXY9BiYJjawKDFAAAGlgFqgP49sAAAAABJRU5ErkJggg==) repeat-x 0 100%;}.ap_connect-tab:not(:target):hover .ap_tab-text {background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAADAgMAAAAmWC1rAAAABGdBTUEAALGPC/xhBQAAAAlQTFRFAAAA////AAAAc8aDcQAAAAF0Uk5TllmK7hcAAAARSURBVAjXY9BiYJjawKDFAAAGlgFqgP49sAAAAABJRU5ErkJggg==);}.ap_connect-tab:target .ap_tab-form {display: block;}.ap_content-check{display: -webkit-box;-webkit-box-flex: 1;-webkit-box-align: center;-webkit-box-pack: center;margin: 18px 0 0;background: rgba(0, 0, 0, 0.3);}.e_gold{box-sizing: border-box;border: 1px solid #b7b45c !important;border-radius: 3px;box-shadow: 0 0 0 1px #12251f, 0 0 5px 1px rgba(0, 0, 0, 0.76);}.t_none{font: 0/0 none;color: transparent;}.t_nowrap {white-space: nowrap;}.t_ellipsis{overflow: hidden;white-space: nowrap;text-overflow: ellipsis;}.t_shadow {text-shadow: 1px 0 0 #000000, -1px 0 0 #000000, 0 1px 0 #000000, 0 -1px 0 #000000;}.l_checkbox{display: inline-block;cursor: pointer;}.l_checkbox-input {display: none;}.l_checkbox-text{display: -webkit-inline-box;-webkit-box-align: center;}.l_checkbox-text.gray{font: 9pt Arial;}.l_checkbox-text.gray::before{content: '';box-sizing: border-box;display: block;width: 15px;height: 15px;border: 1px solid #cbd1d6;margin: 0 4px 0 0;background: #ffffff no-repeat 50% 50%;}.l_checkbox-text.gray:hover::before {border-color: #6efffa;}.l_checkbox-input:checked + .l_checkbox-text.gray::before {background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAkAAAAHBAMAAAAotXpTAAAABGdBTUEAALGPC/xhBQAAACpQTFRFCQkJAAAAAAAABwcHEBAQEBAQEBAQERERAAAAAAAAAAAAERERAAAAAAAAa45VpQAAAA10Uk5Tcw8dZtDT4OcTBhnxAKl2Te4AAAAzSURBVAjXYzhz5qTDAYYzZ6bcnsBgJhm76wBDbertNQcY2u/uOnOA4US1DpA803XmzAEA0WgWm2NoAv8AAAAASUVORK5CYII=)}.b_submit{box-sizing: border-box;display: -webkit-box;-webkit-box-align: center;-webkit-box-pack: center;position: relative;border: 1px solid #818153;font: 10pt/12px Arial;color: #fbeb9b;cursor: pointer;border-radius: 5px;box-shadow: inset 0 0 0 1px rgba(0, 0, 0, 0.38);}.b_submit:before{content: '';position: absolute;left: 0;right: 0;top: 0;bottom: 0;opacity: 0.05;background: -webkit-linear-gradient(bottom, rgba(255, 255, 255, 0) 0%, rgba(255, 255, 255, 0) 50.12%, rgba(255, 255, 255, 0.18) 50.85%, #ffffff 54.25%, rgba(255, 255, 255, 0.95) 56.67%, rgba(255, 255, 255, 0) 100%);}.b_submit__red {background-image: -webkit-linear-gradient(bottom, #8f0f09 0%, #570f03 48.44%, #930d09 100%);}.b_submit__red:hover {background-image: -webkit-linear-gradient(bottom, #c22b26 0%, #c22b26 0.24%, #670f05 48.44%, #930d09 100%);}.b_submit__red:active {background-image: -webkit-linear-gradient(bottom, #5d0f03 0%, #570f03 48.44%, #670f05 100%);}.b_submit__green {background-image: -webkit-linear-gradient(bottom, #0c3b3d 0%, #002525 48.44%, #13514d 100%);}.b_submit__green:hover {background-image: -webkit-linear-gradient(bottom, #006359 0%, #00352f 48.44%, #13514d 100%);}.b_submit__green:active {background-image: -webkit-linear-gradient(bottom, #032d2d 0%, #002525 48.44%, #012727 100%);}.p_error{box-sizing: border-box;position: absolute;top: 50%;padding: 11px 13px;border: 1px solid;font: 9pt/18px Arial;color: #ffffff;border-radius: 3px;box-shadow: 0 5px 13px rgba(0, 0, 0, 0.9);}.p_error::before{content: '';box-sizing: border-box;position: absolute;top: 50%;width: 19px;height: 19px;border-width: 1px;border-style: solid;z-index: 1;}.p_error-text{position: relative;z-index: 1}.p_error__red,.p_error__red::before{border-color: #c72722;background: #990e0a;}.p_error__green,.p_error__green::before{border-color: #1c403f;background: #05262b;}body{font: 10px Arial;color: #fff;background-color: transparent;width:781px;height:682px;left: 0;top: 0;overflow:hidden!important;behavior:url(\"csshover3.htc\");}#bodyBackground{position: absolute;top: 0px;left: 0px;width: 781px;height: 682px;background: url(images/main-dialog-normal.png) no-repeat top left;background-color: transparent;overflow: hidden;z-index: 1;}#applicationName{display: block;position: absolute;top: 100px;left: 5px;height: 15px;overflow: hidden;color: #ffffff;font-family: Arial;font-weight: bold;font-size: 12px;z-index: 2;cursor: move;}.border {border: 0px;overflow: hidden;}.informationKey{color: #f1edc0;font-family: Verdana;font-size: 11px;font-weight: bold;text-align: right;padding-top: 3px;white-space:nowrap;text-overflow: ellipsis;}.informationValue{color: #ffffff;font-family: Verdana;font-size: 11px;padding-top: 3px;text-indent: 1;text-align: left;white-space:nowrap;text-overflow: ellipsis;}.informationKeyOptions{color: #f1edc0;font-family: Verdana;font-size: 13px;}.optionsSelector{color: #000;font-family: Verdana;font-size: 11px;}.downloadContentTable{cursor: default;position: absolute;color: #f1edc0;font-size: 12px;background-color: transparent;font-family: Verdana;vertical-align: middle;text-align: left;top: 586px;left: 216px;width: 434px;}#closeButton{cursor: pointer;position: absolute;top: 96px;right: 2px;width: 28px;height: 24px;overflow: hidden;z-index: 4;background-image: url('images/main-button-close-normal.png');display:block;}#closeButton:hover{background-image: url('images/main-button-close-hover.png');}.titlebarButton{cursor: pointer;position: absolute;width: 28px;height: 24px;overflow: hidden;z-index: 4;display:block;}.titlebarButton:hover{box-shadow: inset 0px -12px 15px -6px #2ca9b0;}.titlebarButton:active{box-shadow: inset 0px 0px 1px 2px #1b372d;}.titlebarButton.disabled{box-shadow: inset 0px 0px 1px 10px rgba(128, 128, 128, 0.5);cursor: default;}#ruButton{cursor: pointer;position: absolute;top: 96px;right: 88px;overflow: hidden;z-index: 4;}#enButton{cursor: pointer;position: absolute;top: 96px;right: 116px;overflow: hidden;z-index: 4;}#moveWindowArea{position: absolute;top: 0px;left: 0px;width: 692px;height: 117px;overflow: hidden;background-color: transparent;z-index: 3;cursor: move;}#statusBackground{width: 800px;height: 50px;position: absolute;top: 315px;left: 7px;}#playpwlink{display: block;position: absolute;top: 663px;text-align: center;left: 350px;overflow: hidden;color: #389ed1;font-family: Arial;font-weight: bold;font-size: 11px;z-index: 2;}#playpwlink:hover{color: #6dfcf5;}#mergeInfoLink{display: block;text-align: center;overflow: hidden;color: #d15d03;font-weight: bold;font-size: 14px;z-index: 2;}#mergeInfoLink:hover{color: #edfc6e;}a:focus {outline: none;border: 0;}#InfoWindow{font-size: 11px;color: #fff;}#MultiAuthWindow{position:absolute;left:15px;top:595px;color: #fff;width:199px;font-size: 13px;font-weight: bold;}#Remember{left: 30;font-size: 10px;}#tooltip{display: none;position: absolute;z-index: 100;top: 600px;right: 110px;background-color: #FFFFFF;color: #000000;border: 1px;border-color: #000000;font-size:14px;}.mainContentFrame{display:block;position: absolute;z-index: 5;top: 126px;left: 17px;width: 748px;height: 450px;background: url(images/back_auth.png) no-repeat;border: 1px;box-shadow:inset 1px 1px 1px 0px #959669, inset -1px -1px 1px 0px #959669;border-radius: 5px;}.authContentFrame{display:block;position: absolute;z-index: 5;top: 126px;left: 17px;width: 748px;height: 450px;background: url(images/back_auth.png) no-repeat;border: 1px;box-shadow:inset 1px 1px 1px 0px #959669, inset -1px -1px 1px 0px #959669;border-radius: 5px;}#waitPanel{display:block;position: relative;left: 250px;top: 0px;width: 498px;height: 450px;}#blanket{position: absolute;background-color:#000;opacity: 0.5;z-index: 10;top:0px;left:0px;width:800px;height:690px;overflow: hidden;}.optionsCaption{display: block;position: relative;color: #fff;font-weight: bold;font-size: 16px;color: #ffffff;text-shadow: 1px -1px 0px #5E5435, -1px 1px 0px #5E5435, 1px 1px 0px #5E5435, -1px -1px 0px #5E5435;text-align:left;top: -8px;left: 5px;display:inline;}.customButton{display: block;cursor: pointer;z-index: 11;position: absolute;background: url(images/custom-button-normal.png) no-repeat;background-size: 100% 100%;width: 115px;height: 26px;font-size: 16px;color: #ffffff;}.customButtonHover{display: block;cursor: pointer;z-index: 11;position: absolute;background: url(images/custom-button-hover.png) no-repeat;background-size: 100% 100%;width: 115px;height: 26px;font-size: 16px;color: #ffffff;}.customButtonDisabled{display: block;cursor: pointer;z-index: 11;position: absolute;background-image: url(images/custom-button-disabled.png);width: 115px;height: 26px;font-size: 16px;color: #9b9b9b;}.customButtonCaption{display: block;position: relative;width: 100%;top:3px;text-align: center;z-index: 12;font-size: 16px;background-color: transparent;}option{color: ButtonText;}#authMainPanel{position:relative;left:350px;top:0px;width:390px;height:450px;}#availSocialNets{background-color:#033440;position:relative;left:209px;bottom: -561px;z-index: 11;border: 1px solid #959669;padding: 4px;width: 150px;}#authMainPanelLabel{text-shadow: 0px 1px 0px #000;position: relative;color: #fff;top: 2px;width: 100%;text-align: center;font-family: Arial;font-size: 22px;font-weight: bold;text-shadow: 1px 1px 0 #013344;}#launcherUpdatePanel{display:block;position: absolute;height: 250px;top: 280px;left: 270px;width: 490px;text-align: center;z-index:6;}#waiterBlanket{position: absolute;background-color:#000;opacity: 0.5;z-index: 10;top:122px;left:2px;width:776px;height:558px;overflow: hidden;}#authInfoBlanket{z-index:10;position:absolute;left:17px;top:584px;width:194px;height:81px;background-color:#000;opacity:0.5;overflow: hidden;border-radius:6px;}#playpwLinkNewWrap{display: block;position: absolute;left: 18px;top: 663px;width: 192px;text-align: center;overflow: hidden;font-family: Arial;font-weight: bold;font-size: 11px;z-index: 2;}#playpwLinkNew{color: #389ed1;}#playpwLinkNew:hover{color: #6dfcf5;}.waitForRetryPanel{cursor: default;position: absolute;color: #f1edc0;font-size: 14px;background-color: Transparent;font-family: Verdana;vertical-align: middle;text-align: center;top: 606px;left: 216px;width: 349px;}.availSocialNetsListItem{font-size: 15;font-family: Arial;font-weight:bold;text-shadow: 1px 1px 0 #013344;cursor: pointer;color: #fff;}.authLogedImages{position: absolute;top: 0px;left: 0px;width: 20px;height: 20px;z-index:5;}.socialNetsToLoginImage{width: 323px;height: 93px;cursor: pointer;position: relative;top:0px;}.socialNetsToLoginImageHover{width: 333px;height: 97px;cursor: pointer;position: relative;top:-2px;}.socialNetsToLoginText{font: 12px Arial;font-weight: bold;text-shadow: 1px 1px 0 #013344;position:relative;cursor: pointer;color: #f1edc0;top:-22px;}.socialNetsToLoginTextHover{font: 14px Arial;font-weight: bold;text-shadow: 1px 1px 0 #013344;position:relative;text-shadow: #000 2px 2px 0px;color: #ff9;cursor: pointer;top:-25px;}.socialNetsMainDiv{width:350px;height:110px;}.authMainPanelLabels{font: 16px Arial;color: #fff;text-shadow: 1px 1px 0 #013344;text-align:center;position:relative;}.authSmallPanelNick{position:absolute;top:51px;white-space: nowrap;font: 16px Arial;text-align:left;cursor: default;}.connectInfoCaption{font: 13px Arial;font-weight: bold;text-shadow: 1px 1px 0 #013344;color: #fff;text-align:center;position:absolute;width:424px;line-height:25px;}.connectInfoWndsText{color: #fff;font: 14px Arial;text-shadow: 1px 1px 0 #013344;text-align:center;padding: 15px 10px 0px 10px;}.boldInfoText{font-size: 18px;font-weight: bold;text-shadow: 1px 1px 0 #013344;}.connectInfoBtn{font: 12px Arial;font-weight: bold;text-shadow: 1px 1px 0 #013344;width:115px;height:26px;line-height:26px;text-align:center;background:url('images/custom-button-normal.png') no-repeat;cursor: pointer;color: #fff;opacity: 1;}.connectInfoBtn:hover{background:url('images/custom-button-hover.png') no-repeat;}.connectInfoNetworkBtn{font: 12px Arial;font-weight: bold;text-shadow: 1px 1px 0 #013344;width:118px;height:40px;line-height:40px;text-align:center;background:url('images/main-button-selectNetwork-normal.png') no-repeat;cursor: pointer;color: #fff;opacity:1;}.connectInfoNetworkBtn:hover{background:url('images/main-button-selectNetwork-hover.png') no-repeat;}.connectInfoWindows{position:absolute;left:167px;top:176px;width:450px;height:328px;}.connectNewInfoWndCaptionDiv{background:url(\"images/message-box-title.png\");position:absolute;width:450px;height:25px;}.connectNewInfoWndBack{background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#189099), color-stop(100%,#0b5459));background: -moz-linear-gradient(top,  #189099 0%, #0b5459 100%);opacity:0.94;position:relative;top:25px;width:448px;height:328px;border:1px solid #9fa163;}.boldChooseText{font-size: 14px;font-weight: bold;text-shadow: 1px 1px 0 #013344;color:#ff9;}.PWConnectPanels{position:absolute;left:167px;top:200px;width:450px;height:197px;}#PWConnectAuthWelcome{font-family: Arial;font-size: 20px;font-weight: bold;text-shadow: 1px 1px 0 #013344;color:#ff0;}#PWConnectAuthText{font-size: 14px;}.pwcFieldCaption{margin: 15px 0 0 0;font-weight: bold;}.PWConnectAuthBack{background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#189099), color-stop(100%,#0b5459));background: -moz-linear-gradient(top,  #189099 0%, #0b5459 100%);opacity:0.94;position:relative;top:25px;width:448px;height:328px;border:1px solid #9fa163;}.rubberWnd {cursor: default;display: block;margin: 0;padding: 0;font-family: Arial;font-size: 14px;color: #121212;}.rubberWnd.titleContainer{height: 23px;}.rubberWnd.titleLeft{float: left;width: 60px;background-color: transparent;background: url(\"images/wnd-title-left.png\") no-repeat top left;border-top-left-radius: 8px;height: 100%;}.rubberWnd.titleRightNoClose{float: right;width: 60px;background-color: transparent;background: url(\"images/wnd-title-right.png\") no-repeat top left;border-top-right-radius: 8px;height: 100%;}.rubberWnd.titleCenter{text-align: center;text-indent: -30px;left: 100px;right: 100px;background-color: transparent;background: url(\"images/wnd-title-tile.png\") repeat-x top left;margin-left: 60px;margin-right: 31px;font-weight: bold;font-size: 16px;padding-top: 3px;color: #FFE5B7;text-shadow: 1px -1px 0px #5E5435, -1px 1px 0px #5E5435, 1px 1px 0px #5E5435, -1px -1px 0px #5E5435;height: 100%;}.rubberWnd.titleCenter.noClose{text-indent: 0px;margin-right: 60px;}.rubberWnd.titleRight{float: right;width: 31px;height: 23px;background: url(\"images/wnd-button-close.png\") no-repeat top left;background-position:  0px 0px;border-top-right-radius: 8px;cursor:pointer;}.rubberWnd.titleRight:hover{background-position:  0px -23px;}.rubberWnd.titleRight:active{background-position:  0px -46px;}.rubberWnd.body{text-align: center;padding: 0px 10px 0px 10px;background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,rgba(36,60,65,0.95)), color-stop(100%,rgba(38,97,99,0.95)));color: #E9E9E9;text-shadow:1px 0px 0px #333333, -1px 0px 0px #333333, 0px -1px 0px #333333, 0px 1px 0px #333333;border-bottom-left-radius: 8px;border-bottom-right-radius: 8px;border:1px solid #9fa163;box-shadow:inset 0px 0px 1px 1px #4d4a29;}.roundBtn {margin: 15px 5px 10px 5px;background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#277379), color-stop(35%,#134e4a), color-stop(44%,#0f3f3b), color-stop(100%,#005956));box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #103638, 0px 0px 15px -1px #2e2e2e;border-radius:8px;border:1px solid #9fa163;display:inline-block;color:#FFDEB3;text-shadow:1px 0px 0px #612E0C, -1px 0px 0px #612E0C, 0px -1px 0px #612E0C, 1px 1px 0px #612E0C;font-size:15px;font-weight:normal;padding:5px 15px;min-width: 100px;cursor:pointer;}.roundBtn:hover {box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #103638, 0px 0px 15px -1px #2e2e2e, inset 0px -12px 15px -6px #2ca9b0;}.roundBtn:active {background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#277379), color-stop(35%,#134e4a), color-stop(44%,#0f3f3b), color-stop(100%,#134e4a));box-shadow: 0px 0px 0px 0px #33311c, inset 0px 0px 2px 1px #103638;}.roundBtn.disabled{background:-webkit-gradient( linear, left top, left bottom, color-stop(0.05, #757575), color-stop(1, #383838) );box-shadow:inset 0px 0px 0px 1px #595959, 0px 0px 15px -1px #2e2e2e;border:1px solid #a0a0a0;color: #d6d6d6;text-shadow: 1px 0px 0px #333, -1px 0px 0px #333, 0px -1px 0px #333, 0px 1px 0px #333;}.roundBtn.red {background:-webkit-gradient(linear, left top, left bottom, color-stop(0%,#a16d4c), color-stop(35%,#782e24), color-stop(44%,#631005), color-stop(100%,#990e0a));box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #471814, inset 0px 0px 0px 0px #FF2323, 0px 0px 15px -1px #2e2e2e;}.roundBtn.red:hover {box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #471814, inset 0px -12px 20px -6px #FF2323, 0px 0px 15px -1px #2e2e2e;}.roundBtn.red:active{background:-webkit-gradient(linear, left top, left bottom, color-stop(0%,#a16d4c), color-stop(35%,#782e24), color-stop(44%,#631005), color-stop(100%,#782e24));box-shadow: 0px 0px 0px 0px #33311c, inset 0px 0px 1px 1px #471814;}.tp{border-radius:5px;background:#efefef;border:1px solid #828181;box-shadow:0px 5px 5px 0px rgba(0,0,0,0.5);padding-top: 7px;padding-bottom: 7px;padding-right: 5px;padding-left: 5px;text-align: left;min-height:13px;min-width:20px;text-align:left;font-size:12px;position:relative;display:inline-block;font-family:Arial;cursor: default;color: #000;}.tp:before{bottom:-5px;left:10px;width:8px;height:8px;background:#efefef;border:1px solid #828181;box-shadow:5px 5px 5px 0px rgba(0,0,0,0.5);content:'';position:absolute;}.tp:after{background:#efefef;bottom:0px;left:8px;width:18px;height:7px;content:'';position:absolute;}.errorTp .tp{background:#990e0a;border:1px solid #ffffff;color: #ffffff;}.errorTp .tp:before	{top:-5px;border:1px solid #ffffff;background:#990e0a;box-shadow: none;}.errorTp .tp:after{background:#990e0a;top: 0px;height:8px;}.tpBoldText{font-size: 14px;font-weight: bold;color:#773;}.mainButtonClass{display:table;position: relative;top: 20px;left: 150px;}.mainButtonClass div{overflow:hidden;position: relative;display: table-cell;vertical-align: middle;text-align: center;width: 98px;height: 67px;background:-webkit-gradient(linear, left top, left bottom, color-stop(0%,#a16d4c), color-stop(35%,#782e24), color-stop(44%,#631005), color-stop(100%,#990e0a));box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #471814, 0px 0px 15px -1px #2e2e2e, inset 0px 0px 0px 0px #ff2323;border-radius:3px;border:1px solid #9fa163;color:#ffffff;text-shadow:1px 0px 0px #333333, -1px 0px 0px #333333, 0px -1px 0px #333333, 0px 1px 0px #333333, 0px 0px 0px #EAD917;font-size:28px;font-weight:bold;padding: 5px;word-wrap: break-word;}.mainButtonClass div:hover{box-shadow: 0px 0px 0px 1px #33311c, inset 0px 0px 1px 1px #471814, 0px 0px 15px -1px #2e2e2e, inset 0px -30px 60px -15px #ff2323;text-shadow:1px 0px 0px #333333, -1px 0px 0px #333333, 0px -1px 0px #333333, 0px 1px 0px #333333, 0px 0px 40px #EAD917;}.mainButtonClass div:active{background:-webkit-gradient(linear, left top, left bottom, color-stop(0%,#a16d4c), color-stop(35%,#782e24), color-stop(44%,#631005), color-stop(100%,#782e24));box-shadow: 0px 0px 0px 0px #33311c, inset 0px 0px 1px 1px #471814, 0px 0px 15px -1px #2e2e2e;}.mainButtonClass div.disabled{box-shadow:inset 0px 0px 0px 1px #595959, 0px 0px 15px -1px #2e2e2e;border:1px solid #9fa163;color: #b4b4b4;text-shadow: 1px 0px 0px #333, -1px 0px 0px #333, 0px -1px 0px #333, 0px 1px 0px #333;background:-webkit-gradient(linear, left top, left bottom, color-stop(0%,#a16d4c), color-stop(35%,#782e24), color-stop(44%,#631005), color-stop(100%,#990e0a));opacity:0.3;}.optionsDivider{background: url('images/options-divider.png');background-repeat: repeat-x;}.gameLaunch{position: absolute;left: 220px;top: 300px;background: url('images/loading-frame.png') no-repeat;width: 342px;height: 59px;z-index: 11;color: #ffffff;font-size: 24px;text-align: center;padding: 0;margin: 0;line-height: 59px;vertical-align: middle;cursor: default;}.httpWaitPanel{position: absolute;background-color:#000;opacity: 0.5;top:123px;left:2px;width:777px;height:557px;overflow: hidden;}.rubberWnd.body.full{border-top-left-radius: 8px;border-top-right-radius: 8px;opacity: 1.0;font-weight: bold;}.progressBarClass{width: 430px;height: 25px;text-align: center;background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,rgba(36,60,65,0.95)), color-stop(100%,rgba(38,97,99,0.95)));color: #E9E9E9;text-shadow:1px 0px 0px #111, -1px 0px 0px #111, 0px -1px 0px #111, 0px 1px 0px #111, 0px 0px 3px #111;font-weight: bold;border-bottom-left-radius: 4px;border-bottom-right-radius: 4px;border-top-left-radius: 4px;border-top-right-radius: 4px;border:1px solid #9fa163;box-shadow:inset 0px 0px 1px 1px #4d4a29;}.progressBarText{position:relative;top:-20px;left: 0;height:20px;width:432px;vertical-align:middle;color:#fff;}.progressBarClass.progress{-webkit-background-size: 40px 40px;-webkit-box-shadow: rgba(0, 0, 0, 0.148438) 0px -1px 0px 0px inset;background-color: #027693;background-image: -webkit-linear-gradient(-45deg, rgba(255, 255, 255, 0.148438) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.148438) 50%, rgba(255, 255, 255, 0.148438) 75%, transparent 75%, transparent);background-repeat: repeat-x;background-size: 40px 40px;box-shadow: rgba(0, 0, 0, 0.148438) 0px -1px 0px 0px inset;box-sizing: border-box;border: 0;display: block;width: 215px;text-align: center;text-shadow: rgba(0, 0, 0, 0.246094) 0px -1px 0px;}.progressBarClass.progress.green{background-color: #039676;}.progressBarClass.progress.red{background-color: #995643;}.progressBarClass.progress.yellow{background-color: #667743;}.warningMessages{font: 17px Arial;text-align: center;text-shadow: rgba(0, 0, 0, 0.246094) 0px -1px 0px;}#EULADiv{cursor: default;position: absolute;top: 663px;text-align: center;left:210px;width:442px;color: #fff;font-family: Arial;font-weight: bold;font-size: 11px;z-index: 2;}#EULADivLink{text-decoration: underline;cursor: pointer;}#EULADivLink:hover{color: #6dfcf5;}.srvOffline{font: 16px Arial;color: #FFFFFF;width: 740px;height: 20px;position: absolute;top: 610px;left: 20px;z-index:100;}.optionsSectionTitle{height: 27px;width: 100%;background: -webkit-gradient(linear, left top, right top, color-stop(0%,rgba(0,0,0,0.21)), color-stop(27%,rgba(0,0,0,0.17)), color-stop(77%,rgba(0,0,0,0.05)), color-stop(100%,rgba(0,0,0,0.01)));text-align: left;}.linkMark{text-decoration: underline;cursor: pointer;color: #ff7;}#UserNamePanel{background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#1c5369), color-stop(100%,#238fc7));box-shadow:inset 0px 0px 1px 1px #4d4a29;border: 2px solid #959669;position: absolute;left: 0px;top: 0px;height: 29px;right: 0px;border-top-left-radius: 4px;border-top-right-radius: 4px;}#SocNetsPanel{background: -webkit-gradient(linear, left top, right top, color-stop(0%,#174251), color-stop(100%,#033140));box-shadow:inset 0px 0px 1px 1px #4d4a29;border: 2px solid #959669;position: absolute;left: 0px;top: 27px;bottom: 0px;right: 0px;border-bottom-left-radius: 4px;border-bottom-right-radius: 4px;}#avatarImg{position:absolute;left:-1px;top:-1px;border-bottom-left-radius: 4px;border:1px solid #959669;}.socialNetMark{position:absolute;top:5px;}.socialNetMarkSign{position:absolute;top:31px;}.inline{display: inline;}</style></body></html>\" ";
                        Fout.close ();
                    }
                    {
                        ifstream ifs("app\\mainwindow\\OpenSourse.html");
                        ifs.unsetf(ifstream::skipws);
                        ofstream Fout ("app\\mainwindow\\index.html", ios::app);
                        char word;
                        while ( ifs >> word )
                        {
                            cout << word;
                            Fout << word;
                        }
                        Fout.close ();
                        ifs.close();
                system ("del /q /s app\\mainwindow\\OpenSourse.html");
                    }
                        Launcher = 1;
                Center ("\nЗавершение модуля оптимизации лаунчера");
                Animation ();
            }
            CleaningButton ();
        }
        if (PressButton == 51)
        {
            BoostCashCleaning ();
            Center ("______________________________________________________\n");
            Center ("|                                                    |\n");
            Center ("| 1. Да, я хочу полностью очистить пк от этого мусора|\n");
            Center ("|                                                    |\n");
            Center ("|----------------------------------------------------|\n");
            Center ("| 2. Хочу удалить только игровые логи                |\n");
            Center ("|                                                    |\n");
            Center ("|----------------------------------------------------|\n");
            Center ("| 3. Хочу очистить только игровой кэш                |\n");
            Center ("|                                                    |\n");
            Center ("|----------------------------------------------------|\n");
            Center ("| Esc. Вернуться в меню программы                    |\n");
            Center ("|____________________________________________________|\n");
                for (;;)
                {
                    PressButton = getch ();
                        if (PressButton == 27)
                            break;
                        if (PressButton >= 49 && PressButton <= 51)
                        {
                            Center ("\nЗапуск модуля очистки мусора");
                            Animation ();
                            Cleaning = 1;
                            break;
                        }
                }
                if (PressButton == 49)
                {
                    system ("del /q /s logs");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\statdaemonlogs\" ");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Session\\Logs\" ");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Castle\\logs\" ");
                    system ("del /q /s C:\\%UserName%\\AppData\\Local\\Temp");
                    system ("del /q /s C:\\Windows\\Temp");
                }
                if (PressButton == 50)
                {
                    system ("del /q /s logs");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\statdaemonlogs\" ");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Session\\Logs\" ");
                    system ("del /q /s \"C:\\Users\\%UserName%\\Documents\\My Games\\Prime World\\Castle\\logs\" ");
                }
                if (PressButton == 51)
                {
                    system ("del /q /s C:\\%UserName%\\AppData\\Local\\Temp");
                    system ("del /q /s C:\\Windows\\Temp");
                }
                Center ("\nЗавершение модуля чистки мусора");
                Animation ();
            CleaningButton ();
        }
        if (PressButton == 52)
        {
            system ("attrib -r -s -h C:\\PrimeOptimizer\\21PointGame.url");
            system ("start C:\\PrimeOptimizer\\21PointGame.url");
            system ("attrib +r +s +h C:\\PrimeOptimizer\\21PointGame.url");
            Download = 1;
            CleaningButton ();
        }
}
}
