int __fastcall sub_814A758(unsigned __int8 a1, char a2, char a3, unsigned __int8 a4)
{
  char v4; // r5@1
  int v5; // r4@1

  v4 = a2;
  v5 = (unsigned __int8)sub_814A5C0(a1, 0, a3, 0, a4);
  if ( v5 != 64 )
    gSprites[68 * v203A3D0 + 5] = gSprites[68 * v203A3D0 + 5] & 0xF | 16 * v4;
  return v5;
}
