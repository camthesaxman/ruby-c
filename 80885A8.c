int __fastcall sub_80885A8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80886F8(a1);
  if ( *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 38) + 60] )
    ++*(_WORD *)(v1 + 8);
  return v3;
}
