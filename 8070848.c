int sub_8070848()
{
  int v0; // r2@1
  unsigned int v1; // r7@1
  __int16 v2; // r0@2
  unsigned int v3; // r6@2
  unsigned int v4; // r9@2
  int v5; // r4@3
  int v7; // [sp+1Ch] [bp-4h]@0

  MenuDrawTextWindow(11, 0, 29, 7);
  v1 = 0;
  do
  {
    v2 = GetMonData(v201C000, (unsigned __int8)gUnknown_08376D1C[v1], v0);
    *(_WORD *)(2 * (v1 + 6) + 0x201B264) = v2;
    *(_WORD *)(2 * v1 + 0x201B264) = v2 - *(_WORD *)(2 * v1 + 0x201B264);
    v3 = (9 * (v1 / 3 & 0xFF) + 11) & 0xFF;
    v4 = (2 * (v1 % 3) + 1) & 0xFF;
    sub_80729D8(gUnknown_08376D04[v1], 8 * (v3 + 1) & 0xFF, 8 * v4, 1);
    if ( v1 == 2 )
    {
      v5 = v3 + 6;
      sub_80729D8(&gUnknown_0840E691, (8 * (v3 + 6) + 6) & 0xFF, 8 * v4, 0);
    }
    else
    {
      v5 = v3 + 6;
      sub_80729D8(&gUnknown_0840E691, (8 * (v3 + 6) + 6) & 0xFF, 8 * v4, 1);
    }
    gStringVar1 = -4;
    byte_20231CD = 20;
    byte_20231CE = 6;
    ConvertIntToDecimalStringN(&byte_20231CF, *(_WORD *)(2 * v1 + 0x201B264), 1, 2);
    sub_80729D8(&gStringVar1, (unsigned int)((v5 << 27) + 201326592) >> 24, 8 * v4, 0);
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 5 );
  return v7;
}
