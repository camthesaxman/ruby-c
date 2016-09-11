int __fastcall sub_8064470(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( v2 != v1 && LOBYTE(dword_30048A0[9 * v2]) << 31 && v2 != v202E85D )
      sub_80643A4((int)&dword_30048A0[9 * v2]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v4;
}
