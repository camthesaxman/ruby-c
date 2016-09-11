int sub_80BE188()
{
  int v0; // r4@2
  int v1; // r1@2
  unsigned int v2; // r2@2
  char v3; // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  if ( v20281CC == 6 )
  {
    v0 = 36 * byte_3005D38 + 33717868;
    *(_BYTE *)v0 = 6;
    *(_BYTE *)(v0 + 1) = 1;
    *(_WORD *)(v0 + 2) = v20281CE;
    StringCopy((_BYTE *)(v0 + 22), (_BYTE *)0x2024EA4);
    StringCopy((_BYTE *)(v0 + 8), (_BYTE *)0x20281D4);
    v1 = (unsigned __int8)(*(_BYTE *)(v0 + 19) & 0xF8) | v20281DF & 7;
    *(_BYTE *)(v0 + 19) = v1;
    v2 = v1 & 0xFFFFFFE7 | v20281DF & 0x18;
    *(_BYTE *)(v0 + 19) = v2;
    *(_WORD *)(v0 + 20) = v20281E0;
    v3 = v2 & 0x9F | v20281DF & 0x60;
    *(_BYTE *)(v0 + 19) = v3;
    *(_BYTE *)(v0 + 19) = v3 & 0xF8 | v20281DF & 7;
    sub_80BE160(v0);
    *(_BYTE *)(v0 + 30) = 2;
    *(_BYTE *)(v0 + 31) = sub_80BDEAC(v0 + 8);
    SkipExtCtrlCodes((_BYTE *)(v0 + 8));
  }
  return v5;
}
