int __fastcall sub_805B410(unsigned __int8 a1, unsigned __int8 a2, __int16 a3, __int16 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  unsigned __int8 v6; // r5@1
  __int16 v7; // r10@1
  int v8; // r4@1
  int v9; // r6@1
  char *v10; // r5@2
  char v11; // r1@2
  char v12; // r0@6
  int v14; // [sp+0h] [bp-44h]@1
  __int16 v15; // [sp+18h] [bp-2Ch]@1
  __int16 v16; // [sp+1Ah] [bp-2Ah]@1
  int v17; // [sp+1Ch] [bp-28h]@1
  int v18; // [sp+20h] [bp-24h]@1

  v6 = a1;
  v7 = a2;
  v15 = a3;
  v16 = a4;
  v18 = a6;
  v8 = GetFieldObjectGraphicsInfo(a1);
  MakeObjectTemplateFromFieldObjectGraphicsInfo(v6, (int)sub_8064970, (int)&v14, &v17);
  HIWORD(v14) = -1;
  v15 += 7;
  v16 += 7;
  sub_8060470(&v15, &v16, 8, 16);
  v9 = (unsigned __int8)CreateSpriteAtEnd((int)&v14, v15, v16);
  if ( v9 != 64 )
  {
    v10 = &gSprites[68 * v9];
    v10[40] = -(*(_WORD *)(v8 + 8) << 16 >> 17);
    v10[41] = -(*(_WORD *)(v8 + 10) << 16 >> 17);
    *((_WORD *)v10 + 17) += v10[41];
    v10[5] = v10[5] & 0xF | 16 * *(_BYTE *)(v8 + 12);
    v10[62] |= 2u;
    *((_WORD *)v10 + 23) = v7;
    *((_WORD *)v10 + 24) = a5;
    v11 = *(_BYTE *)(v8 + 12);
    if ( (v11 & 0xF) == 10 )
      npc_load_two_palettes__and_record(*(_WORD *)(v8 + 2), v11 & 0xF);
    if ( v17 )
    {
      SetSubspriteTables((int)&gSprites[68 * v9], v17);
      v10[66] = v10[66] & 0x3F | 0x80;
    }
    InitObjectPriorityByZCoord(&gSprites[68 * v9], a5);
    SetObjectSubpriorityByZCoord(a5, &gSprites[68 * v9], 1);
    v12 = FieldObjectDirectionToImageAnimId(v18);
    StartSpriteAnim((int)&gSprites[68 * v9], v12);
  }
  return v9;
}
