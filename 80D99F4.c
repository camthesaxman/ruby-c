int __fastcall sub_80D99F4(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  signed int v5; // r3@1
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 50) = v2;
  v3 = *(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v3;
  v4 = v2 << 16 >> 20;
  *(_WORD *)(v1 + 32) = v4;
  v5 = v3 << 16 >> 20;
  *(_WORD *)(v1 + 34) = v5;
  if ( (unsigned int)((v4 + 8) << 16) > 0x1000000 || v5 < -8 || v5 > 120 )
    move_anim_8072740(v1);
  return v7;
}
