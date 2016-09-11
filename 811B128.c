int __fastcall sub_811B128(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  __int16 v4; // [sp+0h] [bp-1Ch]@3
  int v5; // [sp+4h] [bp-18h]@3
  int v6; // [sp+8h] [bp-14h]@3

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  *(_WORD *)(v1 + 10) = 16;
  *(_WORD *)(v1 + 12) = 0;
  *(_WORD *)(v1 + 16) = 0;
  *(_WORD *)(v1 + 18) = 0x4000;
  v200C002 = 63;
  v200C004 = 0;
  v200C006 = 240;
  v200C008 = 160;
  v200C00E = 16193;
  v200C010 = 4096;
  v2 = 0;
  do
  {
    word_3005560[v2] = 240;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x9F );
  SetVBlankCallback((int)sub_811B520);
  sub_811D6A8(&v5, &v6);
  v4 = 0;
  CpuSet(&v4, v5, 16778240);
  CpuSet(&gUnknown_083FBB88, v6, 704);
  LoadPalette((int)&gFieldEffectObjectPalette10, 240, 32);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
