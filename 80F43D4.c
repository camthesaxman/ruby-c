int __fastcall sub_80F43D4(int a1)
{
  int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  sub_80F4194(33608164, a1);
  v1 = (unsigned __int16)GetSpriteTileStartByTag(0x1Au);
  if ( v1 != 0xFFFF )
  {
    v40000D4 = 33608164;
    v40000D8 = 32 * v1 + 100728832;
    v40000DC = -2080374464;
  }
  return v3;
}
