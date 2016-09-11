int __fastcall sub_802D924(unsigned __int8 a1)
{
  int v1; // r9@1
  int *v2; // r8@1
  int v3; // r10@1
  int v4; // r7@1
  int v5; // r5@4
  int v6; // r4@4
  int v7; // r0@4
  unsigned int v8; // r0@4
  char v9; // r5@5
  int v10; // r0@5
  int *v11; // r1@9
  int (*v12)(); // r0@3
  unsigned int v14; // [sp+0h] [bp-30h]@4
  unsigned int v15; // [sp+4h] [bp-2Ch]@4
  int v16; // [sp+8h] [bp-28h]@1
  int v17; // [sp+Ch] [bp-24h]@1
  int v18; // [sp+2Ch] [bp-4h]@13

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 8);
  v4 = *((_BYTE *)v2 + 12);
  v16 = *((_BYTE *)v2 + 12);
  v17 = *((_WORD *)v2 + 5);
  if ( (unsigned __int8)battle_type_is_double(v3) != 1 && v3 == *(_WORD *)(2 * v4 + 0x2024A6A) )
  {
    v12 = sub_802DA9C;
    goto _0802DA82;
  }
  v5 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v3, 11);
  v6 = (unsigned __int8)GetMonData((char *)&unk_3004360 + 100 * v3, 56);
  v7 = GetMonData((char *)&unk_3004360 + 100 * v3, 25);
  v15 = v7;
  v14 = *(&gExperienceTables[101 * *((_BYTE *)&gBaseStats + 28 * v5 + 19)] + v6 + 1);
  v8 = v7 + (signed __int16)v17;
  if ( v8 >= v14 )
  {
    SetMonData((char *)&unk_3004360 + 100 * v3, 25, &v14);
    CalculateMonStats((char *)&unk_3004360 + 100 * v3);
    v9 = v2024A60;
    v2024A60 = v4;
    v10 = dp01_build_cmdbuf_x21_a_bb(1u, 11, v17 - (v14 - v15));
    v2024A60 = v9;
    if ( (unsigned __int8)battle_type_is_double(v10) != 1
      || v3 != *(_WORD *)(2 * v4 + 0x2024A6A) && v3 != *(_WORD *)(2 * (v4 ^ 2) + 0x2024A6A) )
    {
      v11 = &dword_3004B20[10 * v1];
      v12 = sub_802DDC4;
_0802DA84:
      *v11 = (int)v12;
      return v18;
    }
    v12 = sub_802DCB0;
_0802DA82:
    v11 = v2;
    goto _0802DA84;
  }
  v15 = v8;
  SetMonData((char *)&unk_3004360 + 100 * v3, 25, &v15);
  dword_3004330[v16] = (int)sub_802D90C;
  DestroyTask(v1);
  return v18;
}
