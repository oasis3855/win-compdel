// ************************************************************
// Windows o[WÖAÖ
//
// ************************************************************

#include "StdAfx.h"
#include "CheckWinVer.h"


// ************************************************************
// WindowsNT nñÆ Windows 95 nñÌ»è
// WinNT nñÌÆ« TRUE
// ************************************************************
BOOL IsWinNT(void)
{
	OSVERSIONINFO ver;

	// OSo[W
	ver.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
	::GetVersionEx((LPOSVERSIONINFO)&ver);


	if(ver.dwPlatformId == VER_PLATFORM_WIN32_NT)
		return TRUE;

	return FALSE;
}