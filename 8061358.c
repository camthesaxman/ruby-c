signed int __fastcall sub_8061358(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  char v6; // r0@4
  char v7; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)sub_8061300(a1, a2);
  if ( v4 == 1 )
  {
    v6 = GetOppositeDirection(*(_BYTE *)(v2 + 24) >> 4);
    FieldObjectSetDirection(v2, v6);
    v7 = get_go_image_anim_num(*(_BYTE *)(v2 + 24) & 0xF);
    sub_805FE64(v2, v3, v7);
  }
  else if ( v4 == 255 )
  {
    return 1;
  }
  return 0;
}
