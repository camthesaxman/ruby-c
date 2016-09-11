int __fastcall sub_811AE70(int a1)
{
  int v1; // ST00_4@1
  unsigned __int8 v2; // r0@2

  v200C000 = 0;
  *(_WORD *)(a1 + 10) += 4;
  *(_WORD *)(a1 + 12) += 8;
  v1 = *(_WORD *)(a1 + 12);
  sub_811D6E8(word_3004DE0, v200C014, *(_WORD *)(a1 + 10), 2);
  if ( !(v202F38F & 0x80) )
  {
    v2 = FindTaskIdByFunc((int)sub_811ADAC);
    DestroyTask(v2);
  }
  ++v200C000;
  return 0;
}
