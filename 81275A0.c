int __fastcall sub_81275A0(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 40 )
    *(_WORD *)(v1 + 46) = 1;
  sub_806487C(v1, 0);
  return v4;
}
