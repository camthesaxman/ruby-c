int __fastcall sub_8141828(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  signed int v4; // r8@1
  unsigned int v5; // r5@1
  int v6; // r2@1
  unsigned int v7; // r4@1
  int v8; // r4@7
  unsigned __int8 v9; // r0@7
  int *v10; // r2@7
  int *v11; // r1@7
  int v13; // [sp+14h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = 0;
  *(_BYTE *)(12 * a1 + 0x2017810) |= 0x80u;
  v5 = GetMonData(a2, 1, 128);
  v7 = GetMonData(v2, 0, v6);
  if ( !(b_side_obj__get_some_boolean(v3) << 24) )
    goto LABEL_12;
  if ( ((v5 >> 16) ^ (unsigned __int16)v5 ^ (v7 >> 16) ^ (unsigned __int16)v7) <= 7 )
    v4 = 1;
  if ( v4 )
  {
    if ( (unsigned __int16)GetSpriteTileStartByTag(0x27F9u) == 0xFFFF )
    {
      LoadCompressedObjectPic(&off_837E8AC);
      LoadCompressedObjectPalette(&off_837F1B4);
    }
    v8 = (unsigned __int8)CreateTask((int)sub_814191C, 10);
    v9 = CreateTask((int)sub_814191C, 10);
    v10 = &dword_3004B20[10 * v8];
    *((_WORD *)v10 + 4) = v3;
    v11 = &dword_3004B20[10 * v9];
    *((_WORD *)v11 + 4) = v3;
    *((_WORD *)v10 + 5) = 0;
    *((_WORD *)v11 + 5) = 1;
  }
  else
  {
LABEL_12:
    *(_BYTE *)(12 * v3 + 0x2017811) |= 1u;
  }
  return v13;
}
