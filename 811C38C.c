int __fastcall sub_811C38C(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  __int16 *v3; // r2@1
  int v4; // r2@3
  int v5; // r3@3

  v1 = a1;
  v2 = 0;
  v200C000 = 0;
  v3 = word_3004DE0;
  do
  {
    *v3 = 240;
    v2 = (v2 + 1) & 0xFF;
    ++v3;
  }
  while ( v2 <= 0x9F );
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 14) = 0;
  v200C018 -= 8;
  v200C01A += 8;
  sub_811CA10(*(_WORD *)(a1 + 34), 0, v3, 240);
  sub_811CA10(*(_WORD *)(v1 + 36), 1, v4, v5);
  sub_811CA28(*(_WORD *)(v1 + 34));
  audio_play(0x68u);
  ++v200C000;
  return 0;
}
