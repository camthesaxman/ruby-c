signed int __fastcall sub_805AFCC(_BYTE *a1, int a2, unsigned __int8 a3, unsigned __int8 a4, __int16 a5, __int16 a6)
{
  int v6; // r7@1
  signed int v7; // r8@1
  signed int result; // r0@2
  int *v9; // r5@3
  int v10; // r6@3
  char v11; // r1@3
  int v12; // r7@9
  char *v13; // r4@11
  unsigned int v14; // r0@11
  char v15; // r0@12

  v6 = a2;
  v7 = (unsigned __int8)InitFieldObjectStateFromTemplate(a1, a3, a4);
  if ( v7 == 16 )
  {
    result = 16;
  }
  else
  {
    v9 = &dword_30048A0[9 * v7];
    v10 = GetFieldObjectGraphicsInfo(*((_BYTE *)v9 + 5));
    v11 = *(_BYTE *)(v10 + 12);
    if ( *(_BYTE *)(v10 + 12) & 0xF )
    {
      if ( (v11 & 0xF) == 10 )
        npc_load_two_palettes__and_record(*(_WORD *)(v10 + 2), v11 & 0xF);
    }
    else
    {
      npc_load_two_palettes__no_record(*(_WORD *)(v10 + 2), v11 & 0xF);
    }
    if ( *((_BYTE *)v9 + 6) == 76 )
      *((_BYTE *)v9 + 1) |= 0x20u;
    *(_WORD *)(v6 + 2) = -1;
    v12 = (unsigned __int8)CreateSprite(v6, 0, 0);
    if ( v12 == 64 )
    {
      LOBYTE(dword_30048A0[9 * v7]) &= 0xFEu;
      result = 16;
    }
    else
    {
      v13 = &gSprites[68 * v12];
      sub_8060388(
        (signed __int16)(a5 + *((_WORD *)v9 + 8)),
        (signed __int16)(a6 + *((_WORD *)v9 + 9)),
        v13 + 32,
        v13 + 34);
      v13[40] = -(*(_WORD *)(v10 + 8) << 16 >> 17);
      v13[41] = -(*(_WORD *)(v10 + 10) << 16 >> 17);
      *((_WORD *)v13 + 16) += 8;
      *((_WORD *)v13 + 17) += v13[41] + 16;
      v13[5] = v13[5] & 0xF | 16 * *(_BYTE *)(v10 + 12);
      v13[62] |= 2u;
      *((_WORD *)v13 + 23) = v7;
      *((_BYTE *)v9 + 4) = v12;
      v14 = (unsigned __int8)(*((_BYTE *)v9 + 1) & 0xEF) | 16 * ((unsigned int)*(_BYTE *)(v10 + 12) << 25 >> 31);
      *((_BYTE *)v9 + 1) = v14;
      if ( !(v14 & 0x10) )
      {
        v15 = FieldObjectDirectionToImageAnimId(*((_BYTE *)v9 + 24) & 0xF);
        StartSpriteAnim((int)&gSprites[68 * v12], v15);
      }
      SetObjectSubpriorityByZCoord((unsigned int)*((_BYTE *)v9 + 11) >> 4, &gSprites[68 * v12], 1);
      sub_80634D0(&dword_30048A0[9 * v7], &gSprites[68 * v12]);
      result = v7;
    }
  }
  return result;
}
