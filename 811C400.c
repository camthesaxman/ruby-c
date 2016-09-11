int __fastcall sub_811C400(int a1)
{
  int v1; // r4@1

  v1 = a1;
  v200C018 -= 8;
  v200C01A += 8;
  if ( sub_811CA44(*(_WORD *)(a1 + 34)) << 16 )
  {
    ++*(_WORD *)(v1 + 8);
    sub_811CA28(*(_WORD *)(v1 + 36));
  }
  return 0;
}
