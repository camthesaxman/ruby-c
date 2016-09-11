int __fastcall sub_80877AC(int a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( !(FieldEffectActiveListContains(0x31u) << 24) )
  {
    sub_8053FF8();
    sub_8080918();
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
