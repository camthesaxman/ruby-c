int __fastcall sub_812FF94(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  _WORD *v3; // r1@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 34) += *(_WORD *)(a1 + 50);
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 6 )
  {
    v3 = &byte_3004B28[40 * *(_WORD *)(v1 + 52)] + 2 * *(_WORD *)(v1 + 54);
    --*v3;
    DestroySprite(v1);
  }
  return v5;
}
