int __fastcall sub_80ABEA0(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r6@1
  _WORD *v3; // r1@1
  signed int v4; // r2@1
  int v5; // r0@18
  char v6; // r0@20
  int v7; // r0@22
  int v8; // r0@27
  int v10; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = (_WORD *)((v2038695 << 6) + 33785230);
  v4 = 3;
  do
  {
    if ( *v3 )
      v2 = (v2 + 1) & 0xFF;
    ++v3;
    --v4;
  }
  while ( v4 >= 0 );
  if ( word_300179E & 1 )
  {
    sub_814A7FC((unsigned __int16)word_300179E);
    audio_play(5u);
    dword_3004B20[10 * v1] = (int)sub_80AC0C8;
  }
  else if ( word_30017A0 != 32 )
  {
    if ( (signed int)(unsigned __int16)word_30017A0 > 32 )
    {
      if ( word_30017A0 == 64 )
      {
        nullsub_17(v2019204, v3);
        if ( v2019204 )
          v6 = v2019204 - 1;
        else
          v6 = v2 - 1;
        v2019204 = v6;
        v7 = sub_80AC0AC(v6);
        sub_80AED58(v7);
        sub_80AEBEC(*(_WORD *)(2 * v2019204 + (v2038695 << 6) + 0x203858E));
        if ( v2 > 1 )
          audio_play(5u);
      }
      else if ( word_30017A0 == 128 )
      {
        nullsub_17(v2019204, v3);
        if ( v2019204 == v2 - 1 )
          v2019204 = 0;
        else
          ++v2019204;
        v8 = sub_80AC0AC(v2019204);
        sub_80AED58(v8);
        sub_80AEBEC(*(_WORD *)(2 * v2019204 + (v2038695 << 6) + 0x203858E));
        if ( v2 > 1 )
          audio_play(5u);
      }
    }
    else if ( word_30017A0 == 2 )
    {
      sub_814A904();
      audio_play(5u);
      sub_80AFFE0(0);
      FillWindowRect_DefaultPalette((int)&unk_3004210, 0, gUnknown_083CA340[0], 0x1Fu, 9u, 0x27u);
      if ( sub_80AF59C(v2038695) << 24 )
        StringCopy((_BYTE *)0x20238CC, "»ääÙÕà");
      else
        StringCopy((_BYTE *)0x20238CC, "»ääÙÕà");
      v5 = sub_80AE020(33700044, v2019205 + 1);
      sub_80AF138(v5);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)0x20238CC);
      sub_8003460(33745160, (int)&gStringVar4, 776, 1, 0xFu);
      word_30042A0 = 0;
      word_3004280 = 0;
      dword_3004B20[10 * v1] = (int)sub_80ABC70;
    }
  }
  return v10;
}
