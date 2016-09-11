int __fastcall sub_811BD60(int a1)
{
  int v1; // r6@1
  int v2; // r2@1
  unsigned int v3; // r4@1
  unsigned int v4; // r5@3
  int v5; // r7@3
  __int16 v6; // r0@5
  unsigned __int8 v7; // r0@9

  v1 = a1;
  v200C000 = 0;
  v2 = *(_WORD *)(a1 + 12);
  v3 = *(_WORD *)(a1 + 10);
  *(_WORD *)(a1 + 10) = v3 + 1024;
  if ( v2 << 16 <= 536805376 )
    *(_WORD *)(a1 + 12) = v2 + 384;
  v4 = 0;
  v5 = v2 << 16 >> 24 << 16;
  do
  {
    word_3004DE0[v4] = sine(v3 >> 8, SHIWORD(v5)) + v200C016;
    v4 = (v4 + 1) & 0xFF;
    v3 = (v3 + 384) & 0xFFFF;
  }
  while ( v4 <= 0x9F );
  v6 = *(_WORD *)(v1 + 14) + 1;
  *(_WORD *)(v1 + 14) = v6;
  if ( v6 == 81 )
  {
    ++*(_WORD *)(v1 + 16);
    BeginNormalPaletteFade(-1, -2, 0, 0x10u, 0);
  }
  if ( *(_WORD *)(v1 + 16) && !(v202F38F & 0x80) )
  {
    v7 = FindTaskIdByFunc((int)sub_811BCBC);
    DestroyTask(v7);
  }
  ++v200C000;
  return 0;
}
