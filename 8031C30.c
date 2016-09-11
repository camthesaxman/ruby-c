signed int __fastcall sub_8031C30(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  signed int v4; // r6@1
  int v5; // r0@12

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = 0;
  if ( v1 >> 24 )
  {
    if ( v2 == 1 )
    {
      LoadSpritePalette((int)&gUnknown_0820A4D4);
      LoadSpritePalette((int)&unk_820A4DC);
      return v4;
    }
    if ( battle_type_is_double(v1) << 24 )
    {
      if ( v2 == 2 )
      {
        LoadCompressedObjectPic(&gUnknown_0820A48C);
        return v4;
      }
      if ( v2 == 3 )
      {
        LoadCompressedObjectPic(&gUnknown_0820A494);
        return v4;
      }
      if ( v2 == 4 )
      {
        LoadCompressedObjectPic(&gUnknown_0820A49C);
        return v4;
      }
      if ( v2 == 5 )
      {
        LoadCompressedObjectPic(&gUnknown_0820A4A4);
        return v4;
      }
      if ( v2 == 6 )
      {
        v5 = v2024A72;
        goto _08031D3C;
      }
      if ( v2 == 7 )
      {
        v5 = v2024A73;
        goto _08031D3C;
      }
      if ( v2 == 8 )
      {
        v5 = v2024A74;
        goto _08031D3C;
      }
      if ( v3 == 9 )
      {
        v5 = v2024A75;
        goto _08031D3C;
      }
    }
    else
    {
      if ( v2 == 2 )
      {
        if ( v20239F8 & 0x80 )
          LoadCompressedObjectPic(&gUnknown_0820A4AC);
        else
          LoadCompressedObjectPic(&gUnknown_0820A47C);
        return v4;
      }
      if ( v2 == 3 )
      {
        LoadCompressedObjectPic(&gUnknown_0820A484);
        return v4;
      }
      if ( v2 == 4 )
      {
        v5 = v2024A72;
_08031D3C:
        LoadCompressedObjectPic(&gUnknown_0820A4B4[2 * v5]);
        return v4;
      }
      if ( v2 == 5 )
      {
        v5 = v2024A73;
        goto _08031D3C;
      }
    }
    v4 = 1;
  }
  return v4;
}
