int __fastcall sub_80874FC(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( sub_807D770() << 24 )
  {
    v202FF84 = *(_WORD *)(v4 + 16);
    v202FF88 = *(_WORD *)(v4 + 18);
    v202FF8C = *(_BYTE *)(v5 + 67) - 1;
    v202FF90 = (unsigned int)*(_BYTE *)(v5 + 5) << 28 >> 30;
    *(_WORD *)(v3 + 10) = FieldEffectStart(0x31u);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
