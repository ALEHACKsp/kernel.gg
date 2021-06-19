#pragma warning (disable : 4047)

#include "events.h"
#include "messages.h"
#include "data.h"

PLOAD_IMAGE_NOTIFY_ROUTINE ImageLoadCallback(PUNICODE_STRING FullImageName, HANDLE ProcessId, PIMAGE_INFO ImageInfo)
{

	if (wcsstr(FullImageName->Buffer, L"\\Counter-Strike Global Offensive\\csgo\\bin\\client.dll"))
	{
		DebugMessage("CsGo Client.DLL found!\n");
		CSGOClientDLLAddress = ImageInfo->ImageBase;

		DebugMessage("ProcessID: %d \n", ProcessId);

	}
	return STATUS_SUCCESS;
}