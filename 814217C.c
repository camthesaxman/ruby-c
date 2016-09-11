int __fastcall sub_814217C(unsigned __int8 a1)
{
  int v1; // r8@1
  signed int v2; // r7@1
  unsigned int v3; // r4@2
  int v4; // r10@2
  signed int v5; // r3@2
  unsigned int v6; // r4@6
  __int16 i; // r1@6
  signed int v8; // r6@11
  const char *v9; // r5@11
  unsigned int v10; // r4@11
  int v12; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 33677312;
  if ( v2039324 )
  {
    sub_8125EC8(3);
    v4 = 4 * v1;
  }
  else
  {
    v3 = 0;
    v4 = 4 * a1;
    v5 = 122880;
    do
    {
      *(_BYTE *)(v3 + 33677312) = 0;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0x1FFF );
  }
  v6 = 0;
  for ( i = v201E008; i & 0x1FF; i = *(_WORD *)(v2 + 8) )
  {
    v6 = (v6 + 1) & 0xFFFF;
    v2 += 120;
    if ( v6 > 0x31 )
      goto _08142206;
  }
  if ( v6 <= 0x31 )
    goto _08142228;
_08142206:
  v8 = 33677312;
  v9 = (const char *)33677432;
  v10 = 0;
  v2 -= 120;
  do
  {
    memcpy(v8, v9, 120, v5);
    v10 = (v10 + 1) & 0xFFFF;
    v8 += 120;
    v9 += 120;
  }
  while ( v10 <= 0x30 );
_08142228:
  memcpy(v2, (const char *)0x201C000, 120, v5);
  MenuDrawTextWindow(2u, 0xEu);
  MenuPrint((int)&MenuText_HOFSaving, 3, 0xFu);
  dword_3004B20[2 * (v4 + v1)] = (int)sub_8142274;
  return v12;
}
