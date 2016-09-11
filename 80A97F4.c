int __fastcall sub_80A97F4(int a1, __int16 a2)
{
  int v2; // r3@1
  _WORD *v3; // r2@1
  __int16 v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v2 = (4 * a1 & 0x3FF) + 33707828;
  v3 = (_WORD *)((4 * a1 & 0x3FF) + 33709006);
  v4 = *(_WORD *)((4 * a1 & 0x3FF) + 0x2025BCE) - a2;
  *v3 = v4;
  if ( !v4 )
  {
    *(_WORD *)(v2 + 1176) = 0;
    sub_80A982C();
  }
  return v6;
}
