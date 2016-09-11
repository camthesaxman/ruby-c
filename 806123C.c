int __fastcall sub_806123C(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r8@1
  char v9[8]; // [sp+4h] [bp-24h]@1
  __int16 v10; // [sp+Ch] [bp-1Ch]@3
  __int16 v11; // [sp+Eh] [bp-1Ah]@3

  v2 = a1;
  v3 = a2;
  memcpy(v9, &gUnknown_08375A3A, 6);
  v7 = (unsigned __int8)call_via_r4(v3, v4, v5, v6);
  if ( v7 == 1 && *(_WORD *)&v9[2 * *(_WORD *)(v3 + 54)] )
  {
    v10 = 0;
    v11 = 0;
    sub_8060320(
      (unsigned int)*(_BYTE *)(v2 + 24) >> 4,
      &v10,
      &v11,
      *(_WORD *)&v9[2 * *(_WORD *)(v3 + 54)],
      *(_WORD *)&v9[2 * *(_WORD *)(v3 + 54)]);
    npc_coords_shift(v2, v10 + *(_WORD *)(v2 + 16), v11 + *(_WORD *)(v2 + 18));
    *(_BYTE *)v2 |= 0x14u;
  }
  else if ( v7 == 255 )
  {
    npc_coords_shift_still(v2);
    *(_BYTE *)v2 |= 0x28u;
    *(_BYTE *)(v3 + 44) |= 0x40u;
  }
  return v7;
}
