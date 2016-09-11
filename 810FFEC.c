signed int __fastcall sub_810FFEC(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r8@1
  int v4; // r7@1
  signed int v5; // r5@1
  int v6; // r4@1

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = a1;
  do
  {
    memcpy(&gStringVar1, (const char *)v6, 7);
    byte_20231D3 = -1;
    if ( !StringCompareWithoutExtCtrlCodes((int)&gStringVar1, v3) && *(_WORD *)(v6 + 8) == v4 )
      return v5;
    v6 += 16;
    ++v5;
  }
  while ( v5 <= 4 );
  return 5;
}
