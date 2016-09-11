int __fastcall sub_8088F10(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8088FA4(*(_BYTE *)(a1 + 10)) << 24 )
  {
    sub_8080918();
    ++*(_WORD *)(v1 + 8);
  }
  return v3;
}
