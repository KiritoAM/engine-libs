//////////////////////////////////////////////////////////////////////
//! Copyright Alastair Melville
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//! Includes
//////////////////////////////////////////////////////////////////////

#include "gui/shared/window/window.h"

namespace gui
{
	WINDOW::WINDOW()
		: WINDOW_PLATFORM()
	{}

	bool WINDOW::find_window()
	{
		find_os_window("SobelY");
		return false;
	}
}