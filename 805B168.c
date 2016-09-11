signed int __fastcall SpawnFieldObject(int a1, unsigned __int8 a2, unsigned __int8 a3, __int16 a4, __int16 a5)
{
  _BYTE *v5; // r9@1
  unsigned __int8 v6; // r6@1
  unsigned __int8 v7; // r8@1
  __int16 v8; // r4@1
  int v9; // r7@1
  unsigned int v10; // r0@1
  signed int v11; // r5@1
  signed int result; // r0@2
  int *v13; // r3@3
  char v14; // [sp+8h] [bp-40h]@1
  char *v15; // [sp+14h] [bp-34h]@1
  int v16; // [sp+20h] [bp-28h]@1
  char v17; // [sp+24h] [bp-24h]@1
  unsigned int v18; // [sp+28h] [bp-20h]@1

  v5 = (_BYTE *)a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v16 = 0;
  v9 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 1));
  MakeObjectTemplateFromFieldObjectTemplate(v5, &v14, &v16);
  v18 = v18 & 0xFFFF0000 | *(_WORD *)(v9 + 6);
  v15 = &v17;
  v10 = sub_805AFCC(v5, (int)&v14, v6, v7, v8, a5) << 24;
  v11 = v10 >> 24;
  if ( v10 >> 24 == 16 )
  {
    result = 16;
  }
  else
  {
    v13 = &dword_30048A0[9 * (v10 >> 24)];
    *((_DWORD *)&unk_2020010 + 17 * *((_BYTE *)v13 + 4)) = *(_DWORD *)(v9 + 28);
    if ( v16 )
      SetSubspriteTables((int)&gSprites[68 * *((_BYTE *)v13 + 4)], v16);
    result = v11;
  }
  return result;
}
