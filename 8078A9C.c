int __fastcall obj_translate_based_on_private_1_2_3_4(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r1@1
  unsigned int v3; // r2@1
  unsigned int v4; // r8@1
  int v5; // r0@3
  __int16 v6; // r6@6
  __int16 v7; // r5@9
  int v9; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) - *(_WORD *)(a1 + 48);
  v3 = *(_WORD *)(a1 + 54) - *(_WORD *)(a1 + 52);
  v4 = v2 >> 31;
  if ( (v2 & 0x80000000) != 0 )
    v2 = -v2;
  v5 = *(_WORD *)(a1 + 54) - *(_WORD *)(a1 + 52);
  if ( (v3 & 0x80000000) != 0 )
    v5 = -v3;
  if ( v4 )
    v6 = (signed int)((v2 << 8) & 0xFFFF) / *(_WORD *)(v1 + 46) | 1;
  else
    v6 = (signed int)((v2 << 8) & 0xFFFF) / *(_WORD *)(v1 + 46) & 0xFFFE;
  if ( v3 >> 31 )
    v7 = ((v5 << 8) & 0xFFFF) / *(_WORD *)(v1 + 46) | 1;
  else
    v7 = ((v5 << 8) & 0xFFFF) / *(_WORD *)(v1 + 46) & 0xFFFE;
  *(_WORD *)(v1 + 48) = v6;
  *(_WORD *)(v1 + 50) = v7;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 52) = 0;
  return v9;
}
