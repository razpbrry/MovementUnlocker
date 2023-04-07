#ifndef _INCLUDE_MOVEMENT_UNLOCKER_H_
#define _INCLUDE_MOVEMENT_UNLOCKER_H_

#include <ISmmPlugin.h>

#if defined WIN32 && !defined snprintf
#define snprintf _snprintf
#endif

class MovementUnlocker : public ISmmPlugin
{
public:
	bool Load(PluginId id, ISmmAPI *ismm, char *error, size_t maxlen, bool late);
	bool Unload(char *error, size_t maxlen);
	bool Pause(char *error, size_t maxlen);
	bool Unpause(char *error, size_t maxlen);
	void AllPluginsLoaded();
public:
	const char *GetAuthor();
	const char *GetName();
	const char *GetDescription();
	const char *GetURL();
	const char *GetLicense();
	const char *GetVersion();
	const char *GetDate();
	const char *GetLogTag();
};

extern MovementUnlocker g_MovementUnlocker;

PLUGIN_GLOBALVARS();

#endif //_INCLUDE_MOVEMENT_UNLOCKER_H_
