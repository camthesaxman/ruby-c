int sub_80BE478()
{
  int v0; // r4@4
  int v2; // [sp+18h] [bp-4h]@0

  sub_80BF478();
  if ( v202E8DC != 1 )
  {
    GetMonData((int)&dword_3004360[25 * v202E8CC], 2, (int)&gStringVar1);
    if ( (unsigned __int16)StringLength((_BYTE *)0x2024EA4) > 1u && (unsigned __int16)StringLength(&gStringVar1) > 1u )
    {
      v0 = 36 * byte_3005D38 + 33717868;
      *(_BYTE *)v0 = 5;
      *(_BYTE *)(v0 + 1) = 1;
      *(_WORD *)(v0 + 2) = GetMonData((int)&dword_3004360[25 * v202E8CC], 11, 0);
      *(_BYTE *)(v0 + 26) = (unsigned __int16)Random() % 3u;
      Random();
      *(_BYTE *)(v0 + 27) = 0;
      *(_WORD *)(v0 + 28) = sub_80BF674(*(_WORD *)(v0 + 2));
      StringCopy((_BYTE *)(v0 + 15), (_BYTE *)0x2024EA4);
      GetMonData((int)&dword_3004360[25 * v202E8CC], 2, v0 + 4);
      sub_80BE160(v0);
      *(_BYTE *)(v0 + 30) = 2;
      *(_BYTE *)(v0 + 31) = sub_80BDEAC(v0 + 4);
      SkipExtCtrlCodes((_BYTE *)(v0 + 4));
    }
  }
  return v2;
}
