int __fastcall sub_805B710(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  signed int v5; // r4@1
  signed int v6; // r5@1
  int v8; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  ClearPlayerAvatarInfo();
  v4 = 0;
  v5 = v2 << 16;
  v6 = v3 << 16;
  do
  {
    if ( LOBYTE(dword_30048A0[9 * v4]) << 31 )
      sub_805B75C(v4, v5 >> 16, v6 >> 16);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 0xF );
  sub_805AAB0();
  return v8;
}
