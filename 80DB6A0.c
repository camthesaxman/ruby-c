int __fastcall sub_80DB6A0(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  signed int v5; // r3@1
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) + *(_WORD *)(a1 + 54);
  *(_WORD *)(v1 + 54) = v2;
  v3 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v3;
  v4 = v2 << 16 >> 20;
  *(_WORD *)(v1 + 32) = v4;
  v5 = v3 << 16 >> 20;
  *(_WORD *)(v1 + 34) = v5;
  if ( (unsigned int)((v4 + 45) << 16) > 0x14A0000 || v5 > 157 || v5 < -45 )
    move_anim_8074EE0(v1);
  return v7;
}
