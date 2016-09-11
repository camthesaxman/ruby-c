int __fastcall sub_8087264(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1

  v1 = a1;
  SetCameraPanning(0, *(_WORD *)(a1 + 10));
  *(_WORD *)(v1 + 10) = -*(_WORD *)(v1 + 10);
  v2 = *(_WORD *)(v1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v2;
  if ( v2 > 7 )
  {
    *(_WORD *)(v1 + 12) = 0;
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
