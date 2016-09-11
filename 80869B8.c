int __fastcall sub_80869B8(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  __int16 v3; // r0@1

  v1 = a1;
  SetCameraPanning(0, *(_WORD *)(a1 + 10));
  v2 = -*(_WORD *)(v1 + 10);
  *(_WORD *)(v1 + 10) = v2;
  v3 = *(_WORD *)(v1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v3;
  if ( !(v3 & 3) )
    *(_WORD *)(v1 + 10) = v2 << 16 >> 17;
  if ( !*(_WORD *)(v1 + 10) )
    ++*(_WORD *)(v1 + 8);
  return 0;
}
