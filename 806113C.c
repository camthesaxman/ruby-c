int __fastcall sub_806113C(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r7@1
  int v6; // r10@1
  int v7; // r4@1
  int v8; // r8@1
  char v10[8]; // [sp+4h] [bp-2Ch]@1
  __int16 v11; // [sp+Ch] [bp-24h]@1
  __int16 v12; // [sp+Eh] [bp-22h]@1
  int v13; // [sp+2Ch] [bp-4h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  memcpy(v10, &gUnknown_08375A34, 6);
  v11 = 0;
  v12 = 0;
  FieldObjectSetDirection(v5, v7);
  sub_8060320(v7, &v11, &v12, *(_WORD *)&v10[2 * v8], *(_WORD *)&v10[2 * v8]);
  npc_coords_shift(v5, v11 + *(_WORD *)(v5 + 16), v12 + *(_WORD *)(v5 + 18));
  sub_80646E4(v6, v7, v8, a5);
  *(_WORD *)(v6 + 50) = 1;
  *(_BYTE *)(v6 + 44) &= 0xBFu;
  *(_BYTE *)v5 |= 0x14u;
  return v13;
}
