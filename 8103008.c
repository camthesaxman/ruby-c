int __fastcall sub_8103008(int a1)
{
  int v1; // r2@1
  int v2; // r3@1
  __int16 v3; // r0@1

  v1 = a1;
  *(_WORD *)(2 * *(_WORD *)(a1 + 38) + 0x2000022) = *(_WORD *)(a1 + 10);
  v2 = -*(_WORD *)(a1 + 10);
  *(_WORD *)(a1 + 10) = v2;
  v3 = *(_WORD *)(a1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v3;
  if ( !(v3 & 3) )
    *(_WORD *)(v1 + 10) = v2 << 16 >> 17;
  if ( !*(_WORD *)(v1 + 10) )
  {
    *(_WORD *)(v1 + 8) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(2 * *(_WORD *)(v1 + 38) + 0x2000022) = 0;
  }
  return 0;
}
