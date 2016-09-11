int __fastcall sub_8093AA0(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  __int16 *v3; // r0@1

  v1 = a1;
  v2000004 = 0;
  dp12_8087EA4();
  v2 = 0;
  v3 = &word_3005560;
  do
  {
    *v3 = -4;
    ++v3;
    ++v2;
  }
  while ( v2 <= 0x9F );
  SetHBlankCallback((int)sub_8093D7C);
  v2000004 = 1;
  ++*(_WORD *)(v1 + 8);
  return 0;
}
