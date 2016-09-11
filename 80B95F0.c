int __fastcall sub_80B95F0(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  int *v2; // r5@1
  signed int v3; // r1@1
  __int16 v4; // r0@19
  signed __int16 v5; // r0@20
  int v6; // r4@21
  int v7; // r4@25
  __int16 v8; // r4@26
  int v9; // r4@28
  __int16 v10; // r0@30
  unsigned __int8 v11; // r0@33
  int v12; // r0@8
  __int16 v13; // r0@34
  int v15; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 100 )
  {
    v4 = *((_WORD *)v2 + 16) + 1;
    *((_WORD *)v2 + 16) = v4;
    if ( v4 <= 20 )
      return v15;
    *((_WORD *)v2 + 16) = 0;
    v5 = 101;
    goto _080B97D4;
  }
  if ( v3 > 100 )
  {
    if ( v3 == 201 )
    {
      v7 = sub_800820C();
      if ( v7 << 24 != GetLinkPlayerCount_2() << 24 )
        return v15;
      v8 = *((_WORD *)v2 + 16) + 1;
      *((_WORD *)v2 + 16) = v8;
      if ( v8 <= 30 * (unsigned __int8)GetLinkPlayerCount_2() )
        return v15;
      sub_8007F4C();
      v5 = 1;
    }
    else if ( v3 > 201 )
    {
      if ( v3 != 301 )
      {
        if ( v3 == 400 )
        {
          v10 = *((_WORD *)v2 + 16) + 1;
          *((_WORD *)v2 + 16) = v10;
          if ( v10 > 20 )
          {
            *((_WORD *)v2 + 4) = 1;
            *((_WORD *)v2 + 16) = 0;
          }
        }
        return v15;
      }
      v9 = sub_800820C();
      if ( v9 << 24 != GetLinkPlayerCount_2() << 24 )
        return v15;
      v5 = 1;
    }
    else
    {
      if ( v3 != 101 )
        return v15;
      v6 = (unsigned __int8)GetLinkPlayerCount_2();
      if ( (unsigned __int8)IsLinkMaster() == 1 )
      {
        if ( v6 == (unsigned __int8)sub_800820C() )
        {
          audio_play(0x15u);
          *((_WORD *)v2 + 4) = 201;
          *((_WORD *)v2 + 16) = 0;
        }
        return v15;
      }
      audio_play(0x16u);
      v5 = 301;
    }
_080B97D4:
    *((_WORD *)v2 + 4) = v5;
    return v15;
  }
  if ( v3 == 1 )
  {
    if ( !gReceivedRemoteLinkPlayers )
      return v15;
    v11 = sub_80B9A58();
    ConvertIntToDecimalStringN(&gStringVar1, v11, 2, 2);
    v5 = 5;
    goto _080B97D4;
  }
  if ( v3 <= 1 )
  {
    if ( !*((_WORD *)v2 + 4) )
    {
      sub_80B9A78();
      MenuDisplayMessageBox();
      MenuPrint((int)"Чньнтл", 2, 0xFu);
      *((_WORD *)v2 + 12) = 1800;
      *((_WORD *)v2 + 4) = 400;
      ClearLinkCallback_2();
    }
    return v15;
  }
  if ( v3 == 2 )
  {
    *((_WORD *)v2 + 10) = (unsigned __int8)GetLinkPlayerCount_2();
    *((_WORD *)v2 + 4) = 0;
    *((_WORD *)v2 + 9) = (unsigned __int8)sub_80B9A58();
    *v2 = (int)sub_80B97DC;
    sub_80B9A50(33652736, v2 + 3);
    v12 = (unsigned __int8)CreateTask((int)sub_80B9890, 80);
    *((_WORD *)v2 + 14) = v12;
    LOWORD(dword_3004B20[10 * v12 + 2]) = v1;
    sub_80B9A50(33587200, (char *)&dword_3004B20[10 * v12 + 4] + 2);
    return v15;
  }
  if ( v3 == 5 )
  {
    v13 = *((_WORD *)v2 + 14) + 1;
    *((_WORD *)v2 + 14) = v13;
    if ( v13 > 60 )
    {
      *((_WORD *)v2 + 14) = 0;
      v5 = 2;
      goto _080B97D4;
    }
  }
  return v15;
}
