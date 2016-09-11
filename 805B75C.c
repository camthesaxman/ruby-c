int __fastcall sub_805B75C(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  int v3; // r8@1
  __int16 v4; // r9@1
  __int16 v5; // r10@1
  unsigned int v6; // r7@1
  int *v7; // r6@5
  int v8; // r5@5
  int v9; // r7@9
  char *v10; // r4@10
  int v11; // r0@11
  char v12; // r0@16
  int v14; // [sp+0h] [bp-44h]@5
  char *v15; // [sp+Ch] [bp-38h]@5
  char v16; // [sp+18h] [bp-2Ch]@5
  unsigned int v17; // [sp+1Ch] [bp-28h]@5
  int v18; // [sp+20h] [bp-24h]@5
  int v19; // [sp+40h] [bp-4h]@18

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  while ( !*(_BYTE *)(4 * v6 + 0x2029818) || a1 != *(_BYTE *)(4 * v6 + 0x202981A) )
  {
    v6 = (v6 + 1) & 0xFF;
    if ( v6 > 3 )
    {
      v7 = &dword_30048A0[9 * a1];
      v18 = 0;
      v8 = GetFieldObjectGraphicsInfo(*((_BYTE *)v7 + 5));
      v17 = v17 & 0xFFFF0000 | *(_WORD *)(v8 + 6);
      MakeObjectTemplateFromFieldObjectGraphicsInfoWithCallbackIndex(
        *((_BYTE *)v7 + 5),
        *((_BYTE *)v7 + 6),
        (int)&v14,
        &v18);
      v15 = &v16;
      HIWORD(v14) = -1;
      if ( !(*(_BYTE *)(v8 + 12) & 0xF) )
        npc_load_two_palettes__no_record(*(_WORD *)(v8 + 2), *(_BYTE *)(v8 + 12) & 0xF);
      if ( (*(_BYTE *)(v8 + 12) & 0xFu) > 9 )
        npc_load_two_palettes__and_record(*(_WORD *)(v8 + 2), *(_BYTE *)(v8 + 12) & 0xF);
      HIWORD(v14) = -1;
      v9 = (unsigned __int8)CreateSprite((int)&v14, 0, 0);
      if ( v9 != 64 )
      {
        v10 = &gSprites[68 * v9];
        sub_8060388(
          (signed __int16)(v4 + *((_WORD *)v7 + 8)),
          (signed __int16)(v5 + *((_WORD *)v7 + 9)),
          v10 + 32,
          v10 + 34);
        v10[40] = -(*(_WORD *)(v8 + 8) << 16 >> 17);
        v10[41] = -(*(_WORD *)(v8 + 10) << 16 >> 17);
        *((_WORD *)v10 + 16) += 8;
        *((_WORD *)v10 + 17) += v10[41] + 16;
        *((_DWORD *)v10 + 3) = *(_DWORD *)(v8 + 28);
        if ( *((_BYTE *)v7 + 6) == 11 )
        {
          v11 = SetPlayerAvatarFieldObjectIdAndObjectId(v3, v9);
          *((_BYTE *)v7 + 27) = sub_8126B54(v11);
        }
        if ( v18 )
          SetSubspriteTables((int)&gSprites[68 * v9], v18);
        v10[5] = v10[5] & 0xF | 16 * *(_BYTE *)(v8 + 12);
        v10[62] |= 2u;
        *((_WORD *)v10 + 23) = v3;
        *((_BYTE *)v7 + 4) = v9;
        if ( !(*((_BYTE *)v7 + 1) & 0x10) && *((_BYTE *)v7 + 6) != 11 )
        {
          v12 = FieldObjectDirectionToImageAnimId(*((_BYTE *)v7 + 24) & 0xF);
          StartSpriteAnim((int)&gSprites[68 * v9], v12);
        }
        sub_805B914(&dword_30048A0[9 * v3]);
        SetObjectSubpriorityByZCoord((unsigned int)*((_BYTE *)v7 + 11) >> 4, &gSprites[68 * v9], 1);
      }
      return v19;
    }
  }
  return v19;
}
