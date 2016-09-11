int __fastcall sub_8116CAC(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  v2019000 = 0;
  v2019003 = 0;
  do
  {
    *(_BYTE *)(v1 + 33656859) = 0;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 5 );
  v201901A &= 0xF0u;
  HIWORD(dword_3004B20[10 * a1 + 2]) = 0;
  return v3;
}
