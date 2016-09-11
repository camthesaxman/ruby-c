int __fastcall sub_8049E9C(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  _BYTE *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1 / 6u & 0xFF;
  v2 = (_BYTE *)(dword_3004824 + 128 + v1);
  if ( !*v2 )
  {
    *v2 = 1;
    *(_BYTE *)(dword_3004824 + 130 + v1) = a1;
  }
  return v4;
}
