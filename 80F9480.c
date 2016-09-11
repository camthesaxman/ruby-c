int __fastcall sub_80F9480(int a1, unsigned int a2)
{
  unsigned int i; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  a2 = (unsigned __int8)a2;
  for ( i = 0; i < a2; i = (i + 1) & 0xFF )
    *(_BYTE *)(a1 + i) = -1;
  return v4;
}
