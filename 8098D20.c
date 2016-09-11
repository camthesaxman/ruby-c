int __fastcall sub_8098D20(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  _BYTE *v2; // r2@1
  int v3; // r0@1
  unsigned int *v4; // r7@1
  int v5; // r8@1
  unsigned int v6; // r0@2
  int v8; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = (_BYTE *)(2400 * (unsigned __int8)get_preferred_box());
  v3 = 80 * v1 + 33751204;
  v4 = (unsigned int *)&v2[v3];
  v5 = (unsigned __int16)GetBoxMonData((unsigned int *)&v2[v3], 65, v2);
  if ( v5 )
  {
    v6 = GetBoxMonData(v4, 0, (_BYTE *)0x2C0000);
    *(_DWORD *)(4 * v1 + 0x2001050) = sub_8099AFC(
                                        v5,
                                        v6,
                                        (1572864 * (v1 % 6 & 0xFF) + 6553600) >> 16,
                                        (1572864 * (v1 / 6 & 0xFF) + 2883584) >> 16);
  }
  return v8;
}
