int sub_80BEB20()
{
  unsigned int v0; // r0@4
  int v1; // r1@4
  int v2; // r4@4
  int v4; // [sp+Ch] [bp-4h]@0

  if ( FlagGet(0x804u) << 24 )
  {
    byte_3005D38 = sub_80BEBC8(33718768);
    if ( byte_3005D38 != -1 && (unsigned __int8)sub_80BF77C(655) != 1 )
    {
      v0 = (unsigned __int16)Random() % 3u;
      v2 = (v0 + 1) & 0xFFFF;
      if ( (sub_80BEE48((v0 + 1) & 0xFF, v1) & 0xFF) != 1 )
      {
        *(_BYTE *)(4 * byte_3005D38 + 0x20281F0) = v2;
        *(_WORD *)(4 * byte_3005D38 + 0x20281F2) = 4;
        *(_BYTE *)(4 * byte_3005D38 + 0x20281F1) = 1;
      }
    }
  }
  return v4;
}
