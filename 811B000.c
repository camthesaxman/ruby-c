int __fastcall sub_811B000(int a1)
{
  unsigned int v1; // r4@1
  int v2; // r2@1
  unsigned int v3; // r5@1
  int v4; // r7@1
  unsigned __int8 v5; // r0@4

  v200C000 = 0;
  v1 = *(_WORD *)(a1 + 10);
  v2 = *(_WORD *)(a1 + 12);
  *(_WORD *)(a1 + 10) = v1 + 4224;
  *(_WORD *)(a1 + 12) = v2 + 384;
  v3 = 0;
  v4 = v2 << 16 >> 24 << 16;
  do
  {
    word_3004DE0[v3] = sine(v1 >> 8, SHIWORD(v4)) + v200C016;
    v3 = (v3 + 1) & 0xFF;
    v1 = (v1 + 4224) & 0xFFFF;
  }
  while ( v3 <= 0x9F );
  if ( !(v202F38F & 0x80) )
  {
    v5 = FindTaskIdByFunc((int)sub_811AF44);
    DestroyTask(v5);
  }
  ++v200C000;
  return 0;
}
