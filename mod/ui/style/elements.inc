#include "ui/utils/properties.inc"
#include "ui/utils/expression_properties.inc"
#include "ui/utils/animations.inc"

#include "ui/style/variables.inc"

#ifndef STYLE_ELEMENTS__
    #define STYLE_ELEMENTS__                1

    #define Topbar \
        itemDef \
        { \
            Rect( INNER_SW_X, INNER_SW_Y + CONTENT_Y - INNER_SW_Y - 5.5, INNER_SW_W, 1 ); \
            NotUseable; \
            Show; \
            PresetBackcolor( RGB_MAIN_GREEN 0.75 ); \
            Material( "white" ); \
        } \
		itemDef \
		{ \
			Rect( INNER_SW_X + INNER_SW_W - ICON_BUTTON_SIZE, INNER_SW_Y, ICON_BUTTON_SIZE, ICON_BUTTON_SIZE ); \
            Useable( 1 ); \
            Show; \
            PresetBackcolor( COLOR_WHITE ); \
            ExpMaterial( "award_triumph" ); \
            ExpBackcolorR( 1 - iGetAnim( "topbar_button_1", 250 ) * 0.75 ); \
            ExpBackcolorB( 1 - iGetAnim( "topbar_button_1", 250 ) * 0.75 ); \
            iSetupAnims( "topbar_button_1" ); \
            action \
            { \
                setlocalvarint "mainmenu_page" ( 1 ); \
                play "mouse_click"; \
            } \
		} \
		itemDef \
		{ \
			Rect( INNER_SW_X + INNER_SW_W - ICON_BUTTON_SIZE * 2 - ICON_BUTTON_SPACE, INNER_SW_Y, ICON_BUTTON_SIZE, ICON_BUTTON_SIZE ); \
            Useable( 1 ); \
            Show; \
            PresetBackcolor( COLOR_WHITE ); \
            ExpMaterial( "award_skull" ); \
            ExpBackcolorR( 1 - iGetAnim( "topbar_button_2", 250 ) * 0.75 ); \   
            ExpBackcolorB( 1 - iGetAnim( "topbar_button_2", 250 ) * 0.75 ); \
            iSetupAnims( "topbar_button_2" ); \
            action \
            { \
				if ( isServerListRefreshing( ) ) \
				{ \
					uiScript "StopRefresh"; \
				} \
				else \
				{ \
					uiScript "RefreshServers"; \
				} \
                play "mouse_click"; \
            } \
		} \
		itemDef \
		{ \
			Rect( INNER_SW_X + INNER_SW_W - ICON_BUTTON_SIZE * 3 - ICON_BUTTON_SPACE * 2, INNER_SW_Y, ICON_BUTTON_SIZE, ICON_BUTTON_SIZE ); \
            Useable( 1 ); \
            Show; \
            PresetBackcolor( COLOR_WHITE ); \
            ExpMaterial( "award_hero" ); \
            ExpBackcolorR( 1 - iGetAnim( "topbar_button_3", 250 ) * 0.75 ); \   
            ExpBackcolorB( 1 - iGetAnim( "topbar_button_3", 250 ) * 0.75 ); \
            iSetupAnims( "topbar_button_3" ); \
            action \
            { \
                setlocalvarint "mainmenu_page" ( 0 ); \
                play "mouse_click"; \
            } \
		} \
		itemDef \
		{ \
			name "dedicatedPlayerCount" \
            Rect( INNER_SW_X, INNER_SW_Y + ICON_BUTTON_SIZE + 2, 75, CONTENT_Y - INNER_SW_Y - 5.5 ); \
            NotUseable; \
            Useable( 8 ); \
			Ownerdraw( 383 ); \
            PresetForecolor( COLOR_WHITE ); \
            Text( FONT_SMALL, 0.25, ALIGN_MIDDLE_LEFT ); \
            IsServerBrowserOpen; \
		} \
		itemDef \
		{ \
			name "dedicatedServerCount" \
            Rect( INNER_SW_X + 79, INNER_SW_Y + ICON_BUTTON_SIZE + 2, 75, CONTENT_Y - INNER_SW_Y - 5.5 ); \
            NotUseable; \
            Useable( 8 ); \
			Ownerdraw( 382 ); \
            PresetForecolor( COLOR_WHITE ); \
            Text( FONT_SMALL, 0.25, ALIGN_MIDDLE_LEFT ); \
            IsServerBrowserOpen; \
		}

    #define Frame \
        itemDef \
		{ \
			Rect( 10, 20, 206, 37 ); \
            Show; \
            decoration \
            style 3 \
            PresetForecolor( COLOR_WHITE ); \
            ExpMaterial( "award_locked" ); \
		} \
        itemDef \
        { \
            Rect( MAINWINDOW_X, MAINWINDOW_Y, MAINWINDOW_W, MAINWINDOW_H ); \
            NotUseable; \
            Show; \
            PresetBackcolor( RGB_LIGHTGRAY 0.50 ); \
            Material( "white" ); \
        } \
        itemDef \
        { \
            Rect( SUBWINDOW_X, SUBWINDOW_Y, SUBWINDOW_W, SUBWINDOW_H ); \
            NotUseable; \
            Show; \
            PresetBackcolor( RGB_LIGHTGRAY 0.85 ); \
            Material( "white" ); \
        } \
        itemDef \
        { \
            Rect( TABBAR_BUTTON_X + TABBAR_BUTTON_W + TABBAR_BUTTON_SPACE - 0.5, SUBWINDOW_Y, 1, SUBWINDOW_H ); \
            NotUseable; \
            Show; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "white" ); \
        }

    #define SidebarButton( display_text_, row_idx_, anim_name_, on_action_ ) \
        itemDef \
        { \
            Rect( TABBAR_BUTTON_X, TABBAR_BUTTON_Y + ( TABBAR_BUTTON_H + TABBAR_BUTTON_SPACE ) * row_idx_, TABBAR_BUTTON_W + TABBAR_BUTTON_SPACE, TABBAR_BUTTON_H ); \
            Useable( 1 ); \
            Show; \
            iSetupAnims( anim_name_ ); \
            action \
            { \
                on_action_; \
                play "mouse_click"; \
            } \
        } \ 
        itemDef \
        { \
            Rect( TABBAR_BUTTON_X, TABBAR_BUTTON_Y, 1, TABBAR_BUTTON_H ); \
            NotUseable; \
            Show; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "white" ); \
            ExpRectH( iGetAnim( anim_name_, 250 ) * TABBAR_BUTTON_H ); \
            ExpRectY( TABBAR_BUTTON_Y + TABBAR_BUTTON_H / 2 + ( TABBAR_BUTTON_H + TABBAR_BUTTON_SPACE ) * row_idx_ - iGetAnim( anim_name_, 250 ) * ( TABBAR_BUTTON_H / 2 ) ); \
        } \
        itemDef \
        { \
            Rect( TABBAR_BUTTON_X + 5, TABBAR_BUTTON_Y + ( TABBAR_BUTTON_H + TABBAR_BUTTON_SPACE ) * row_idx_, TABBAR_BUTTON_W, TABBAR_BUTTON_H ); \
            NotUseable; \
            Show; \
            PresetForecolor( COLOR_WHITE ); \
            Text( FONT_NORMAL, 0.275, ALIGN_MIDDLE_LEFT ); \
            ExpText( display_text_ ); \
        }
        
    #define IsServerBrowserOpen \
        visible when ( localvarint( "mainmenu_page" ) == 0 )

#endif