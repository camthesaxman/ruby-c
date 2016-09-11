int __fastcall sub_80A229C(unsigned __int8 a1, unsigned __int8 a2, _DWORD *a3)
{
  unsigned int v3; // r3@1
  _BYTE *v4; // r1@1
  unsigned int v5; // r0@1
  int v7; // [sp+0h] [bp-4h]@0

  v3 = a2;
  v4 = &byte_3004B28[40 * a1 + 2];
  *a3 = v4;
  v5 = 0;
  if ( v3 > 0 )
  {
    do
    {
      v5 = (v5 + 1) & 0xFF;
      ++v4;
    }
    while ( v5 < v3 );
    *a3 = v4;
  }
  return v7;
}
