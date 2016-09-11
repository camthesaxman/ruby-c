int __fastcall sub_811D144(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-Ch]@2

  v1 = a1;
  if ( !*(_WORD *)(a1 + 10) )
  {
    sub_811D690(&v3);
    *(_WORD *)(v1 + 10) = 3;
    CpuSet((char *)&gUnknown_083FD528 + 32 * ++*(_WORD *)(v1 + 12), v3, 16);
    if ( (signed int)*(_WORD *)(v1 + 12) > 13 )
    {
      ++*(_WORD *)(v1 + 8);
      *(_WORD *)(v1 + 10) = 16;
    }
  }
  --*(_WORD *)(v1 + 10);
  return 0;
}
