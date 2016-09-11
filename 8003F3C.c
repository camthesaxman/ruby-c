int __fastcall InitColors(int a1)
{
  unsigned int v1; // r1@1
  int *v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 5) = 14;
  *(_BYTE *)(a1 + 3) = 15;
  v1 = 0;
  v2 = &dword_30003A4;
  do
  {
    *v2 = v1;
    ++v2;
    ++v1;
  }
  while ( v1 <= 0xF );
  return v4;
}
