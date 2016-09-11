int __fastcall gpu_pal_decompress_alloc_tag_and_upload(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_8072DEC(v1);
  MenuZeroFillWindowRect(0, 0, 0xAu, 9u);
  MenuFillWindowRectWithBlankTile(2u, 0xFu, 0x1Bu, 0x12u);
  FreeSpritePaletteByTag(6u);
  if ( v201F009 )
  {
    sub_8139E24(v2);
  }
  else
  {
    script_env_1_execute_new_script((int)&gUnknown_0815F399);
    DestroyTask(v2);
  }
  return v4;
}
