int __fastcall sub_80CFE2C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r5@2
  __int16 v4; // r7@2
  _WORD *v5; // r2@2
  signed int v6; // r3@2
  _WORD *v7; // r1@2
  __int16 v8; // r0@4
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 == 2 )
  {
    *(_WORD *)(v1 + 48) = 0;
    v3 = *(_WORD *)(v1 + 46);
    v4 = *(_WORD *)(2 * (v3 + 8) + 0x202EEC8);
    v5 = (_WORD *)(2 * v3 + 33746648);
    v6 = 7;
    v7 = (_WORD *)(2 * (v3 + 9) + 33746632);
    do
    {
      *v5 = *v7;
      ++v7;
      ++v5;
      --v6;
    }
    while ( v6 >= 0 );
    *(_WORD *)(2 * (v3 + 15) + 0x202EEC8) = v4;
    v8 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v8;
    if ( v8 == 24 )
      move_anim_8072740(v1);
  }
  return v10;
}
