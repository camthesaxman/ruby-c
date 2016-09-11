int __fastcall sub_808EF38(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v202FFB4 + 1610) && *(_BYTE *)(v202FFB4 + 1610) != 3 )
    DestroySprite(a1);
  else
    *(_WORD *)(a1 + 38) = 120 * *(_WORD *)(v202FFB4 + 1550) / (*(_WORD *)(v202FFB4 + 1548) - 1);
  return v2;
}
