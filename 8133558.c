int sub_8133558()
{
  char v0; // r0@1
  signed int v1; // r4@1
  signed int v2; // r5@2
  int v4; // [sp+0h] [bp-1Ch]@4
  int v5; // [sp+18h] [bp-4h]@4

  v0 = sub_80403CC((int)&dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)], (_WORD *)(dword_30007B0 + 32));
  *(_BYTE *)(dword_30007B0 + 26) = v0;
  v1 = 0;
  if ( (signed int)*(_BYTE *)(dword_30007B0 + 26) > 0 )
  {
    v2 = 82;
    do
    {
      StringCopy((_BYTE *)(dword_30007B0 + v2), &gMoveNames[13 * *(_WORD *)(dword_30007B0 + 32 + 2 * v1)]);
      v2 += 25;
      ++v1;
    }
    while ( v1 < *(_BYTE *)(dword_30007B0 + 26) );
  }
  GetMonData((int)&dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)], 2, (int)&v4);
  StringCopy10((int)&gStringVar1, (int)&v4);
  StringCopy((_BYTE *)(dword_30007B0 + 25 * *(_BYTE *)(dword_30007B0 + 26) + 82), &UnknownText_Exit);
  ++*(_BYTE *)(dword_30007B0 + 26);
  return v5;
}
