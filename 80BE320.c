int sub_80BE320()
{
  int v0; // r6@1
  char v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 36 * byte_3005D38 + 33717868;
  *(_BYTE *)v0 = 7;
  *(_BYTE *)(v0 + 1) = 1;
  StringCopy((_BYTE *)(v0 + 2), (_BYTE *)0x2024EA4);
  StringCopy((_BYTE *)(v0 + 12), (_BYTE *)0x2025328);
  *(_WORD *)(v0 + 10) = v2025324;
  *(_WORD *)(v0 + 20) = v2025326;
  *(_WORD *)(v0 + 22) = sub_8135D3C(v202541C);
  *(_BYTE *)(v0 + 28) = v20253F9;
  if ( v202541C )
    v1 = 100;
  else
    v1 = 50;
  *(_BYTE *)(v0 + 26) = v1;
  *(_BYTE *)(v0 + 27) = v202E8CC;
  sub_80BE160(v0);
  *(_BYTE *)(v0 + 29) = 2;
  return v3;
}
