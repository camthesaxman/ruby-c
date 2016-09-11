int __fastcall sub_8048D24(int a1, int a2, unsigned int a3)
{
  unsigned int i; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(a1 + i) = *(_BYTE *)(a2 + i);
  return v5;
}
