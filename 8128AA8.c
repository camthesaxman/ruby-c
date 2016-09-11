int sub_8128AA8()
{
  int v0; // r1@1
  signed int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (*(_BYTE *)(v2039238 + 1) + *(_BYTE *)(v20192E8 + 0x20192E9)) & 0xFFFF;
  v1 = (signed __int16)(*(_BYTE *)(v2039238 + 1) + *(_BYTE *)(v20192E8 + 0x20192E9));
  if ( v1 <= 255 )
  {
    if ( v1 < 0 )
      LOBYTE(v0) = 0;
  }
  else
  {
    LOBYTE(v0) = -1;
  }
  *(_BYTE *)(v20192E8 + 0x20192E9) = v0;
  v2039238 += 2;
  return v3;
}
