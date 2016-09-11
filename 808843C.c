int __fastcall sub_808843C(unsigned __int16 a1)
{
  _WORD *v1; // r2@1
  unsigned int v2; // r1@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (_WORD *)(a1 + 100663616);
  v2 = 0;
  do
  {
    *v1 = gFieldMoveStreaksTilemap[v2] | 0xF000;
    v2 = (v2 + 1) & 0xFFFF;
    ++v1;
  }
  while ( v2 <= 0x13F );
  return v4;
}
