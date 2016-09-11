int sub_80AFFA0()
{
  signed int v0; // r2@1
  _BYTE *v1; // r3@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = (_BYTE *)33657656;
  do
  {
    *(_WORD *)&gSprites[68 * *v1 + 34] = gUnknown_083CA338[*(_BYTE *)(v0 + 33785494)];
    v1 += 4;
    ++v0;
  }
  while ( v0 <= 3 );
  return v3;
}
