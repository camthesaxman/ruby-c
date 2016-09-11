int __fastcall sub_8096784(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 3 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 46);
    v3 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v3;
    if ( v3 > 5 )
    {
      *(_WORD *)(v1 + 50) = 0;
      *(_WORD *)(v1 + 36) = 0;
    }
  }
  return v5;
}
