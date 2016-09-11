_BYTE *__fastcall PutWindowTilemap(_BYTE *a1, _BYTE *a2, char a3)
{
  _BYTE *v3; // r5@1
  char v4; // r4@1
  _BYTE *v5; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = StringCopy(a1, &gUnknown_083CC59C);
  *v5 = v4;
  return StringCopy(v5 + 1, v3);
}
