// MIT License
// Copyright (C) August 2016 Hotride

CWeatherEffect::CWeatherEffect()
{
    ID = RandomInt(2000);

    ScaleRatio = (float)(ID % 20) / 13.0f;
}
