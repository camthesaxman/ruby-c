int unref_sub_8031BA0()
{
  signed int v0; // r0@1
  unsigned int v1; // r5@2
  unsigned int i; // r4@4
  int v4; // [sp+10h] [bp-4h]@0

  LoadSpritePalette((int)&gUnknown_0820A4D4);
  v0 = LoadSpritePalette((int)&unk_820A4DC);
  if ( battle_type_is_double(v0) << 24 )
  {
    LoadCompressedObjectPic(&gUnknown_0820A48C);
    LoadCompressedObjectPic(&gUnknown_0820A494);
    LoadCompressedObjectPic(&gUnknown_0820A49C);
    LoadCompressedObjectPic(&gUnknown_0820A4A4);
    v1 = 4;
  }
  else
  {
    LoadCompressedObjectPic(&gUnknown_0820A47C);
    LoadCompressedObjectPic(&gUnknown_0820A484);
    v1 = 2;
  }
  for ( i = 0; i < v1; i = (i + 1) & 0xFF )
    LoadCompressedObjectPic(&gUnknown_0820A4B4[2 * *(_BYTE *)(i + 33704562)]);
  return v4;
}
