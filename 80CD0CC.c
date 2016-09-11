int __fastcall sub_80CD0CC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r5@3
  __int16 v3; // r1@3
  __int16 v4; // r0@7
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 52) <= 11 )
    *(_WORD *)(a1 + 54) += 2;
  v2 = *(_WORD *)(a1 + 52);
  v3 = *(_WORD *)(a1 + 52);
  if ( ((*(_WORD *)(a1 + 52) - 18) & 0xFFFFu) <= 0x17 )
    *(_WORD *)(a1 + 54) -= 2;
  if ( v3 > 47 )
    *(_WORD *)(a1 + 54) += 2;
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 54) / 9;
  v4 = *(_WORD *)(a1 + 54) / 14;
  *(_WORD *)(v1 + 38) = v4;
  if ( v4 & 0x8000 )
    *(_WORD *)(v1 + 38) = -*(_WORD *)(v1 + 38);
  *(_WORD *)(v1 + 52) = v2 + 1;
  if ( (signed __int16)(v2 + 1) > 59 )
    *(_WORD *)(v1 + 52) = 0;
  return v6;
}
