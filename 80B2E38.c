int __fastcall sub_80B2E38(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r4@2
  char v3; // r0@3
  void **v4; // r1@10
  _BYTE *v5; // r2@10
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_30017A0 & 0x40 )
  {
    v2 = &dword_3000708;
    if ( byte_3000711 )
    {
      audio_play(5u);
      v3 = -1;
_080B2E82:
      *((_BYTE *)v2 + 9) = MoveMenuCursor(v3);
      return v7;
    }
  }
  else if ( word_30017A0 & 0x80 )
  {
    v2 = &dword_3000708;
    if ( (unsigned __int8)byte_3000711 != (unsigned __int8)byte_3000712 )
    {
      audio_play(5u);
      v3 = 1;
      goto _080B2E82;
    }
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    if ( byte_3000714 )
    {
      v4 = &gUnknown_083CC6D0;
      v5 = &gUnknown_083CC6EB;
    }
    else
    {
      v4 = &gUnknown_083CC6D0;
      v5 = &gUnknown_083CC6E8;
    }
    call_via_r1(v1, v4[2 * v5[(unsigned __int8)byte_3000711] + 1]);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    HandleShopMenuQuit(v1);
  }
  return v7;
}
