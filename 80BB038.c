int __fastcall sub_80BB038(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r1@4
  int v3; // r0@6
  int v4; // r1@8
  int v5; // r1@13
  signed int v6; // r0@27
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_80BB1D4();
  if ( v20387CC )
  {
    if ( v20387C8 )
    {
      --v20387C8;
    }
    else
    {
      v2 = gUnknown_083D03F8[v20387BC];
      if ( v2 == -128 )
      {
        v4 = v20387D0 - 2;
        v20387D0 = v4;
        if ( v4 > -64 )
          sub_8075560(v4);
      }
      else if ( v2 == 127 )
      {
        v3 = v20387D0 + 2;
        v20387D0 = v3;
        if ( v3 <= 62 )
          sub_8075560(v3);
      }
    }
  }
  if ( word_300179E & 2 )
  {
    v4000000 = 28992;
    v4000040 = 4575;
    v4000044 = 287;
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    dword_3004B20[10 * v1] = (int)sub_80BA258;
    return v8;
  }
  if ( !(word_300179E & 1) )
  {
    if ( word_300179E & 0x200 )
    {
      if ( ++v20387BC > 4 )
        v20387BC = word_300179E & 1;
    }
    if ( word_300179E & 0x100 )
    {
      if ( --v20387BC < 0 )
        v20387BC = 4;
    }
    if ( word_30017A0 & 0x10 )
    {
      if ( ++v20387B4 <= 247 )
        return v8;
      v6 = 0;
    }
    else
    {
      if ( !(word_30017A0 & 0x20) )
        return v8;
      if ( --v20387B4 >= 0 )
        return v8;
      v6 = 247;
    }
    v20387B4 = v6;
    return v8;
  }
  v5 = gUnknown_083D03F8[v20387BC];
  if ( v5 == -128 )
  {
    audio_play_and_stuff(v20387B4, 63);
    v20387D0 = 63;
  }
  else
  {
    if ( v5 != 127 )
    {
      audio_play_and_stuff(v20387B4, v5);
      v20387CC = 0;
      return v8;
    }
    audio_play_and_stuff(v20387B4, -64);
    v20387D0 = -64;
  }
  v20387CC = 1;
  v20387C8 = 30;
  return v8;
}
