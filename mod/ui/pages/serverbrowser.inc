#include "ui/utils/properties.inc"
#include "ui/utils/expression_properties.inc"

#include "ui/style/elements.inc"
#include "ui/style/variables.inc"

#ifndef PAGES_SERVERBROWSER__
    #define PAGES_SERVERBROWSER__           1
    
    #define ServerBrowser \
		itemDef \
		{ \
			name "password" \
			Rect( SB_HEADER_LOCKED_X, CONTENT_Y, SB_HEADER_LOCKED_W, SB_HEADER_H ); \
            Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_0", 250 ) ); \
			iSetupAnims( "serverbrowser_header_0" ); \
            action \
			{ \
				SaveFilterAndSort( 0 ); \
                play "mouse_click"; \
			} \
		} \
        itemDef \
        { \
			Rect( SB_HEADER_LOCKED_X, CONTENT_Y + SB_HEADER_H - 1, SB_HEADER_LOCKED_W, 1 ); \
            NotUseable; \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "white" ); \
            ExpRectW( iGetAnim( "serverbrowser_header_0", 250 ) * SB_HEADER_LOCKED_W ); \
        } \
		itemDef \
		{ \
			name "passwordicon" \
			Rect( SB_HEADER_LOCKED_X + 1, CONTENT_Y + 3, ICON_BUTTON_SIZE, ICON_BUTTON_SIZE ); \
            decoration \
            style 3 \
            IsServerBrowserOpen; \
            PresetForecolor( COLOR_WHITE ); \
            ExpMaterial( "award_positive" ); \
		} \
		itemDef \
		{ \
			name "server" \
			Rect( SB_HEADER_SERVER_X, CONTENT_Y, SB_HEADER_SERVER_W, SB_HEADER_H ); \
			Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_1", 250 ) ); \
            iSetupAnims( "serverbrowser_header_1" ); \
			action \
			{ \
				SaveFilterAndSort( 1 ); \
                play "mouse_click"; \
			} \
		} \
        Header( "SERVER NAME", "serverbrowser_header_1", SB_HEADER_SERVER_X, SB_HEADER_SERVER_W ); \
		itemDef \
		{ \
			name "map" \
			Rect( SB_HEADER_MAP_X, CONTENT_Y, SB_HEADER_MAP_W, SB_HEADER_H ); \
			Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_2", 250 ) ); \
            iSetupAnims( "serverbrowser_header_2" ); \
			action \
			{ \
				SaveFilterAndSort( 2 ); \
                play "mouse_click"; \
			} \
		} \
        Header( "MAP", "serverbrowser_header_2", SB_HEADER_MAP_X, SB_HEADER_MAP_W ); \
		itemDef \
		{ \
			name "type" \
			Rect( SB_HEADER_TYPE_X, CONTENT_Y, SB_HEADER_TYPE_W, SB_HEADER_H ); \
			Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_3", 250 ) ); \
            iSetupAnims( "serverbrowser_header_3" ); \
			action \
			{ \
				SaveFilterAndSort( 4 ); \
                play "mouse_click"; \
			} \
		} \
        Header( "GAMETYPE", "serverbrowser_header_3", SB_HEADER_TYPE_X, SB_HEADER_TYPE_W ); \
		itemDef \
		{ \
			name "players" \
			Rect( SB_HEADER_PLAYERS_X, CONTENT_Y, SB_HEADER_PLAYERS_W, SB_HEADER_H ); \
			Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_4", 250 ) ); \
            iSetupAnims( "serverbrowser_header_4" ); \
			action \
			{ \
				SaveFilterAndSort( 3 ); \
                play "mouse_click"; \
			} \
		} \
        Header( "PLAYERS", "serverbrowser_header_4", SB_HEADER_PLAYERS_X, SB_HEADER_PLAYERS_W ); \
		itemDef \
		{ \
			name "ping" \
			Rect( SB_HEADER_PING_X, CONTENT_Y, SB_HEADER_PING_W, SB_HEADER_H ); \
			Useable( 1 ); \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "gradient_fadein_fadebottom" ); \
            ExpBackcolorA( iGetAnim( "serverbrowser_header_5", 250 ) ); \
            iSetupAnims( "serverbrowser_header_5" ); \
			action \
			{ \
				SaveFilterAndSort( 6 ); \
                play "mouse_click"; \
			} \
		} \
        Header( "PING", "serverbrowser_header_5", SB_HEADER_PING_X, SB_HEADER_PING_W ); \
        Scroller( 0, "server_entry_0" ); \
        Scroller( 1, "server_entry_1" ); \
        Scroller( 2, "server_entry_2" ); \
        Scroller( 3, "server_entry_3" ); \
        Scroller( 4, "server_entry_4" ); \
        Scroller( 5, "server_entry_5" ); \
        Scroller( 6, "server_entry_6" ); \
        Scroller( 7, "server_entry_7" ); \
        Scroller( 8, "server_entry_8" ); \
        Scroller( 9, "server_entry_9" ); \
        Scroller( 10, "server_entry_10" ); \
        Scroller( 11, "server_entry_11" ); \
        Scroller( 12, "server_entry_12" ); \
        Scroller( 13, "server_entry_13" ); \
        Scroller( 14, "server_entry_14" ); \
        Scroller( 15, "server_entry_15" ); \
        Scroller( 16, "server_entry_16" ); \
        Scroller( 17, "server_entry_17" ); \
		itemDef \
		{ \
			name "serverbrowserlist" \
			Rect( CONTENT_X, CONTENT_Y + SB_HEADER_H + SERVERBROWSER_SPACE, CONTENT_W, SB_CONTENT_H ); \
            PresetForecolor( COLOR_WHITE ); \
            IsServerBrowserOpen; \
			type 6 \
            Text( FONT_NORMAL, 0.25, ALIGN_MIDDLE_LEFT ); \
			feeder 2 \
			elementWidth 120 \
			elementHeight SB_CONTENT_SCROLLER_H \
			columns 7 \
                2   18  10  0 \
                20  198 100 0 \
                218 75  50  0 \
                396 76  10  0 \
                295 99  50  0 \
                0   0   0   0 \
                472 49  20  0 \
			doubleClick \
			{ \
				if ( getFeederData( "serverbrowserlist" , "locked" ) == 1 ) \
				{ \
					setLocalVarString "sb_password_title" ( "@MENU_PASSWORD" ); \
				} \
				else \
				{ \
					if ( getFeederData( "serverbrowserlist" , "locked" ) == 2 ) \
					{ \
						setLocalVarString "sb_password_title" ( "@MENU_PRIVATE_PASSWORD" ); \
					} \
				} \
				if ( getFeederData( "serverbrowserlist" , "selected" ) == 1 && getTimeSinceLastDoubleClick( ) < 500 ) \
				{ \
					if ( getFeederData( "serverbrowserlist" , "locked" ) == 1 ) \
					{ \
						setLocalVarString "sb_password_title" ( "@MENU_PASSWORD" ); \
						open "popup_server_browser_password"; \
					} \
					else \
					{ \
						if ( getFeederData( "serverbrowserlist" , "locked" ) == 2 ) \
						{ \
							setLocalVarString "sb_password_title" ( "@MENU_PRIVATE_PASSWORD" ); \
							open "popup_server_browser_password"; \
						} \
						else \
						{ \
							uiScript "JoinServer"; \
						} \
					} \
				} \
				setdvar "ui_sbHasServerSelected" 1; \
				uiScript "SelectServer"; \
				play "mouse_click"; \
			} \
		}
        
    #define Scroller( index_y_, anim_name_ ) \
        itemDef  \
        { \
            Rect( CONTENT_X, CONTENT_Y + SB_HEADER_H + SERVERBROWSER_SPACE + 3 + SB_CONTENT_SCROLLER_H * index_y_, CONTENT_W - 15, SB_CONTENT_SCROLLER_H ); \
            NotUseable; \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "white" ); \
            ExpBackcolorA( iGetAnim( anim_name_, 125 ) * 0.5 ); \
            mouseEnter \
            { \
                iAnimFadeIn( anim_name_ ); \
            } \
            mouseExit \
            { \
                iAnimFadeOut( anim_name_ ); \
            } \
        }

    #define Header( display_text_, anim_name_, pos_x_, width_ ) \
        itemDef \
        { \
			Rect( pos_x_, CONTENT_Y + SB_HEADER_H - 1, width_, 1 ); \
            NotUseable; \
            IsServerBrowserOpen; \
            PresetBackcolor( COLOR_MAIN_GREEN ); \
            Material( "white" ); \
            ExpRectW( width_ * iGetAnim( anim_name_, 250 ) ) \
        } \
        itemDef \
        { \
			Rect( pos_x_ + 5, CONTENT_Y, width_, SB_HEADER_H ); \
            NotUseable; \
            IsServerBrowserOpen; \
            PresetForecolor( COLOR_WHITE ); \
            Text( FONT_BOLD, 0.2, ALIGN_MIDDLE_LEFT ); \
            text display_text_ \
        }

    #define SaveFilterAndSort( sort_index ) \
        if ( localvarstring( "ui_tempMapFilterKey" ) != dvarstring( "ui_filterMapKey" ) ) \
        { \
            setdvar "ui_filterMapKey" "localVarString" ( "ui_tempMapFilterKey" ); \
            setdvar "ui_filterMapName" "localVarString" ( "ui_tempMapFilterName" ); \
            uiScript "RefreshFilter"; \
        } \
        if ( localvarstring( "ui_tempGameTypeFilterKey" ) != dvarstring( "ui_joinGameTypeKey" ) ) \
        { \
            setdvar "ui_joinGameTypeKey" "localVarString" ( "ui_tempGameTypeFilterKey" ); \
            setdvar "ui_joinGameTypeName" "localVarString" ( "ui_tempGameTypeFilterName" ); \
            uiScript "RefreshFilter"; \
        } \
        if ( localvarint( "ui_tempMaxPingName" ) != dvarstring( "ui_maxPingName" ) ) \
        { \
            setdvar "ui_maxPingName" "localVarString" ( "ui_tempMaxPingName" ); \
            uiScript "RefreshFilter"; \
        } \
        uiScript "ServerSort" sort_index;

#endif