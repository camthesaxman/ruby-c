int sub_80FA17C()
{
  unsigned int v0; // r6@1
  unsigned __int16 v1; // r0@3
  int v3; // [sp+18h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_WORD *)(8 * v0 + 0x202850C) = sub_80EB72C(0xAu);
    if ( Random() & 1 )
      v1 = 12;
    else
      v1 = 13;
    *(_WORD *)(8 * v0 + 0x202850E) = sub_80EB72C(v1);
    *(_BYTE *)(8 * v0 + 0x2028509) = *(_BYTE *)(8 * v0 + 0x2028509) & 0xBF | ((Random() & 1) << 6);
    sub_80FA740(8 * v0 + 33719560);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  sub_80FA46C(33719560, 5, 0);
  return v3;
}
