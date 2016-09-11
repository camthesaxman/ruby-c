int __fastcall sub_806DA0C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_809D638();
  if ( v2 )
  {
    if ( v2 & 1 )
      *(_WORD *)(v1 + 38) = -3;
    else
      *(_WORD *)(v1 + 38) = 1;
  }
  return v4;
}
