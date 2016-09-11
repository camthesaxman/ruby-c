int __fastcall c3_80BF560(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int *v4; // r1@7
  int (__fastcall *v5)(unsigned __int8); // r0@7
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_() << 24;
  v3 = v2 >> 24;
  if ( v2 >> 24 )
  {
    if ( v3 > 0 )
    {
      if ( v3 != 1 )
        return v7;
    }
    else
    {
      v2 = -1;
      if ( v3 != -1 )
        return v7;
    }
    sub_8072DEC(v2);
    audio_play(5u);
    MenuZeroFillWindowRect(0x17u, 8u, 0x1Du, 0xDu);
    MenuZeroFillWindowRect(2u, 0x10u, 0x1Bu, 0x13u);
    v4 = &dword_3004B20[10 * v1];
    v5 = sub_810AB84;
  }
  else
  {
    audio_play(5u);
    v4 = &dword_3004B20[10 * v1];
    v5 = (int (__fastcall *)(unsigned __int8))sub_810AD58;
  }
  *v4 = (int)v5;
  return v7;
}
