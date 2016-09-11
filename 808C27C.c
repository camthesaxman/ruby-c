int sub_808C27C()
{
  signed int v0; // r3@6
  unsigned int v1; // r4@6
  signed int v2; // r1@10
  int v3; // r0@14
  _BOOL4 v4; // r0@18
  int v5; // r1@20
  __int16 v6; // r0@21
  __int16 v7; // r0@21
  __int16 v8; // r0@22
  __int16 v10; // [sp+0h] [bp-20h]@7
  int v11; // [sp+4h] [bp-1Ch]@8
  int v12; // [sp+1Ch] [bp-4h]@24

  if ( byte_3001BAC == 1 )
  {
    remove_some_task();
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = 8;
    SetUpWindowConfig((int)&gWindowConfig_81E7048);
    InitMenuWindow();
    ++byte_3001BAC;
    return v12;
  }
  if ( (signed int)(unsigned __int8)byte_3001BAC <= 1 )
  {
_0808C29E:
    SetVBlankCallback(0);
    sub_8091060(0);
    v0 = 100663296;
    v1 = 98304;
    do
    {
      v10 = 0;
      v40000D4 = &v10;
      v40000D8 = v0;
      v40000DC = -2130704384;
      v0 += 4096;
      v1 -= 4096;
    }
    while ( v1 > 0x1000 );
    v11 = 0;
    v10 = 0;
    v40000D4 = &v10;
    v40000D8 = 83886080;
    v40000DC = -2130705920;
    byte_3001BAC = 1;
    return v12;
  }
  if ( byte_3001BAC != 2 )
  {
    if ( byte_3001BAC == 3 )
    {
      v4000200 |= 1u;
      v4000004 |= 8u;
      SetVBlankCallback((int)sub_808C0B8);
      SetMainCallback2((int)sub_808C5F0);
      sub_808D690(*(_BYTE *)(v202FFB4 + 1554), *(_BYTE *)(v202FFB4 + 1558));
      m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 128);
      return v12;
    }
    goto _0808C29E;
  }
  v2 = Random() & 3;
  if ( v2 == 1 )
  {
    v3 = 33654784;
  }
  else
  {
    if ( v2 > 1 )
    {
      if ( v2 == 2 )
      {
        v3 = 33656832;
        goto _0808C3C8;
      }
      if ( v2 == 3 )
      {
        v3 = 33658880;
        goto _0808C3C8;
      }
    }
    v3 = 33652736;
  }
_0808C3C8:
  v202FFB4 = v3;
  sub_808C0CC(v3);
  CreateTask((int)sub_808C608, 0);
  *(_WORD *)(v202FFB4 + 1554) = v2024EBD;
  v4 = sub_806912C();
  if ( !v4 )
    *(_WORD *)(v202FFB4 + 1554) = 0;
  v5 = v202FFB4;
  *(_WORD *)(v202FFB4 + 1558) = v2024EBC;
  *(_WORD *)(v5 + 1550) = v202FFB8;
  *(_BYTE *)(v5 + 1580) = v202FFBA;
  *(_BYTE *)(v202FFB4 + 1613) = 0;
  *(_BYTE *)(v202FFB4 + 1614) = 0;
  if ( sub_806912C() )
  {
    v8 = pokedex_count(0);
    *(_WORD *)(v202FFB4 + 1562) = v8;
    v7 = pokedex_count(1);
  }
  else
  {
    v6 = sub_8090F68(0);
    *(_WORD *)(v202FFB4 + 1562) = v6;
    v7 = sub_8090F68(1);
  }
  *(_WORD *)(v202FFB4 + 1564) = v7;
  *(_BYTE *)(v202FFB4 + 1581) = 8;
  ++byte_3001BAC;
  return v12;
}
