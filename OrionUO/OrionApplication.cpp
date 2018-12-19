// MIT License
// Copyright (C) August 2016 Hotride

#include <SDL_timer.h>

COrionApplication g_App;

void COrionApplication::OnMainLoop()
{
    //DEBUG_TRACE_FUNCTION;
    g_Ticks = SDL_GetTicks();

    g_ConnectionManager.Recv();
    g_PacketManager.ProcessPluginPackets();
    g_PacketManager.SendMegaClilocRequests();
    g_Orion.Process(true);
}
