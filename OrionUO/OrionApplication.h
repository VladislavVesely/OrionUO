// MIT License
// Copyright (C) August 2016 Hotride

#pragma once

class COrionApplication : public Wisp::CApplication
{
protected:
    virtual void OnMainLoop();

public:
    COrionApplication()
        : Wisp::CApplication()
    {
    }
    virtual ~COrionApplication() {}
};

extern COrionApplication g_App;
