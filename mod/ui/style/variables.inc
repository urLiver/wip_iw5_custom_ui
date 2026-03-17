#ifndef _MAIN_MENU_VARIABLES
    #define _MAIN_MENU_VARIABLES    1

    #define FONT_DEFAULT            0
    #define FONT_NORMAL			    1
    #define FONT_BIG			    2
    #define FONT_SMALL			    3
    #define FONT_BOLD			    4
    #define FONT_CONSOLE		    5
    #define FONT_OBJECTIVE		    6

    #define COLOR_WHITE             1 1 1 1
    #define COLOR_MAIN_GREEN        0.25 1 0.25 1
    #define COLOR_LIGHTBLACK        0 0 0 0.25
    #define COLOR_BLACK             0 0 0 1
    #define COLOR_LIGHTGRAY         0.1 0.1 0.1 1
        
    #define RGB_WHITE               1 1 1
    #define RGB_MAIN_GREEN          0.25 1 0.25
    #define RGB_BLACK               0 0 0
    #define RGB_LIGHTGRAY           0.1 0.1 0.1
        
    #define ALIGN_LEGACY_LEFT		0
    #define ALIGN_LEGACY_CENTER	    1
    #define ALIGN_LEGACY_RIGHT		2
    #define ALIGN_TOP_LEFT			4
    #define ALIGN_TOP_CENTER		5
    #define ALIGN_TOP_RIGHT		    6
    #define ALIGN_MIDDLE_LEFT		8
    #define ALIGN_MIDDLE_CENTER	    9
    #define ALIGN_MIDDLE_RIGHT		10
    #define ALIGN_BOTTOM_LEFT		12
    #define ALIGN_BOTTOM_CENTER	    13
    #define ALIGN_BOTTOM_RIGHT		14

    #define TABBAR_BUTTON_W         85
    #define TABBAR_BUTTON_H         20
    #define TABBAR_BUTTON_X         10
    #define TABBAR_BUTTON_Y         75
    #define TABBAR_BUTTON_SPACE     10

    #define SUBWINDOW_X             ( TABBAR_BUTTON_X + TABBAR_BUTTON_W + TABBAR_BUTTON_SPACE )
    #define SUBWINDOW_Y             ( TABBAR_BUTTON_Y )
    #define SUBWINDOW_W             525
    #define SUBWINDOW_H             360

    #define MAINWINDOW_X            ( TABBAR_BUTTON_X - 5 )
    #define MAINWINDOW_Y            ( TABBAR_BUTTON_Y - 5 ) 
    #define MAINWINDOW_W            ( TABBAR_BUTTON_W + TABBAR_BUTTON_SPACE + SUBWINDOW_W + 10 )
    #define MAINWINDOW_H            ( SUBWINDOW_H + 10 )

    #define INNER_SW_X              ( SUBWINDOW_X + 5 )
    #define INNER_SW_Y              ( SUBWINDOW_Y + 5 )
    #define INNER_SW_W              ( SUBWINDOW_W - 10 )
    #define INNER_SW_H              ( SUBWINDOW_H - 10 )

    #define ICON_BUTTON_SIZE        ( 8 )
    #define ICON_BUTTON_SPACE       ( 5 )

    #define CONTENT_X               ( INNER_SW_X )
    #define CONTENT_Y               ( INNER_SW_Y + ICON_BUTTON_SIZE + 10 )
    #define CONTENT_W               ( INNER_SW_W )
    #define CONTENT_H               ( INNER_SW_H - 25 )

    #define SB_HEADER_LOCKED_X      ( CONTENT_X )
    #define SB_HEADER_LOCKED_W      ( 10 )

    #define SERVERBROWSER_SPACE     ( 4 )
    #define SERVERBROWSER_X         ( CONTENT_X + SB_HEADER_LOCKED_W + SERVERBROWSER_SPACE )
   
    #define SB_HEADER_REST_W         ( CONTENT_W - SB_HEADER_LOCKED_W - SERVERBROWSER_SPACE * 5 )
    #define SB_HEADER_H  14

    #define SB_HEADER_SERVER_X      ( SERVERBROWSER_X )
    #define SB_HEADER_SERVER_W      ( SB_HEADER_REST_W * 0.40 )
    
    #define SB_HEADER_MAP_X         ( SB_HEADER_SERVER_X + SERVERBROWSER_SPACE + SB_HEADER_SERVER_W )
    #define SB_HEADER_MAP_W         ( SB_HEADER_REST_W * 0.15 )
    
    #define SB_HEADER_TYPE_X        ( SB_HEADER_MAP_X + SERVERBROWSER_SPACE + SB_HEADER_MAP_W )
    #define SB_HEADER_TYPE_W        ( SB_HEADER_REST_W * 0.20 )
    
    #define SB_HEADER_PLAYERS_X     ( SB_HEADER_TYPE_X + SERVERBROWSER_SPACE + SB_HEADER_TYPE_W )
    #define SB_HEADER_PLAYERS_W     ( SB_HEADER_REST_W * 0.15 )
    
    #define SB_HEADER_PING_X        ( SB_HEADER_PLAYERS_X + SERVERBROWSER_SPACE + SB_HEADER_PLAYERS_W )
    #define SB_HEADER_PING_W        ( SB_HEADER_REST_W * 0.10 )

    #define SB_CONTENT_H            ( CONTENT_H - SB_HEADER_H )

    #define SB_CONTENT_SCROLLER_H   ( SB_CONTENT_H / 19 )

#endif