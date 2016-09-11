int __fastcall sub_80E1B10(int a1)
{
  int v1; // r4@2
  int i; // r2@4
  int v4; // [sp+10h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 12) & 1 )
    v1 = *(_WORD *)(a1 + 36) / -2 & 0xFFFF;
  else
    v1 = (*(_WORD *)(a1 + 36) / 2 + (*(_WORD *)(a1 + 36) & 1)) & 0xFFFF;
  for ( i = 0; i < *(_WORD *)(a1 + 34); i = (i + 1) & 0xFFFF )
    *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 8 + 2 * (i + 9)) + 36] = v1;
  return v4;
}
