int __fastcall sub_80B40E8(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r8@1
  int v3; // r1@2
  int *v4; // r4@3
  int v5; // r0@5
  signed int v6; // r1@5
  char v7; // r0@6
  int v8; // r0@18
  unsigned __int16 v9; // r4@19
  int v10; // r1@21
  int v12; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( v202F38F & 0x80 )
    return v12;
  v3 = word_30017A0 & 0xF0;
  if ( v3 == 64 )
  {
    v4 = &dword_3000708;
    if ( !byte_3000711 )
    {
      if ( byte_3000713 )
      {
        audio_play(5u);
        --byte_3000713;
        sub_80B3F88();
        v5 = 0;
        v6 = 0;
_080B417A:
        sub_80B39D0(v5, v6, 0);
        sub_80B3A70();
        sub_80B32A4();
        return v12;
      }
      return v12;
    }
    audio_play(5u);
    v7 = -1;
_080B41A0:
    *((_BYTE *)v4 + 9) = MoveMenuCursor(v7);
    sub_80B3A70();
    return v12;
  }
  if ( v3 == 128 )
  {
    v4 = &dword_3000708;
    if ( byte_3000711 != 7 )
    {
      if ( (unsigned __int8)byte_3000711 == (unsigned __int8)byte_3000710 )
        return v12;
      audio_play(5u);
      v7 = 1;
      goto _080B41A0;
    }
    if ( (unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711 != (unsigned __int8)byte_3000710 )
    {
      audio_play(5u);
      ++byte_3000713;
      sub_80B403C();
      v5 = 7;
      v6 = 7;
      goto _080B417A;
    }
  }
  else
  {
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      if ( (unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711 == (unsigned __int8)byte_3000710 )
      {
        sub_80B43F0(v1);
        return v12;
      }
      sub_80F996C(0);
      sub_80F996C(1);
      sub_80F979C(1, 1);
      v8 = sub_80B39D0((unsigned __int8)byte_3000711, (unsigned __int8)byte_3000711, 1);
      sub_8072DEC(v8);
      MenuZeroFillWindowRect(0, 0xCu, 0xDu, 0x13u);
      if ( byte_3000714 )
      {
        v10 = *((_WORD *)&gDecorations
              + 16 * *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C)
              + 10);
        v20386A0 = *((_WORD *)&gDecorations
                   + 16
                   * *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C)
                   + 10);
        if ( IsEnoughMoney(v2025BC4, v10) << 24 )
        {
          StringCopy(
            &gStringVar1,
            &asc_83EB6C5[32
                       * *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C)]);
          ConvertIntToDecimalStringN((char *)&gStringVar2, v20386A0, 0, 8);
          if ( byte_3000714 == 1 )
            StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840ED01);
          else
            StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840ED2C);
          DisplayItemMessageOnField(v2, &gStringVar4, sub_80B3D38, 50145);
          return v12;
        }
      }
      else
      {
        v9 = itemid_get_market_price(*(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                              + dword_300070C));
        v20386A0 = (signed int)v9 >> GetPriceReduction(1);
        if ( IsEnoughMoney(v2025BC4, v20386A0) << 24 )
        {
          itemid_copy_name(
            *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C),
            &gStringVar1);
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840ECB0);
          DisplayItemMessageOnField(v1, &gStringVar4, sub_80B3EFC, 50145);
          return v12;
        }
      }
      DisplayItemMessageOnField(v1, &gUnknown_0840EDD2, sub_80B3BD0, 50145);
      return v12;
    }
    if ( word_300179E & 2 )
    {
      audio_play(5u);
      sub_80B43F0(v2);
    }
  }
  return v12;
}
